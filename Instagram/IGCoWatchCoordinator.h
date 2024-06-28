//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoWatchCoordinator_h
#define IGCoWatchCoordinator_h
@import Foundation;

#include "FBVideoLiveClock.h"
#include "IGCoWatchMediaInfo.h"
#include "IGCoWatchRootViewController.h"
#include "NSObject-Protocol.h"

@class IGUser, IGUserSession, NSString;
@protocol IGCoWatchCoordinatorDelegate, IGCoWatchEventProcessingIntf, IGCoWatchLoggingListener;

@interface IGCoWatchCoordinator : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGCoWatchCoordinatorDelegate> *_delegate;
  NSObject<IGCoWatchEventProcessingIntf> *_eventController;
  FBVideoLiveClock *_syncedClock;
  NSObject<IGCoWatchLoggingListener> *_logger;
  IGUser *_user;
  IGUserSession *_userSession;
  IGCoWatchMediaInfo *_previewContent;
  NSString *_tabSource;
  IGCoWatchRootViewController *_rootViewController;
  NSString *_threadId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createWithUserSession:(id)session module:(id)module logger:(id)logger;

/* instance methods */
- (id)initWithUserSession:(id)session module:(id)module logger:(id)logger syncedClock:(id)clock eventController:(id)controller;
- (void)dealloc;
- (void)setDelegate:(id)delegate;
- (id)delegate;
- (void)setThreadId:(id)id;
- (void)startCoWatchSessionWithCall:(id)call videoCallId:(id)id;
- (void)stopCoWatchSession;
- (void)stopPlaying;
- (void)previewCoWatchContent:(id)content;
- (void)cowatchMediaInActiveCall:(id)call postItemPK:(id)pk source:(unsigned long long)source surface:(id)surface mediaFetchSource:(unsigned long long)source;
- (BOOL)isPlaying;
- (id)rootViewController;
- (void)updatePlayerOriginY:(double)y chicletOriginY:(double)y;
- (void)eventController:(id)controller didReceiveUpdate:(id)update previousState:(id)state surfaceId:(id)id;
- (void)coWatchViewControllerDidTapOwnerButton:(id)button;
- (void)coWatchViewControllerDidTapRemoveButton:(id)button;
- (void)coWatchViewController:(id)controller didLoadImage:(id)image;
- (void)coWatchViewController:(id)controller didBeginScrubbingAtPlaybackPosition:(double)position;
- (void)coWatchViewController:(id)controller didScrubToPlaybackPosition:(double)position isPaused:(BOOL)paused;
- (void)coWatchViewController:(id)controller didTapPauseAtPlaybackPosition:(double)position;
- (void)coWatchViewController:(id)controller didTapPlayAtPlaybackPosition:(double)position;
- (void)coWatchViewControllerDidForegroundApp:(id)app;
- (void)coWatchViewController:(id)controller didStartPlayingMedia:(id)media tabSource:(id)source;
- (void)coWatchViewControllerDidBeginReporting:(id)reporting;
- (void)coWatchViewControllerDidFinishReporting:(id)reporting;
- (void)contentSelectionCoordinatorDidSelectMedia:(id)media tabSource:(id)source;
- (void)contentSelectionCoordinatorDidRequestNavigation:(id)navigation shouldMinimize:(BOOL)minimize;
- (void)contentSelectionCoordinatorDidDismissSelectionFlow;
- (void)contentSelectionCoordinatorDidStartScreenshare;
- (void)coWatchCarouselViewController:(id)controller carouselDidChangeIndex:(id)index tabSource:(id)source;
- (void)coWatchReelsViewController:(id)controller didStartPlayingMedia:(id)media tabSource:(id)source;
- (void)coWatchReelsTogetherHandleSingleTap;
- (void)logCoWatchInCallButtonImpressionWithMedia:(id)media postItemPk:(id)pk externalSource:(unsigned long long)source surface:(id)surface;
- (void)logCoWatchShareSheetImpressionWithMedia:(id)media postItemPk:(id)pk externalSource:(unsigned long long)source surface:(id)surface;
- (void)logCoWatchInCallTooltipImpressionWithMedia:(id)media postItemPk:(id)pk externalSource:(unsigned long long)source surface:(id)surface;
@end

#endif /* IGCoWatchCoordinator_h */
