//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdPlatformInvalidationInfo_h
#define IGAdPlatformInvalidationInfo_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@interface IGAdPlatformInvalidationInfo : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  BOOL _ad_isHidden;
  BOOL _netego_isHidden;
  BOOL _netego_isMissingBackgroundMedia;
}

/* class methods */
+ (id)adWithIsHidden:(BOOL)hidden;
+ (id)netegoWithIsHidden:(BOOL)hidden isMissingBackgroundMedia:(BOOL)media;
@end

#endif /* IGAdPlatformInvalidationInfo_h */
