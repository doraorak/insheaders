//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARAudioPlatformComponentHostCommon_h
#define FBARAudioPlatformComponentHostCommon_h
@import Foundation;

#include "FBARAudioDecoder.h"
#include "FBARAudioServiceExternalAudioProvider-Protocol.h"
#include "FBAudioCorePlayer.h"

@class NSString;
@protocol OS_dispatch_queue, struct shared_ptr<arfx::services::audio::IAudioServiceController> { struct IAudioServiceController * x0; struct __shared_weak_count * x1; }, struct shared_ptr<arfx::services::audio::IMicrophoneSink> { struct IMicrophoneSink * x0; struct __shared_weak_count * x1; }, struct shared_ptr<facebook::arservices::apple::AudioPlatformComponentHostImpl> { struct AudioPlatformComponentHostImpl * x0; struct __shared_weak_count * x1; }, {shared_ptr<arfx::services::audio::IAudioServiceController>="__ptr_"^{IAudioServiceController}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<arfx::services::audio::IMicrophoneSink>="__ptr_"^{IMicrophoneSink}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<facebook::arservices::apple::AudioPlatformComponentHostImpl>="__ptr_"^{AudioPlatformComponentHostImpl}"__cntrl_"^{__shared_weak_count}};

@interface FBARAudioPlatformComponentHostCommon : NSObject

@property (nonatomic) struct shared_ptr<facebook::arservices::apple::AudioPlatformComponentHostImpl> { struct AudioPlatformComponentHostImpl * x0; struct __shared_weak_count * x1; } nativePart;
@property (retain, nonatomic) FBARAudioDecoder *audioDecoder;
@property (copy, nonatomic) NSString *assetsDirectory;
@property (nonatomic) int defaultSampleRate;
@property (nonatomic) struct shared_ptr<arfx::services::audio::IAudioServiceController> { struct IAudioServiceController * x0; struct __shared_weak_count * x1; } audioServiceController;
@property (nonatomic) struct shared_ptr<arfx::services::audio::IMicrophoneSink> { struct IMicrophoneSink * x0; struct __shared_weak_count * x1; } microphoneSink;
@property (nonatomic) BOOL effectLoaded;
@property (nonatomic) BOOL serviceCreated;
@property (retain, nonatomic) FBAudioCorePlayer *audioPlayer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) NSObject<FBARAudioServiceExternalAudioProvider> *externalAudioProvider;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)onEffectLoaded:(id)loaded effectUsesPreview:(BOOL)preview;
- (void)onEffectReleased;
- (BOOL)isEffectLoaded;
- (BOOL)isServiceCreated;
@end

#endif /* FBARAudioPlatformComponentHostCommon_h */