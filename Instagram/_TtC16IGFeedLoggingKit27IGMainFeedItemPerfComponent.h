//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC16IGFeedLoggingKit27IGMainFeedItemPerfComponent_h
#define _TtC16IGFeedLoggingKit27IGMainFeedItemPerfComponent_h
@import Foundation;

#include "IGPerformanceMediaLoadingComponentDelegate-Protocol.h"

@interface _TtC16IGFeedLoggingKit27IGMainFeedItemPerfComponent : NSObject<IGPerformanceMediaLoadingComponentDelegate> { // (Swift)
  /* instance variables */
   core;
   mediaPending;
   photoLoading;
   videoLoading;
   mediaLoading;
   logger;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)mediaDidLoad;
- (id)init;
@end

#endif /* _TtC16IGFeedLoggingKit27IGMainFeedItemPerfComponent_h */