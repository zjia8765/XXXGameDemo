#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Main/CallBack
struct CallBack_t680792167;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Main/CallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void CallBack__ctor_m2706899012 (CallBack_t680792167 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main/CallBack::Invoke(System.String)
extern "C"  void CallBack_Invoke_m1603835916 (CallBack_t680792167 * __this, String_t* ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Main/CallBack::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CallBack_BeginInvoke_m2725559739 (CallBack_t680792167 * __this, String_t* ___param0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main/CallBack::EndInvoke(System.IAsyncResult)
extern "C"  void CallBack_EndInvoke_m3885442306 (CallBack_t680792167 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
