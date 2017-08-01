#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Main
struct Main_t2809994845;
// System.String
struct String_t;
// Main/CallBack
struct CallBack_t680792167;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_Main2809994845.h"
#include "AssemblyU2DCSharp_Main2809994845MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Main_CallBack680792167.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Main_CallBack680792167MethodDeclarations.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GUI4082743951MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color2020392075MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyleState3801000545MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Rect3681755626MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_GUIStyleState3801000545.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_AsyncCallback163412349.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main::.ctor()
extern "C"  void Main__ctor_m325986520 (Main_t2809994845 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" char* DEFAULT_CALL getuserInfo();
// System.String Main::getuserInfo()
extern "C"  String_t* Main_getuserInfo_m1951820632 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(getuserInfo)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL showAlertWithContent(char*);
// System.Void Main::showAlertWithContent(System.String)
extern "C"  void Main_showAlertWithContent_m1739927590 (Il2CppObject * __this /* static, unused */, String_t* ___content0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___content0' to native representation
	char* ____content0_marshaled = NULL;
	____content0_marshaled = il2cpp_codegen_marshal_string(___content0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(showAlertWithContent)(____content0_marshaled);

	// Marshaling cleanup of parameter '___content0' native representation
	il2cpp_codegen_marshal_free(____content0_marshaled);
	____content0_marshaled = NULL;

}
extern "C" void DEFAULT_CALL loginWithFinishCallBack(Il2CppMethodPointer);
// System.Void Main::loginWithFinishCallBack(Main/CallBack)
extern "C"  void Main_loginWithFinishCallBack_m1886411894 (Il2CppObject * __this /* static, unused */, CallBack_t680792167 * ___cb0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___cb0' to native representation
	Il2CppMethodPointer ____cb0_marshaled = NULL;
	____cb0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___cb0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(loginWithFinishCallBack)(____cb0_marshaled);

}
// System.Int32 Main::UnityLoginFinsihCallBack(System.String)
extern Il2CppClass* Main_t2809994845_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1200633150;
extern const uint32_t Main_UnityLoginFinsihCallBack_m1471320388_MetadataUsageId;
extern "C"  int32_t Main_UnityLoginFinsihCallBack_m1471320388 (Il2CppObject * __this /* static, unused */, String_t* ___param0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_UnityLoginFinsihCallBack_m1471320388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___param0;
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2809994845_il2cpp_TypeInfo_var);
		((Main_t2809994845_StaticFields*)Main_t2809994845_il2cpp_TypeInfo_var->static_fields)->set_labelValue_2(L_0);
		String_t* L_1 = ___param0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral1200633150, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return ((int32_t)100);
	}
}
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Main_UnityLoginFinsihCallBack_m1471320388(char* ___param0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___param0' to managed representation
	String_t* ____param0_unmarshaled = NULL;
	____param0_unmarshaled = il2cpp_codegen_marshal_string_result(___param0);

	// Managed method invocation
	int32_t returnValue = ::Main_UnityLoginFinsihCallBack_m1471320388(NULL, ____param0_unmarshaled, NULL);

	return returnValue;
}
// System.Void Main::Start()
extern Il2CppClass* Main_t2809994845_il2cpp_TypeInfo_var;
extern Il2CppClass* CallBack_t680792167_il2cpp_TypeInfo_var;
extern const MethodInfo* Main_UnityLoginFinsihCallBack_m1471320388_MethodInfo_var;
extern const uint32_t Main_Start_m2091519880_MetadataUsageId;
extern "C"  void Main_Start_m2091519880 (Main_t2809994845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_Start_m2091519880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2809994845_il2cpp_TypeInfo_var);
		CallBack_t680792167 * L_0 = ((Main_t2809994845_StaticFields*)Main_t2809994845_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__mgU24cache0_3();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		IntPtr_t L_1;
		L_1.set_m_value_0((void*)(void*)Main_UnityLoginFinsihCallBack_m1471320388_MethodInfo_var);
		CallBack_t680792167 * L_2 = (CallBack_t680792167 *)il2cpp_codegen_object_new(CallBack_t680792167_il2cpp_TypeInfo_var);
		CallBack__ctor_m2706899012(L_2, NULL, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2809994845_il2cpp_TypeInfo_var);
		((Main_t2809994845_StaticFields*)Main_t2809994845_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__mgU24cache0_3(L_2);
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2809994845_il2cpp_TypeInfo_var);
		CallBack_t680792167 * L_3 = ((Main_t2809994845_StaticFields*)Main_t2809994845_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__mgU24cache0_3();
		Main_loginWithFinishCallBack_m1886411894(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::Update()
extern "C"  void Main_Update_m2467676297 (Main_t2809994845 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Main::OnGUI()
extern Il2CppClass* GUI_t4082743951_il2cpp_TypeInfo_var;
extern Il2CppClass* Main_t2809994845_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* GUIStyle_t1799908754_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3297685426;
extern Il2CppCodeGenString* _stringLiteral182327709;
extern Il2CppCodeGenString* _stringLiteral867031741;
extern Il2CppCodeGenString* _stringLiteral368604733;
extern const uint32_t Main_OnGUI_m4007704720_MetadataUsageId;
extern "C"  void Main_OnGUI_m4007704720 (Main_t2809994845 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_OnGUI_m4007704720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GUIStyle_t1799908754 * V_1 = NULL;
	{
		Rect_t3681755626  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m1220545469(&L_0, (20.0f), (60.0f), (120.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m3054448581(NULL /*static, unused*/, L_0, _stringLiteral3297685426, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2809994845_il2cpp_TypeInfo_var);
		String_t* L_2 = Main_getuserInfo_m1951820632(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral182327709, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		((Main_t2809994845_StaticFields*)Main_t2809994845_il2cpp_TypeInfo_var->static_fields)->set_labelValue_2(L_5);
	}

IL_0044:
	{
		Rect_t3681755626  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Rect__ctor_m1220545469(&L_6, (20.0f), (140.0f), (120.0f), (60.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		bool L_7 = GUI_Button_m3054448581(NULL /*static, unused*/, L_6, _stringLiteral867031741, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2809994845_il2cpp_TypeInfo_var);
		Main_showAlertWithContent_m1739927590(NULL /*static, unused*/, _stringLiteral368604733, /*hidden argument*/NULL);
	}

IL_0076:
	{
		GUIStyle_t1799908754 * L_8 = (GUIStyle_t1799908754 *)il2cpp_codegen_object_new(GUIStyle_t1799908754_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m3665892801(L_8, /*hidden argument*/NULL);
		V_1 = L_8;
		GUIStyle_t1799908754 * L_9 = V_1;
		NullCheck(L_9);
		GUIStyleState_t3801000545 * L_10 = GUIStyle_get_normal_m2789468942(L_9, /*hidden argument*/NULL);
		Color_t2020392075  L_11 = Color_get_black_m2650940523(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		GUIStyleState_set_textColor_m3970174237(L_10, L_11, /*hidden argument*/NULL);
		GUIStyle_t1799908754 * L_12 = V_1;
		NullCheck(L_12);
		GUIStyle_set_fontSize_m4015341543(L_12, ((int32_t)20), /*hidden argument*/NULL);
		Rect_t3681755626  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Rect__ctor_m1220545469(&L_13, (20.0f), (240.0f), (800.0f), (600.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2809994845_il2cpp_TypeInfo_var);
		String_t* L_14 = ((Main_t2809994845_StaticFields*)Main_t2809994845_il2cpp_TypeInfo_var->static_fields)->get_labelValue_2();
		GUIStyle_t1799908754 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		GUI_Label_m2231582000(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Main::updateLabelContent(System.String)
extern Il2CppClass* Main_t2809994845_il2cpp_TypeInfo_var;
extern const uint32_t Main_updateLabelContent_m102698458_MetadataUsageId;
extern "C"  void Main_updateLabelContent_m102698458 (Main_t2809994845 * __this, String_t* ___content0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main_updateLabelContent_m102698458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___content0;
		IL2CPP_RUNTIME_CLASS_INIT(Main_t2809994845_il2cpp_TypeInfo_var);
		((Main_t2809994845_StaticFields*)Main_t2809994845_il2cpp_TypeInfo_var->static_fields)->set_labelValue_2(L_0);
		return;
	}
}
// System.Void Main::.cctor()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Main_t2809994845_il2cpp_TypeInfo_var;
extern const uint32_t Main__cctor_m2288302007_MetadataUsageId;
extern "C"  void Main__cctor_m2288302007 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Main__cctor_m2288302007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		((Main_t2809994845_StaticFields*)Main_t2809994845_il2cpp_TypeInfo_var->static_fields)->set_labelValue_2(L_0);
		return;
	}
}
// System.Void Main/CallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void CallBack__ctor_m2706899012 (CallBack_t680792167 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Main/CallBack::Invoke(System.String)
extern "C"  int32_t CallBack_Invoke_m2377893606 (CallBack_t680792167 * __this, String_t* ___param0, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CallBack_Invoke_m2377893606((CallBack_t680792167 *)__this->get_prev_9(),___param0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, String_t* ___param0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___param0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (void* __this, String_t* ___param0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___param0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(___param0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
extern "C"  int32_t DelegatePInvokeWrapper_CallBack_t680792167 (CallBack_t680792167 * __this, String_t* ___param0, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___param0' to native representation
	char* ____param0_marshaled = NULL;
	____param0_marshaled = il2cpp_codegen_marshal_string(___param0);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____param0_marshaled);

	// Marshaling cleanup of parameter '___param0' native representation
	il2cpp_codegen_marshal_free(____param0_marshaled);
	____param0_marshaled = NULL;

	return returnValue;
}
// System.IAsyncResult Main/CallBack::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CallBack_BeginInvoke_m2725559739 (CallBack_t680792167 * __this, String_t* ___param0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___param0;
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// System.Int32 Main/CallBack::EndInvoke(System.IAsyncResult)
extern "C"  int32_t CallBack_EndInvoke_m4032999552 (CallBack_t680792167 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
