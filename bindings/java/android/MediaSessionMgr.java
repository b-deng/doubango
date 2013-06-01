/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.doubango.tinyWRAP;

public class MediaSessionMgr {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected MediaSessionMgr(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MediaSessionMgr obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        tinyWRAPJNI.delete_MediaSessionMgr(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public boolean sessionSetInt32(twrap_media_type_t media, String key, int value) {
    return tinyWRAPJNI.MediaSessionMgr_sessionSetInt32(swigCPtr, this, media.swigValue(), key, value);
  }

  public int sessionGetInt32(twrap_media_type_t media, String key) {
    return tinyWRAPJNI.MediaSessionMgr_sessionGetInt32(swigCPtr, this, media.swigValue(), key);
  }

  public boolean consumerSetInt32(twrap_media_type_t media, String key, int value) {
    return tinyWRAPJNI.MediaSessionMgr_consumerSetInt32(swigCPtr, this, media.swigValue(), key, value);
  }

  public boolean consumerSetInt64(twrap_media_type_t media, String key, long value) {
    return tinyWRAPJNI.MediaSessionMgr_consumerSetInt64(swigCPtr, this, media.swigValue(), key, value);
  }

  public boolean producerSetInt32(twrap_media_type_t media, String key, int value) {
    return tinyWRAPJNI.MediaSessionMgr_producerSetInt32(swigCPtr, this, media.swigValue(), key, value);
  }

  public boolean producerSetInt64(twrap_media_type_t media, String key, long value) {
    return tinyWRAPJNI.MediaSessionMgr_producerSetInt64(swigCPtr, this, media.swigValue(), key, value);
  }

  public Codec producerGetCodec(twrap_media_type_t media) {
    long cPtr = tinyWRAPJNI.MediaSessionMgr_producerGetCodec(swigCPtr, this, media.swigValue());
    return (cPtr == 0) ? null : new Codec(cPtr, true);
  }

  public ProxyPlugin findProxyPluginConsumer(twrap_media_type_t media) {
    long cPtr = tinyWRAPJNI.MediaSessionMgr_findProxyPluginConsumer(swigCPtr, this, media.swigValue());
    return (cPtr == 0) ? null : new ProxyPlugin(cPtr, false);
  }

  public ProxyPlugin findProxyPluginProducer(twrap_media_type_t media) {
    long cPtr = tinyWRAPJNI.MediaSessionMgr_findProxyPluginProducer(swigCPtr, this, media.swigValue());
    return (cPtr == 0) ? null : new ProxyPlugin(cPtr, false);
  }

  public static long registerAudioPluginFromFile(String path) {
    return tinyWRAPJNI.MediaSessionMgr_registerAudioPluginFromFile(path);
  }

  public java.math.BigInteger getSessionId(twrap_media_type_t media) {
    return tinyWRAPJNI.MediaSessionMgr_getSessionId(swigCPtr, this, media.swigValue());
  }

  public static boolean defaultsSetProfile(tmedia_profile_t profile) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetProfile(profile.swigValue());
  }

  public static tmedia_profile_t defaultsGetProfile() {
    return tmedia_profile_t.swigToEnum(tinyWRAPJNI.MediaSessionMgr_defaultsGetProfile());
  }

  public static boolean defaultsSetBandwidthLevel(tmedia_bandwidth_level_t bl) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetBandwidthLevel(bl.swigValue());
  }

  public static tmedia_bandwidth_level_t defaultsGetBandwidthLevel() {
    return tmedia_bandwidth_level_t.swigToEnum(tinyWRAPJNI.MediaSessionMgr_defaultsGetBandwidthLevel());
  }

