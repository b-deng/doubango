/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.8
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace org.doubango.tinyWRAP {

using System;
using System.Runtime.InteropServices;

public class MsrpCallback : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal MsrpCallback(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(MsrpCallback obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~MsrpCallback() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          tinyWRAPPINVOKE.delete_MsrpCallback(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public MsrpCallback() : this(tinyWRAPPINVOKE.new_MsrpCallback(), true) {
    SwigDirectorConnect();
  }

  public virtual int OnEvent(MsrpEvent e) {
    int ret = (SwigDerivedClassHasMethod("OnEvent", swigMethodTypes0) ? tinyWRAPPINVOKE.MsrpCallback_OnEventSwigExplicitMsrpCallback(swigCPtr, MsrpEvent.getCPtr(e)) : tinyWRAPPINVOKE.MsrpCallback_OnEvent(swigCPtr, MsrpEvent.getCPtr(e)));
    return ret;
  }

  private void SwigDirectorConnect() {
    if (SwigDerivedClassHasMethod("OnEvent", swigMethodTypes0))
      swigDelegate0 = new SwigDelegateMsrpCallback_0(SwigDirectorOnEvent);
    tinyWRAPPINVOKE.MsrpCallback_director_connect(swigCPtr, swigDelegate0);
  }

  private bool SwigDerivedClassHasMethod(string methodName, Type[] methodTypes) {
    System.Reflection.MethodInfo methodInfo = this.GetType().GetMethod(methodName, System.Reflection.BindingFlags.Public | System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance, null, methodTypes, null);
    bool hasDerivedMethod = methodInfo.DeclaringType.IsSubclassOf(typeof(MsrpCallback));
    return hasDerivedMethod;
  }

  private int SwigDirectorOnEvent(IntPtr e) {
    return OnEvent((e == IntPtr.Zero) ? null : new MsrpEvent(e, false));
  }

  public delegate int SwigDelegateMsrpCallback_0(IntPtr e);

  private SwigDelegateMsrpCallback_0 swigDelegate0;

  private static Type[] swigMethodTypes0 = new Type[] { typeof(MsrpEvent) };
}

}
