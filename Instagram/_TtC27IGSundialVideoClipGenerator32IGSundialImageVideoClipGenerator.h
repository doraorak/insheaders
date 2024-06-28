//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGSundialVideoClipGenerator32IGSundialImageVideoClipGenerator_h
#define _TtC27IGSundialVideoClipGenerator32IGSundialImageVideoClipGenerator_h
@import Foundation;

#include "_TtP27IGSundialVideoClipGenerator27IGSundialVideoClipGenerator_-Protocol.h"

@class IGSundialVideoClip *, NSError *;

@interface _TtC27IGSundialVideoClipGenerator32IGSundialImageVideoClipGenerator : NSObject<_TtP27IGSundialVideoClipGenerator27IGSundialVideoClipGenerator_> { // (Swift)
  /* instance variables */
   duration;
   userSession;
   imageToVideoConverter;
   waitForAVAssetToLoad;
}

@property (nonatomic) BOOL preferConvertLivePhotosUsingBackingVideo;
@property (nonatomic) BOOL shouldSkipPhotoToVideoTranscoding;

/* instance methods */
- (id)initWithUserSession:(id)session duration:(double)duration imageToVideoConverter:(id)converter;
- (void)generateVideoClipFrom:(<IGGalleryAsset> *)from completionHandler:(id /* block */)handler;
- (id)init;
@end

#endif /* _TtC27IGSundialVideoClipGenerator32IGSundialImageVideoClipGenerator_h */