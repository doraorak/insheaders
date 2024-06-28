//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedVPVDLogger_h
#define IGFeedVPVDLogger_h
@import Foundation;

#include "IGScheduler-Protocol.h"

@class IGFeedPostLikeAndViewCountHelper, IGTimestampContainer, NSString;

@interface IGFeedVPVDLogger : NSObject {
  /* instance variables */
  NSString *_userID;
  NSObject<IGScheduler> *_scheduler;
  IGTimestampContainer *_timestampContainer;
  IGTimestampContainer *_merlinTimestampContainer;
  BOOL _reportToSKADEnabled;
  IGFeedPostLikeAndViewCountHelper *_likeAndViewCountHelper;
}

/* class methods */
+ (void)_removeDataFromDisk:(id)disk;
+ (id)_cacheFileNameWithUserID:(id)id;

/* instance methods */
- (id)initWithUserID:(id)id scheduler:(id)scheduler scopedObjects:(id)objects;
- (void)logVPVDDurationWithCollapsedMedia:(id)media attachedToMedia:(id)media userSession:(id)session feedItemTracker:(id)tracker module:(id)module maxDuration:(double)duration sumDuration:(double)duration legacyDuration:(double)duration loggingDelegate:(id)delegate extras:(id)extras analyticsLogger:(id)logger;
- (id)_getVPVDDurationEventWithMedia:(id)media userSession:(id)session feedItemTracker:(id)tracker module:(id)module maxDuration:(double)duration sumDuration:(double)duration legacyDuration:(double)duration loggingDelegate:(id)delegate loggingExtras:(id)extras doubleLoggingEnabled:(BOOL)enabled isSegmentedItem:(BOOL)item sponsoredSupportConfiguration:(id)configuration;
- (void)_applicationWillResignActiveNotification:(id)notification;
- (void)_writeToDiskWithCompletionBlock:(id /* block */)block;
- (void)_readFromDiskWithCompletionBlock:(id /* block */)block;
@end

#endif /* IGFeedVPVDLogger_h */
