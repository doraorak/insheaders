//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHashtagFeedPerformanceLogger_h
#define IGHashtagFeedPerformanceLogger_h
@import Foundation;

#include "IGFeedPerformanceMarkerManager.h"

@class IGPerformanceMarker;

@interface IGHashtagFeedPerformanceLogger : NSObject {
  /* instance variables */
  long long _hashtagPageVersion;
  IGFeedPerformanceMarkerManager *_feedPerformanceMarkerManager;
  IGPerformanceMarker *_headerMarker;
  BOOL _headerInfoRequestSuccess;
}

/* instance methods */
- (id)initWithHashtagPageVersion:(long long)version;
@end

#endif /* IGHashtagFeedPerformanceLogger_h */