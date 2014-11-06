/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace org.doubango.tinyWRAP {

using System;
using System.Runtime.InteropServices;

public class MsrpMessage : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal MsrpMessage(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(MsrpMessage obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~MsrpMessage() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          tinyWRAPPINVOKE.delete_MsrpMessage(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public MsrpMessage() : this(tinyWRAPPINVOKE.new_MsrpMessage(), true) {
  }

  public bool isRequest() {
    bool ret = tinyWRAPPINVOKE.MsrpMessage_isRequest(swigCPtr);
    return ret;
  }

  public short getCode() {
    short ret = tinyWRAPPINVOKE.MsrpMessage_getCode(swigCPtr);
    return ret;
  }

  public string getPhrase() {
    string ret = tinyWRAPPINVOKE.MsrpMessage_getPhrase(swigCPtr);
    return ret;
  }

  public tmsrp_request_type_t getRequestType() {
    tmsrp_request_type_t ret = (tmsrp_request_type_t)tinyWRAPPINVOKE.MsrpMessage_getRequestType(swigCPtr);
    return ret;
  }

  public void getByteRange(out long arg0, out long arg1, out long arg2) {
    tinyWRAPPINVOKE.MsrpMessage_getByteRange(swigCPtr, out arg0, out arg1, out arg2);
  }

  public bool isLastChunck() {
    bool ret = tinyWRAPPINVOKE.MsrpMessage_isLastChunck(swigCPtr);
    return ret;
  }

  public bool isFirstChunck() {
    bool ret = tinyWRAPPINVOKE.MsrpMessage_isFirstChunck(swigCPtr);
    return ret;
  }

  public bool isSuccessReport() {
    bool ret = tinyWRAPPINVOKE.MsrpMessage_isSuccessReport(swigCPtr);
    return ret;
  }

  public string getMsrpHeaderValue(string name) {
    string ret = tinyWRAPPINVOKE.MsrpMessage_getMsrpHeaderValue(swigCPtr, name);
    return ret;
  }

  public string getMsrpHeaderParamValue(string name, string param) {
    string ret = tinyWRAPPINVOKE.MsrpMessage_getMsrpHeaderParamValue(swigCPtr, name, param);
    return ret;
  }

  public uint getMsrpContentLength() {
    uint ret = tinyWRAPPINVOKE.MsrpMessage_getMsrpContentLength(swigCPtr);
    return ret;
  }

  public uint getMsrpContent(IntPtr output, uint maxsize) {
    uint ret = tinyWRAPPINVOKE.MsrpMessage_getMsrpContent(swigCPtr, output, maxsize);
    return ret;
  }

}

}
