//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCPeerConnectionFactory_h
#define FB_RTCPeerConnectionFactory_h
@import Foundation;

@protocol struct scoped_refptr<webrtc_legacy::PeerConnectionFactoryInterface> { struct PeerConnectionFactoryInterface * x0; }, {scoped_refptr<webrtc_legacy::PeerConnectionFactoryInterface>="ptr_"^{PeerConnectionFactoryInterface}}, {unique_ptr<rtc_legacy::Thread, std::default_delete<rtc_legacy::Thread>>="__ptr_"{__compressed_pair<rtc_legacy::Thread *, std::default_delete<rtc_legacy::Thread>>="__value_"^{Thread}}};

@interface FB_RTCPeerConnectionFactory : NSObject {
  /* instance variables */
  struct unique_ptr<rtc_legacy::Thread, std::default_delete<rtc_legacy::Thread>> { struct __compressed_pair<rtc_legacy::Thread *, std::default_delete<rtc_legacy::Thread>> { struct Thread *__value_; } __ptr_; } _networkThread;
  struct unique_ptr<rtc_legacy::Thread, std::default_delete<rtc_legacy::Thread>> { struct __compressed_pair<rtc_legacy::Thread *, std::default_delete<rtc_legacy::Thread>> { struct Thread *__value_; } __ptr_; } _workerThread;
  struct unique_ptr<rtc_legacy::Thread, std::default_delete<rtc_legacy::Thread>> { struct __compressed_pair<rtc_legacy::Thread *, std::default_delete<rtc_legacy::Thread>> { struct Thread *__value_; } __ptr_; } _signalingThread;
  BOOL _hasStartedAecDump;
}

@property (readonly, nonatomic) struct scoped_refptr<webrtc_legacy::PeerConnectionFactoryInterface> { struct PeerConnectionFactoryInterface * x0; } nativeFactory;

/* instance methods */
- (struct scoped_refptr<webrtc_legacy::AudioDeviceModule> { struct AudioDeviceModule * x0; })audioDeviceModule;
- (id)init;
- (id)initWithEncoderFactory:(id)factory decoderFactory:(id)factory;
- (id)initNative;
- (id)initWithNoMedia;
- (id)initWithNativeAudioEncoderFactory:(struct scoped_refptr<webrtc_legacy::AudioEncoderFactory> { struct AudioEncoderFactory * x0; })factory nativeAudioDecoderFactory:(struct scoped_refptr<webrtc_legacy::AudioDecoderFactory> { struct AudioDecoderFactory * x0; })factory nativeVideoEncoderFactory:(struct unique_ptr<webrtc_legacy::VideoEncoderFactory, std::default_delete<webrtc_legacy::VideoEncoderFactory>> { struct __compressed_pair<webrtc_legacy::VideoEncoderFactory *, std::default_delete<webrtc_legacy::VideoEncoderFactory>> { struct VideoEncoderFactory * x0; } x0; })factory nativeVideoDecoderFactory:(struct unique_ptr<webrtc_legacy::VideoDecoderFactory, std::default_delete<webrtc_legacy::VideoDecoderFactory>> { struct __compressed_pair<webrtc_legacy::VideoDecoderFactory *, std::default_delete<webrtc_legacy::VideoDecoderFactory>> { struct VideoDecoderFactory * x0; } x0; })factory audioDeviceModule:(struct AudioDeviceModule *)module audioProcessingModule:(struct scoped_refptr<webrtc_legacy::AudioProcessing> { struct AudioProcessing * x0; })module;
- (id)initWithNativeAudioEncoderFactory:(struct scoped_refptr<webrtc_legacy::AudioEncoderFactory> { struct AudioEncoderFactory * x0; })factory nativeAudioDecoderFactory:(struct scoped_refptr<webrtc_legacy::AudioDecoderFactory> { struct AudioDecoderFactory * x0; })factory nativeVideoEncoderFactory:(struct unique_ptr<webrtc_legacy::VideoEncoderFactory, std::default_delete<webrtc_legacy::VideoEncoderFactory>> { struct __compressed_pair<webrtc_legacy::VideoEncoderFactory *, std::default_delete<webrtc_legacy::VideoEncoderFactory>> { struct VideoEncoderFactory * x0; } x0; })factory nativeVideoDecoderFactory:(struct unique_ptr<webrtc_legacy::VideoDecoderFactory, std::default_delete<webrtc_legacy::VideoDecoderFactory>> { struct __compressed_pair<webrtc_legacy::VideoDecoderFactory *, std::default_delete<webrtc_legacy::VideoDecoderFactory>> { struct VideoDecoderFactory * x0; } x0; })factory audioDeviceModule:(struct AudioDeviceModule *)module audioProcessingModule:(struct scoped_refptr<webrtc_legacy::AudioProcessing> { struct AudioProcessing * x0; })module networkControllerFactory:(struct unique_ptr<webrtc_legacy::NetworkControllerFactoryInterface, std::default_delete<webrtc_legacy::NetworkControllerFactoryInterface>> { struct __compressed_pair<webrtc_legacy::NetworkControllerFactoryInterface *, std::default_delete<webrtc_legacy::NetworkControllerFactoryInterface>> { struct NetworkControllerFactoryInterface * x0; } x0; })factory;
- (id)audioSourceWithConstraints:(id)constraints;
- (id)audioTrackWithTrackId:(id)id;
- (id)audioTrackWithSource:(id)source trackId:(id)id;
- (id)videoSource;
- (id)videoTrackWithSource:(id)source trackId:(id)id;
- (id)mediaStreamWithStreamId:(id)id;
- (id)peerConnectionWithConfiguration:(id)configuration constraints:(id)constraints delegate:(id)delegate;
- (void)setOptions:(id)options;
- (BOOL)startAecDumpWithFilePath:(id)path maxSizeInBytes:(long long)bytes;
- (void)stopAecDump;
@end

#endif /* FB_RTCPeerConnectionFactory_h */