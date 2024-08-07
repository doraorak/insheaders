//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCVideoTrack_h
#define FB_RTCVideoTrack_h
@import Foundation;

#include "FB_RTCMediaStreamTrack.h"
#include "FB_RTCVideoSource.h"

@class NSMutableArray;
@protocol struct scoped_refptr<webrtc_legacy::VideoTrackInterface> { struct VideoTrackInterface * x0; };

@interface FB_RTCVideoTrack : FB_RTCMediaStreamTrack {
  /* instance variables */
  NSMutableArray *_adapters;
}

@property (readonly, nonatomic) struct scoped_refptr<webrtc_legacy::VideoTrackInterface> { struct VideoTrackInterface * x0; } nativeVideoTrack;
@property (readonly, nonatomic) FB_RTCVideoSource *source;

/* instance methods */
- (id)initWithFactory:(id)factory source:(id)source trackId:(id)id;
- (id)initWithFactory:(id)factory nativeTrack:(struct scoped_refptr<webrtc_legacy::MediaStreamTrackInterface> { struct MediaStreamTrackInterface * x0; })track type:(long long)type;
- (void)dealloc;
- (void)addRenderer:(id)renderer;
- (void)removeRenderer:(id)renderer;
@end

#endif /* FB_RTCVideoTrack_h */
