//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestedProductTagsPerformanceLogger_h
#define IGSuggestedProductTagsPerformanceLogger_h
@import Foundation;

#include "IGUserSession.h"

@class NSMapTable;

@interface IGSuggestedProductTagsPerformanceLogger : NSObject {
  /* instance variables */
  NSMapTable *_qplMarkerMap;
  BOOL _isCheckoutEnabled;
  IGUserSession *_userSession;
  long long _assetCount;
}

/* instance methods */
- (id)initWithIsCheckoutEnabled:(BOOL)enabled userSession:(id)session assetCount:(long long)count;
@end

#endif /* IGSuggestedProductTagsPerformanceLogger_h */
