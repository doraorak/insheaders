//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCAudioTrack_h
#define FB_RTCAudioTrack_h
@import Foundation;

#include "FB_RTCMediaStreamTrack.h"
#include "FB_RTCAudioSource.h"

@protocol struct scoped_refptr<webrtc_legacy::AudioTrackInterface> { struct AudioTrackInterface * x0; };

@interface FB_RTCAudioTrack : FB_RTCMediaStreamTrack

@property (readonly, nonatomic) struct scoped_refptr<webrtc_legacy::AudioTrackInterface> { struct AudioTrackInterface * x0; } nativeAudioTrack;
@property (readonly, nonatomic) FB_RTCAudioSource *source;

/* instance methods */
- (id)initWithFactory:(id)factory source:(id)source trackId:(id)id;
- (id)initWithFactory:(id)factory nativeTrack:(struct scoped_refptr<webrtc_legacy::MediaStreamTrackInterface> { struct MediaStreamTrackInterface * x0; })track type:(long long)type;
@end

#endif /* FB_RTCAudioTrack_h */
