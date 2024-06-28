//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryNotificationController_h
#define IGStoryNotificationController_h
@import Foundation;

#include "IGStoryDataControllerStoryItemListener-Protocol.h"
#include "IGStoryViewerDelegate-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGMainAppSurfaceIntent, IGUserSession, NSArray, NSMapTable, NSString;

@interface IGStoryNotificationController : NSObject<IGStoryDataControllerStoryItemListener, IGStoryViewerDelegate, UIViewControllerTransitioningDelegate> {
  /* instance variables */
  NSMapTable *_destinationTabMap;
  IGUserSession *_userSession;
  NSString *_focusedItemPK;
  IGMainAppSurfaceIntent *_destinationAppSurfaceIntent;
  BOOL _isMoment;
  BOOL _shouldStayOnCurrentSurface;
  IGMainAppSurfaceIntent *_currentAppSurfaceIntent;
  NSArray *_mentionsPreselectedUserIds;
  NSString *_pushCategory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)handleStoryNotificationForUserPKs:(id)pks userSession:(id)session destinationAppSurfaceIntent:(id)intent pushCategory:(id)category chainUnseenStories:(BOOL)stories interstitialType:(long long)type;
- (void)handleStoryNotificationForReelPK:(id)pk focusedItemPK:(id)pk userSession:(id)session destinationAppSurfaceIntent:(id)intent pushCategory:(id)category;
- (void)handleSingleItemStoryNotificationForReelPK:(id)pk focusedItemPK:(id)pk destinationAppSurfaceIntent:(id)intent isMoment:(BOOL)moment mentionsPreselectedUserIds:(id)ids reason:(id)reason pushCategory:(id)category;
- (void)storyViewer:(id)viewer didFocusOnReelWithPK:(id)pk;
- (void)storyViewer:(id)viewer didNavigateToStoryItem:(id)item;
- (void)storyViewerShouldRemoveEmptyStateStory:(id)story navigationAction:(long long)action;
- (void)storyViewerDidFinish:(id)finish navigationAction:(long long)action lastMediaID:(id)id viewerExitContextDict:(id)dict completion:(id /* block */)completion;
- (BOOL)storyViewerShouldPresentCamera:(id)camera;
- (void)storyViewerDidTapTryItOn:(id)on onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
- (void)storyViewerDidTapViewDay:(id)day;
- (void)storyViewerDidMute:(id)mute didMutePosts:(BOOL)posts;
- (void)storyViewerDidUnfollow:(id)unfollow;
- (void)storyViewerDidFollow:(id)follow;
- (void)storyDataController:(id)controller didUpdateReel:(id)reel refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller fetchItemsDidFailForReelPK:(id)pk error:(id)error refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller didReturnNoStoryItemResultsForReelPK:(id)pk refreshType:(long long)type updateDuration:(double)duration;
- (id)animationControllerForDismissedController:(id)controller;
@end

#endif /* IGStoryNotificationController_h */