/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.doubango.tinyWRAP;

public class InfoEvent extends SipEvent {
  private long swigCPtr;

  protected InfoEvent(long cPtr, boolean cMemoryOwn) {
    super(tinyWRAPJNI.SWIGInfoEventUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(InfoEvent obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        tinyWRAPJNI.delete_InfoEvent(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public tsip_info_event_type_t getType() {
    return tsip_info_event_type_t.swigToEnum(tinyWRAPJNI.InfoEvent_getType(swigCPtr, this));
  }

  public InfoSession getSession() {
    long cPtr = tinyWRAPJNI.InfoEvent_getSession(swigCPtr, this);
    return (cPtr == 0) ? null : new InfoSession(cPtr, false);
  }

  public InfoSession takeSessionOwnership() {
    long cPtr = tinyWRAPJNI.InfoEvent_takeSessionOwnership(swigCPtr, this);
    return (cPtr == 0) ? null : new InfoSession(cPtr, false);
  }

}
