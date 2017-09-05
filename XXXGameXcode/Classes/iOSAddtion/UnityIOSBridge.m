//
//  UnityIOSBridge.m
//  Unity-iPhone
//
//  Created by zhangjia on 2017/7/12.
//

#import "UnityIOSBridge.h"


typedef void (*Unity_CallBack)(const char * p);

@interface UnityIOSBridge()
@property  Unity_CallBack callBack;
@end


@implementation UnityIOSBridge

static UnityIOSBridge *sharedManager;
+ (UnityIOSBridge *)sharedManager
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedManager = [[self alloc] init];
    });
    return sharedManager;
}

- (id)init {
    self = [super init];
    if (self) {

    }
    return self;
}

- (void)addMyCustomButton {
    UIButton *tempButton = [UIButton buttonWithType:UIButtonTypeCustom];
    tempButton.backgroundColor = [UIColor whiteColor];
    tempButton.layer.masksToBounds = YES;
    tempButton.layer.cornerRadius = 3;
    [tempButton setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    [tempButton setTitle:@"调用Unity方法" forState:UIControlStateNormal];
    tempButton.titleLabel.font = [UIFont systemFontOfSize:11];
    [tempButton addTarget:self action:@selector(callUnityFuncAction) forControlEvents:UIControlEventTouchUpInside];
    
    UIButton *callBackButton = [UIButton buttonWithType:UIButtonTypeCustom];
    callBackButton.backgroundColor = [UIColor whiteColor];
    callBackButton.layer.masksToBounds = YES;
    callBackButton.layer.cornerRadius = 3;
    [callBackButton setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    [callBackButton setTitle:@"登录成功回调" forState:UIControlStateNormal];
    callBackButton.titleLabel.font = [UIFont systemFontOfSize:11];
    [callBackButton addTarget:self action:@selector(loginFinishCallBackFunc) forControlEvents:UIControlEventTouchUpInside];
    
    [self performSelector:@selector(showCustomButton:) withObject:@[tempButton,callBackButton] afterDelay:4.f];
}

- (void)showCustomButton:(NSArray *)views {
    UIWindow *window = [UIApplication sharedApplication].keyWindow;
    UIView *rootView = window.rootViewController.view;
    
    UIButton *button = views[0];
    [rootView addSubview:button];
    button.translatesAutoresizingMaskIntoConstraints = NO;
    [rootView addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:[button(100)]-10-|" options:0 metrics:nil views:@{@"button": button}]];
    [rootView addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:[button(40)]-80-|" options:0 metrics:nil views:@{@"button": button}]];
    
    UIButton *button1 = views[1];
    [rootView addSubview:button1];
    button1.translatesAutoresizingMaskIntoConstraints = NO;
    [rootView addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:[button1(100)]-10-|" options:0 metrics:nil views:@{@"button1": button1}]];
    [rootView addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:[button1(40)]-20-|" options:0 metrics:nil views:@{@"button1": button1}]];
    
    
}

- (void)callUnityFuncAction {
    NSString *text = @"iOS回调Unity方法成功！！！";
    UnitySendMessage("Main Camera","updateLabelContent",[text UTF8String]);
}

- (void)loginFinishCallBackFunc {
    NSString *text = [UnityIOSBridge stringTransformFromDictionary:@{@"code":@"0",@"result":@{@"uid":@"12345678",@"name":@"zjia8765",@"avatar":@"http://xxxxxxx.png"}}];
    self.callBack([UnityIOSBridge charFromString:text]);
}

- (NSString *)currentUser {
    return [UnityIOSBridge stringTransformFromDictionary:@{@"uid":@"12345678",@"name":@"zjia8765",@"avatar":@"http://xxxxxxx.png"}];
}

- (void)showAlertWithContent:(NSString *)content {
    UIAlertController *alertView = [UIAlertController alertControllerWithTitle:@"提示" message:content preferredStyle:UIAlertControllerStyleAlert];
    UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil];
    [alertView addAction:cancelAction];
    
    UIWindow *window = [UIApplication sharedApplication].keyWindow;
    [window.rootViewController presentViewController:alertView animated:YES completion:nil];
}


+ (NSString *)stringTransformFromDictionary:(NSDictionary *)dic {
    if (!dic) {
        return @"";
    }
    
    NSData *data = [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:nil];
    NSString *string = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
    
 
    return string;
}

+ (char *)charFromString:(NSString *)param {
    const char *string = [param UTF8String];
    char *res = (char *)malloc(strlen(string) + 1);
    strcpy(res, string);
    return res;
}

@end


#if defined(__cplusplus)
extern "C" {
#endif
    
    NSString *CStringToNSString(const char *string)
    {
        if (string)
            return [NSString stringWithUTF8String:string];
        else
            return [NSString stringWithUTF8String:""];
    }
    
    char *MakeStringCopy(const char *string)
    {
        if (string == NULL)
            return NULL;
        
        char *res = (char *)malloc(strlen(string) + 1);
        strcpy(res, string);
        return res;
    }
    
    void loginWithFinishCallBack(Unity_CallBack callback){
        [UnityIOSBridge sharedManager].callBack = callback;
    }
    
    const char *getuserInfo()
    {
        return MakeStringCopy([[[UnityIOSBridge sharedManager] currentUser] UTF8String]);
    }
    
    void showAlertWithContent(const char *content)
    {
        [[UnityIOSBridge sharedManager] showAlertWithContent:CStringToNSString(content)];
    }
    
    
#if defined(__cplusplus)
}
#endif
