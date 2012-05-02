/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.doubango.tinyWRAP;

public class ProxyVideoProducer extends ProxyPlugin {
  private long swigCPtr;

  public ProxyVideoProducer(long cPtr, boolean cMemoryOwn) {
    super(tinyWRAPJNI.ProxyVideoProducer_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  public static long getCPtr(ProxyVideoProducer obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        tinyWRAPJNI.delete_ProxyVideoProducer(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public int getRotation() {
    return tinyWRAPJNI.ProxyVideoProducer_getRotation(swigCPtr, this);
  }

  public boolean setRotation(int nRot) {
    return tinyWRAPJNI.ProxyVideoProducer_setRotation(swigCPtr, this, nRot);
  }

  public boolean setActualCameraOutputSize(long nWidth, long nHeight) {
    return tinyWRAPJNI.ProxyVideoProducer_setActualCameraOutputSize(swigCPtr, this, nWidth, nHeight);
  }

  public int push(java.nio.ByteBuffer pBuffer, long nSize) {
    return tinyWRAPJNI.ProxyVideoProducer_push(swigCPtr, this, pBuffer, nSize);
  }

  public int send(java.nio.ByteBuffer pBuffer, long nSize, long nDuration, boolean bMarker) {
    return tinyWRAPJNI.ProxyVideoProducer_send(swigCPtr, this, pBuffer, nSize, nDuration, bMarker);
  }

  public void setCallback(ProxyVideoProducerCallback pCallback) {
    tinyWRAPJNI.ProxyVideoProducer_setCallback(swigCPtr, this, ProxyVideoProducerCallback.getCPtr(pCallback), pCallback);
  }

  public java.math.BigInteger getMediaSessionId() {
    return tinyWRAPJNI.ProxyVideoProducer_getMediaSessionId(swigCPtr, this);
  }

  public static boolean registerPlugin() {
    return tinyWRAPJNI.ProxyVideoProducer_registerPlugin();
  }

  public static void setDefaultChroma(tmedia_chroma_t eChroma) {
    tinyWRAPJNI.ProxyVideoProducer_setDefaultChroma(eChroma.swigValue());
  }

}
