//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTrayPrefetchController_h
#define IGStoryTrayPrefetchController_h
@import Foundation;

#include "IGStoryDataControllerStoryItemListener-Protocol.h"
#include "IGStoryTrayDataSource-Protocol.h"

@class IGListAdapter, IGUserSession, NSMutableSet, NSString;
@protocol IGStoryTrayPrefetchControllerDelegate;

@interface IGStoryTrayPrefetchController : NSObject<IGStoryDataControllerStoryItemListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGListAdapter *_listAdapter;
  NSObject<IGStoryTrayDataSource> *_storyTrayDataSource;
  NSMutableSet *_currentPrefetchingReelPKs;
  NSMutableSet *_completedPrefetchingReelPKs;
  NSMutableSet *_currentPrefetchingOffscreenReelPKs;
  NSMutableSet *_completedPrefetchingOffscreenReelPKs;
  BOOL _isPrefetchInProcess;
  BOOL _shouldCancelDelayPrefetch;
  BOOL _hasScheduledTimer;
  id /* block */ _nextPrefetchBlock;
}

@property (weak, nonatomic) NSObject<IGStoryTrayPrefetchControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session listAdapter:(id)adapter storyTrayDataSource:(id)source;
- (void)storyDataController:(id)controller didUpdateReel:(id)reel refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller fetchItemsDidFailForReelPK:(id)pk error:(id)error refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller didReturnNoStoryItemResultsForReelPK:(id)pk refreshType:(long long)type updateDuration:(double)duration;
@end

#endif /* IGStoryTrayPrefetchController_h */