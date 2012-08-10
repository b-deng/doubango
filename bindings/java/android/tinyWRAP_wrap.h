/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.4
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_tinyWRAP_WRAP_H_
#define SWIG_tinyWRAP_WRAP_H_

class SwigDirector_DDebugCallback : public DDebugCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_DDebugCallback(JNIEnv *jenv);
    virtual ~SwigDirector_DDebugCallback();
    virtual int OnDebugInfo(char const *message);
    virtual int OnDebugWarn(char const *message);
    virtual int OnDebugError(char const *message);
    virtual int OnDebugFatal(char const *message);
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};

class SwigDirector_ProxyPluginMgrCallback : public ProxyPluginMgrCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ProxyPluginMgrCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ProxyPluginMgrCallback();
    virtual int OnPluginCreated(uint64_t id, enum twrap_proxy_plugin_type_e type);
    virtual int OnPluginDestroyed(uint64_t id, enum twrap_proxy_plugin_type_e type);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

class SwigDirector_ProxyAudioConsumerCallback : public ProxyAudioConsumerCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ProxyAudioConsumerCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ProxyAudioConsumerCallback();
    virtual int prepare(int ptime, int rate, int channels);
    virtual int start();
    virtual int pause();
    virtual int stop();
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};

class SwigDirector_ProxyVideoConsumerCallback : public ProxyVideoConsumerCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ProxyVideoConsumerCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ProxyVideoConsumerCallback();
    virtual int prepare(int nWidth, int nHeight, int nFps);
    virtual int consume(ProxyVideoFrame const *frame);
    virtual int bufferCopied(unsigned int nCopiedSize, unsigned int nAvailableSize);
    virtual int start();
    virtual int pause();
    virtual int stop();
public:
    bool swig_overrides(int n) {
      return (n < 6 ? swig_override[n] : false);
    }
protected:
    bool swig_override[6];
};

class SwigDirector_ProxyAudioProducerCallback : public ProxyAudioProducerCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ProxyAudioProducerCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ProxyAudioProducerCallback();
    virtual int prepare(int ptime, int rate, int channels);
    virtual int start();
    virtual int pause();
    virtual int stop();
    virtual int fillPushBuffer();
public:
    bool swig_overrides(int n) {
      return (n < 5 ? swig_override[n] : false);
    }
protected:
    bool swig_override[5];
};

class SwigDirector_ProxyVideoProducerCallback : public ProxyVideoProducerCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_ProxyVideoProducerCallback(JNIEnv *jenv);
    virtual ~SwigDirector_ProxyVideoProducerCallback();
    virtual int prepare(int width, int height, int fps);
    virtual int start();
    virtual int pause();
    virtual int stop();
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};

class SwigDirector_SipCallback : public SipCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_SipCallback(JNIEnv *jenv);
    virtual ~SwigDirector_SipCallback();
    virtual int OnDialogEvent(DialogEvent const *e);
    virtual int OnStackEvent(StackEvent const *e);
    virtual int OnInviteEvent(InviteEvent const *e);
    virtual int OnMessagingEvent(MessagingEvent const *e);
    virtual int OnInfoEvent(InfoEvent const *e);
    virtual int OnOptionsEvent(OptionsEvent const *e);
    virtual int OnPublicationEvent(PublicationEvent const *e);
    virtual int OnRegistrationEvent(RegistrationEvent const *e);
    virtual int OnSubscriptionEvent(SubscriptionEvent const *e);
public:
    bool swig_overrides(int n) {
      return (n < 9 ? swig_override[n] : false);
    }
protected:
    bool swig_override[9];
};

class SwigDirector_XcapCallback : public XcapCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_XcapCallback(JNIEnv *jenv);
    virtual ~SwigDirector_XcapCallback();
    virtual int onEvent(XcapEvent const *e) const;
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

class SwigDirector_MsrpCallback : public MsrpCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MsrpCallback(JNIEnv *jenv);
    virtual ~SwigDirector_MsrpCallback();
    virtual int OnEvent(MsrpEvent const *e);
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};


#endif
