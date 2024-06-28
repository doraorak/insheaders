//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC39SUPMediaStreamStaticMediaConfigProvider39SUPMediaStreamStaticAudioConfigProvider_h
#define _TtC39SUPMediaStreamStaticMediaConfigProvider39SUPMediaStreamStaticAudioConfigProvider_h
@import Foundation;

#include "SUPMediaStreamAudioConfig.h"
#include "SUPMediaStreamAudioConfigProviding-Protocol.h"

@interface _TtC39SUPMediaStreamStaticMediaConfigProvider39SUPMediaStreamStaticAudioConfigProvider : NSObject<SUPMediaStreamAudioConfigProviding> // (Swift)

@property (nonatomic, readonly) SUPMediaStreamAudioConfig *audioConfig;

/* instance methods */
- (id)initWithAudioConfig:(id)config;
- (void)addAudioConfigListener:(id)listener;
- (void)removeAudioConfigListener:(id)listener;
- (void)startUpdatingAudioConfigIfNeeded;
- (void)stopUpdatingAudioConfig;
- (id)init;
@end

#endif /* _TtC39SUPMediaStreamStaticMediaConfigProvider39SUPMediaStreamStaticAudioConfigProvider_h */