  public static boolean defaultsSetBandwidthVideoUploadMax(int bw_video_up_max_kbps) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetBandwidthVideoUploadMax(bw_video_up_max_kbps);
  }

  public static boolean defaultsSetPrefVideoSize(tmedia_pref_video_size_t pref_video_size) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetPrefVideoSize(pref_video_size.swigValue());
  }

  public static boolean defaultsSetJbMargin(long jb_margin_ms) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetJbMargin(jb_margin_ms);
  }

  public static boolean defaultsSetJbMaxLateRate(long jb_late_rate_percent) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetJbMaxLateRate(jb_late_rate_percent);
  }

  public static boolean defaultsSetEchoTail(long echo_tail) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetEchoTail(echo_tail);
  }

  public static long defaultsGetEchoTail() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetEchoTail();
  }

  public static boolean defaultsSetEchoSkew(long echo_skew) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetEchoSkew(echo_skew);
  }

  public static boolean defaultsSetEchoSuppEnabled(boolean echo_supp_enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetEchoSuppEnabled(echo_supp_enabled);
  }

  public static boolean defaultsGetEchoSuppEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetEchoSuppEnabled();
  }

  public static boolean defaultsSetAgcEnabled(boolean agc_enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetAgcEnabled(agc_enabled);
  }

  public static boolean defaultsGetAgcEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetAgcEnabled();
  }

  public static boolean defaultsSetAgcLevel(float agc_level) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetAgcLevel(agc_level);
  }

  public static float defaultsGetAgcLevel() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetAgcLevel();
  }

  public static boolean defaultsSetVadEnabled(boolean vad_enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetVadEnabled(vad_enabled);
  }

  public static boolean defaultsGetGetVadEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetGetVadEnabled();
  }

  public static boolean defaultsSetNoiseSuppEnabled(boolean noise_supp_enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetNoiseSuppEnabled(noise_supp_enabled);
  }

  public static boolean defaultsGetNoiseSuppEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetNoiseSuppEnabled();
  }

  public static boolean defaultsSetNoiseSuppLevel(int noise_supp_level) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetNoiseSuppLevel(noise_supp_level);
  }

  public static int defaultsGetNoiseSuppLevel() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetNoiseSuppLevel();
  }

  public static boolean defaultsSet100relEnabled(boolean _100rel_enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSet100relEnabled(_100rel_enabled);
  }

  public static boolean defaultsGet100relEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGet100relEnabled();
  }

  public static boolean defaultsSetScreenSize(int sx, int sy) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetScreenSize(sx, sy);
  }

  public static boolean defaultsSetAudioGain(int producer_gain, int consumer_gain) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetAudioGain(producer_gain, consumer_gain);
  }

  public static boolean defaultsSetRtpPortRange(int range_start, int range_stop) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetRtpPortRange(range_start, range_stop);
  }

  public static boolean defaultsSetRtpSymetricEnabled(boolean enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetRtpSymetricEnabled(enabled);
  }

  public static boolean defaultsSetMediaType(twrap_media_type_t media_type) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetMediaType(media_type.swigValue());
  }

  public static boolean defaultsSetVolume(int volume) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetVolume(volume);
  }

  public static int defaultsGetVolume() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetVolume();
  }

  public static boolean defaultsSetInviteSessionTimers(int timeout, String refresher) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetInviteSessionTimers(timeout, refresher);
  }

  public static boolean defaultsSetSRtpMode(tmedia_srtp_mode_t mode) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetSRtpMode(mode.swigValue());
  }

  public static tmedia_srtp_mode_t defaultsGetSRtpMode() {
    return tmedia_srtp_mode_t.swigToEnum(tinyWRAPJNI.MediaSessionMgr_defaultsGetSRtpMode());
  }

  public static boolean defaultsSetSRtpType(tmedia_srtp_type_t srtp_type) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetSRtpType(srtp_type.swigValue());
  }

  public static tmedia_srtp_type_t defaultsGetSRtpType() {
    return tmedia_srtp_type_t.swigToEnum(tinyWRAPJNI.MediaSessionMgr_defaultsGetSRtpType());
  }

  public static boolean defaultsSetRtcpEnabled(boolean enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetRtcpEnabled(enabled);
  }

  public static boolean defaultsGetRtcpEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetRtcpEnabled();
  }

  public static boolean defaultsSetRtcpMuxEnabled(boolean enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetRtcpMuxEnabled(enabled);
  }

  public static boolean defaultsGetRtcpMuxEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetRtcpMuxEnabled();
  }

  public static boolean defaultsSetStunEnabled(boolean stun_enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetStunEnabled(stun_enabled);
  }

  public static boolean defaultsSetIceStunEnabled(boolean icestun_enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetIceStunEnabled(icestun_enabled);
  }

  public static boolean defaultsSetStunServer(String server_ip, int server_port, String usr_name, String usr_pwd) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetStunServer__SWIG_0(server_ip, server_port, usr_name, usr_pwd);
  }

  public static boolean defaultsSetStunServer(String server_ip, int server_port, String usr_name) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetStunServer__SWIG_1(server_ip, server_port, usr_name);
  }

  public static boolean defaultsSetStunServer(String server_ip, int server_port) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetStunServer__SWIG_2(server_ip, server_port);
  }

  public static boolean defaultsSetIceEnabled(boolean ice_enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetIceEnabled(ice_enabled);
  }

  public static boolean defaultsSetByPassEncoding(boolean enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetByPassEncoding(enabled);
  }

  public static boolean defaultsGetByPassEncoding() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetByPassEncoding();
  }

  public static boolean defaultsSetByPassDecoding(boolean enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetByPassDecoding(enabled);
  }

  public static boolean defaultsGetByPassDecoding() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetByPassDecoding();
  }

  public static boolean defaultsSetVideoJbEnabled(boolean enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetVideoJbEnabled(enabled);
  }

  public static boolean defaultsGetVideoJbEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetVideoJbEnabled();
  }

  public static boolean defaultsSetVideoZeroArtifactsEnabled(boolean enabled) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetVideoZeroArtifactsEnabled(enabled);
  }

  public static boolean defaultsGetVideoZeroArtifactsEnabled() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetVideoZeroArtifactsEnabled();
  }

  public static boolean defaultsSetRtpBuffSize(long buffSize) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetRtpBuffSize(buffSize);
  }

  public static long defaultsGetRtpBuffSize() {
    return tinyWRAPJNI.MediaSessionMgr_defaultsGetRtpBuffSize();
  }

  public static boolean defaultsSetAvpfTail(long tail_min, long tail_max) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetAvpfTail(tail_min, tail_max);
  }

  public static boolean defaultsSetOpusMaxCaptureRate(long opus_maxcapturerate) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetOpusMaxCaptureRate(opus_maxcapturerate);
  }

  public static boolean defaultsSetOpusMaxPlaybackRate(long opus_maxplaybackrate) {
    return tinyWRAPJNI.MediaSessionMgr_defaultsSetOpusMaxPlaybackRate(opus_maxplaybackrate);
  }

}
