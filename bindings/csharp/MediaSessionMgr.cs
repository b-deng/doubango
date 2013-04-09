/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace org.doubango.tinyWRAP {

using System;
using System.Runtime.InteropServices;

public class MediaSessionMgr : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal MediaSessionMgr(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(MediaSessionMgr obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~MediaSessionMgr() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          tinyWRAPPINVOKE.delete_MediaSessionMgr(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public bool sessionSetInt32(twrap_media_type_t media, string key, int value) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_sessionSetInt32(swigCPtr, (int)media, key, value);
    return ret;
  }

  public int sessionGetInt32(twrap_media_type_t media, string key) {
    int ret = tinyWRAPPINVOKE.MediaSessionMgr_sessionGetInt32(swigCPtr, (int)media, key);
    return ret;
  }

  public bool consumerSetInt32(twrap_media_type_t media, string key, int value) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_consumerSetInt32(swigCPtr, (int)media, key, value);
    return ret;
  }

  public bool consumerSetInt64(twrap_media_type_t media, string key, long value) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_consumerSetInt64(swigCPtr, (int)media, key, value);
    return ret;
  }

  public bool producerSetInt32(twrap_media_type_t media, string key, int value) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_producerSetInt32(swigCPtr, (int)media, key, value);
    return ret;
  }

  public bool producerSetInt64(twrap_media_type_t media, string key, long value) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_producerSetInt64(swigCPtr, (int)media, key, value);
    return ret;
  }

  public Codec producerGetCodec(twrap_media_type_t media) {
    IntPtr cPtr = tinyWRAPPINVOKE.MediaSessionMgr_producerGetCodec(swigCPtr, (int)media);
    Codec ret = (cPtr == IntPtr.Zero) ? null : new Codec(cPtr, true);
    return ret;
  }

  public ProxyPlugin findProxyPluginConsumer(twrap_media_type_t media) {
    IntPtr cPtr = tinyWRAPPINVOKE.MediaSessionMgr_findProxyPluginConsumer(swigCPtr, (int)media);
    ProxyPlugin ret = (cPtr == IntPtr.Zero) ? null : new ProxyPlugin(cPtr, false);
    return ret;
  }

  public ProxyPlugin findProxyPluginProducer(twrap_media_type_t media) {
    IntPtr cPtr = tinyWRAPPINVOKE.MediaSessionMgr_findProxyPluginProducer(swigCPtr, (int)media);
    ProxyPlugin ret = (cPtr == IntPtr.Zero) ? null : new ProxyPlugin(cPtr, false);
    return ret;
  }

  public static uint registerAudioPluginFromFile(string path) {
    uint ret = tinyWRAPPINVOKE.MediaSessionMgr_registerAudioPluginFromFile(path);
    return ret;
  }

  public ulong getSessionId(twrap_media_type_t media) {
    ulong ret = tinyWRAPPINVOKE.MediaSessionMgr_getSessionId(swigCPtr, (int)media);
    return ret;
  }

  public static bool defaultsSetProfile(tmedia_profile_t profile) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetProfile((int)profile);
    return ret;
  }

  public static tmedia_profile_t defaultsGetProfile() {
    tmedia_profile_t ret = (tmedia_profile_t)tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetProfile();
    return ret;
  }

  public static bool defaultsSetBandwidthLevel(tmedia_bandwidth_level_t bl) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetBandwidthLevel((int)bl);
    return ret;
  }

  public static tmedia_bandwidth_level_t defaultsGetBandwidthLevel() {
    tmedia_bandwidth_level_t ret = (tmedia_bandwidth_level_t)tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetBandwidthLevel();
    return ret;
  }

  public static bool defaultsSetPrefVideoSize(tmedia_pref_video_size_t pref_video_size) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetPrefVideoSize((int)pref_video_size);
    return ret;
  }

  public static bool defaultsSetJbMargin(uint jb_margin_ms) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetJbMargin(jb_margin_ms);
    return ret;
  }

  public static bool defaultsSetJbMaxLateRate(uint jb_late_rate_percent) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetJbMaxLateRate(jb_late_rate_percent);
    return ret;
  }

  public static bool defaultsSetEchoTail(uint echo_tail) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetEchoTail(echo_tail);
    return ret;
  }

  public static uint defaultsGetEchoTail() {
    uint ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetEchoTail();
    return ret;
  }

  public static bool defaultsSetEchoSkew(uint echo_skew) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetEchoSkew(echo_skew);
    return ret;
  }

  public static bool defaultsSetEchoSuppEnabled(bool echo_supp_enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetEchoSuppEnabled(echo_supp_enabled);
    return ret;
  }

  public static bool defaultsGetEchoSuppEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetEchoSuppEnabled();
    return ret;
  }

  public static bool defaultsSetAgcEnabled(bool agc_enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetAgcEnabled(agc_enabled);
    return ret;
  }

  public static bool defaultsGetAgcEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetAgcEnabled();
    return ret;
  }

  public static bool defaultsSetAgcLevel(float agc_level) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetAgcLevel(agc_level);
    return ret;
  }

  public static float defaultsGetAgcLevel() {
    float ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetAgcLevel();
    return ret;
  }

  public static bool defaultsSetVadEnabled(bool vad_enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetVadEnabled(vad_enabled);
    return ret;
  }

  public static bool defaultsGetGetVadEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetGetVadEnabled();
    return ret;
  }

  public static bool defaultsSetNoiseSuppEnabled(bool noise_supp_enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetNoiseSuppEnabled(noise_supp_enabled);
    return ret;
  }

  public static bool defaultsGetNoiseSuppEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetNoiseSuppEnabled();
    return ret;
  }

  public static bool defaultsSetNoiseSuppLevel(int noise_supp_level) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetNoiseSuppLevel(noise_supp_level);
    return ret;
  }

  public static int defaultsGetNoiseSuppLevel() {
    int ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetNoiseSuppLevel();
    return ret;
  }

  public static bool defaultsSet100relEnabled(bool _100rel_enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSet100relEnabled(_100rel_enabled);
    return ret;
  }

  public static bool defaultsGet100relEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGet100relEnabled();
    return ret;
  }

  public static bool defaultsSetScreenSize(int sx, int sy) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetScreenSize(sx, sy);
    return ret;
  }

  public static bool defaultsSetAudioGain(int producer_gain, int consumer_gain) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetAudioGain(producer_gain, consumer_gain);
    return ret;
  }

  public static bool defaultsSetRtpPortRange(ushort range_start, ushort range_stop) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetRtpPortRange(range_start, range_stop);
    return ret;
  }

  public static bool defaultsSetRtpSymetricEnabled(bool enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetRtpSymetricEnabled(enabled);
    return ret;
  }

  public static bool defaultsSetMediaType(twrap_media_type_t media_type) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetMediaType((int)media_type);
    return ret;
  }

  public static bool defaultsSetVolume(int volume) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetVolume(volume);
    return ret;
  }

  public static int defaultsGetVolume() {
    int ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetVolume();
    return ret;
  }

  public static bool defaultsSetInviteSessionTimers(int timeout, string refresher) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetInviteSessionTimers(timeout, refresher);
    return ret;
  }

  public static bool defaultsSetSRtpMode(tmedia_srtp_mode_t mode) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetSRtpMode((int)mode);
    return ret;
  }

  public static tmedia_srtp_mode_t defaultsGetSRtpMode() {
    tmedia_srtp_mode_t ret = (tmedia_srtp_mode_t)tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetSRtpMode();
    return ret;
  }

  public static bool defaultsSetSRtpType(tmedia_srtp_type_t srtp_type) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetSRtpType((int)srtp_type);
    return ret;
  }

  public static tmedia_srtp_type_t defaultsGetSRtpType() {
    tmedia_srtp_type_t ret = (tmedia_srtp_type_t)tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetSRtpType();
    return ret;
  }

  public static bool defaultsSetRtcpEnabled(bool enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetRtcpEnabled(enabled);
    return ret;
  }

  public static bool defaultsGetRtcpEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetRtcpEnabled();
    return ret;
  }

  public static bool defaultsSetRtcpMuxEnabled(bool enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetRtcpMuxEnabled(enabled);
    return ret;
  }

  public static bool defaultsGetRtcpMuxEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetRtcpMuxEnabled();
    return ret;
  }

  public static bool defaultsSetIceEnabled(bool ice_enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetIceEnabled(ice_enabled);
    return ret;
  }

  public static bool defaultsSetByPassEncoding(bool enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetByPassEncoding(enabled);
    return ret;
  }

  public static bool defaultsGetByPassEncoding() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetByPassEncoding();
    return ret;
  }

  public static bool defaultsSetByPassDecoding(bool enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetByPassDecoding(enabled);
    return ret;
  }

  public static bool defaultsGetByPassDecoding() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetByPassDecoding();
    return ret;
  }

  public static bool defaultsSetVideoJbEnabled(bool enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetVideoJbEnabled(enabled);
    return ret;
  }

  public static bool defaultsGetVideoJbEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetVideoJbEnabled();
    return ret;
  }

  public static bool defaultsSetVideoZeroArtifactsEnabled(bool enabled) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetVideoZeroArtifactsEnabled(enabled);
    return ret;
  }

  public static bool defaultsGetVideoZeroArtifactsEnabled() {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetVideoZeroArtifactsEnabled();
    return ret;
  }

  public static bool defaultsSetRtpBuffSize(uint buffSize) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetRtpBuffSize(buffSize);
    return ret;
  }

  public static uint defaultsGetRtpBuffSize() {
    uint ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsGetRtpBuffSize();
    return ret;
  }

  public static bool defaultsSetAvpfTail(uint tail_min, uint tail_max) {
    bool ret = tinyWRAPPINVOKE.MediaSessionMgr_defaultsSetAvpfTail(tail_min, tail_max);
    return ret;
  }

}

}
