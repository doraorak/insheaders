//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedVideoPreviewOverlayKeepWatchingButtonStyle_h
#define IGFeedVideoPreviewOverlayKeepWatchingButtonStyle_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@interface IGFeedVideoPreviewOverlayKeepWatchingButtonStyle : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BOOL _video_centerAlignment;
  BOOL _sundial_centerAlignment;
}

/* class methods */
+ (id)hidden;
+ (id)igtv;
+ (id)sundialWithCenterAlignment:(BOOL)alignment;
+ (id)unbranded;
+ (id)videoWithCenterAlignment:(BOOL)alignment;
@end

#endif /* IGFeedVideoPreviewOverlayKeepWatchingButtonStyle_h */