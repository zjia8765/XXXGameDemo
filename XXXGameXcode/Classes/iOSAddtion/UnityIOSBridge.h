//
//  UnityIOSBridge.h
//  Unity-iPhone
//
//  Created by zhangjia on 2017/7/12.
//

#import <Foundation/Foundation.h>

@interface UnityIOSBridge : NSObject
+ (UnityIOSBridge *)sharedManager;

- (void)addMyCustomButton;
@end
