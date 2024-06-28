//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedNetworkSourceRequestTracker_h
#define IGFeedNetworkSourceRequestTracker_h
@import Foundation;

#include "IGFeedItemPrefetchMedia.h"
#include "IGFeedItemPrefetchTracking-Protocol.h"
#include "IGFeedNetworkSourceRequestLogger.h"
#include "IGFeedRequestTracking-Protocol.h"

@class NSString;
@protocol IGFeedNetworkSourceRequestTrackerAnnouncer;

@interface IGFeedNetworkSourceRequestTracker : NSObject<IGFeedRequestTracking, IGFeedItemPrefetchTracking> {
  /* instance variables */
  IGFeedNetworkSourceRequestLogger *_logger;
  IGFeedItemPrefetchMedia *_trackedInitialPrefetchMedia;
}

@property (readonly, nonatomic) NSObject<IGFeedNetworkSourceRequestTrackerAnnouncer> *announcer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLauncherSet:(id)set loggingExtras:(id)extras;
- (void)trackRequestStateChangedToState:(id)state;
- (void)trackPrefetchStateChangedToState:(id)state;
@end

#endif /* IGFeedNetworkSourceRequestTracker_h */
