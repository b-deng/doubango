/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_tinyWRAP_WRAP_H_
#define SWIG_tinyWRAP_WRAP_H_

#include <map>
#include <string>


class SwigDirector_DDebugCallback : public DDebugCallback, public Swig::Director {

public:
    SwigDirector_DDebugCallback(PyObject *self);
    virtual ~SwigDirector_DDebugCallback();
    virtual int OnDebugInfo(char const *message);
    virtual int OnDebugWarn(char const *message);
    virtual int OnDebugError(char const *message);
    virtual int OnDebugFatal(char const *message);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class DDebugCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[4];
#endif

};


class SwigDirector_T140Callback : public T140Callback, public Swig::Director {

public:
    SwigDirector_T140Callback(PyObject *self);
    virtual ~SwigDirector_T140Callback();
    virtual int ondata(T140CallbackData const *pData);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class T140Callback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_ProxyPluginMgrCallback : public ProxyPluginMgrCallback, public Swig::Director {

public:
    SwigDirector_ProxyPluginMgrCallback(PyObject *self);
    virtual ~SwigDirector_ProxyPluginMgrCallback();
    virtual int OnPluginCreated(uint64_t id, enum twrap_proxy_plugin_type_e type);
    virtual int OnPluginDestroyed(uint64_t id, enum twrap_proxy_plugin_type_e type);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ProxyPluginMgrCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[2];
#endif

};


class SwigDirector_ProxyAudioConsumerCallback : public ProxyAudioConsumerCallback, public Swig::Director {

public:
    SwigDirector_ProxyAudioConsumerCallback(PyObject *self);
    virtual ~SwigDirector_ProxyAudioConsumerCallback();
    virtual int prepare(int ptime, int rate, int channels);
    virtual int start();
    virtual int pause();
    virtual int stop();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ProxyAudioConsumerCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[4];
#endif

};


class SwigDirector_ProxyVideoConsumerCallback : public ProxyVideoConsumerCallback, public Swig::Director {

public:
    SwigDirector_ProxyVideoConsumerCallback(PyObject *self);
    virtual ~SwigDirector_ProxyVideoConsumerCallback();
    virtual int prepare(int nWidth, int nHeight, int nFps);
    virtual int consume(ProxyVideoFrame const *frame);
    virtual int bufferCopied(unsigned int nCopiedSize, unsigned int nAvailableSize);
    virtual int start();
    virtual int pause();
    virtual int stop();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ProxyVideoConsumerCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[6];
#endif

};


class SwigDirector_ProxyAudioProducerCallback : public ProxyAudioProducerCallback, public Swig::Director {

public:
    SwigDirector_ProxyAudioProducerCallback(PyObject *self);
    virtual ~SwigDirector_ProxyAudioProducerCallback();
    virtual int prepare(int ptime, int rate, int channels);
    virtual int start();
    virtual int pause();
    virtual int stop();
    virtual int fillPushBuffer();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ProxyAudioProducerCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[5];
#endif

};


class SwigDirector_ProxyVideoProducerCallback : public ProxyVideoProducerCallback, public Swig::Director {

public:
    SwigDirector_ProxyVideoProducerCallback(PyObject *self);
    virtual ~SwigDirector_ProxyVideoProducerCallback();
    virtual int prepare(int width, int height, int fps);
    virtual int start();
    virtual int pause();
    virtual int stop();


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ProxyVideoProducerCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[4];
#endif

};


class SwigDirector_SipCallback : public SipCallback, public Swig::Director {

public:
    SwigDirector_SipCallback(PyObject *self);
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


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class SipCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[9];
#endif

};


class SwigDirector_XcapCallback : public XcapCallback, public Swig::Director {

public:
    SwigDirector_XcapCallback(PyObject *self);
    virtual ~SwigDirector_XcapCallback();
    virtual int onEvent(XcapEvent const *e) const;


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class XcapCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_MsrpCallback : public MsrpCallback, public Swig::Director {

public:
    SwigDirector_MsrpCallback(PyObject *self);
    virtual ~SwigDirector_MsrpCallback();
    virtual int OnEvent(MsrpEvent const *e);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class MsrpCallback doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


#endif
