//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoriesArchiveHomeViewController_h
#define IGStoriesArchiveHomeViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGArchiveStoryCalendarViewController.h"
#include "IGMediaShellGalleryController.h"
#include "IGSegmentedTabPageViewControllerDelegate-Protocol.h"
#include "IGStoryArchiveMapViewController.h"
#include "IGStoryArchiveViewController.h"
#include "IGStoryDebugOverlayView.h"

@class IGSegmentedTabPageViewController, IGUserSession, NSDate, NSString;
@protocol IGArchiveNavigationAnnouncer;

@interface IGStoriesArchiveHomeViewController : IGViewController<IGSegmentedTabPageViewControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGArchiveNavigationAnnouncer> *_announcer;
  IGStoryArchiveViewController *_archiveViewController;
  IGArchiveStoryCalendarViewController *_calendarViewController;
  IGStoryArchiveMapViewController *_mapViewController;
  IGSegmentedTabPageViewController *_pageViewController;
  IGMediaShellGalleryController *_shellController;
  NSDate *_pendingMediaDateDestination;
  unsigned long long _initialPage;
  IGStoryDebugOverlayView *_debugOverlay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session scrollToDate:(id)date initialPage:(unsigned long long)page;
- (void)viewDidLoad;
- (void)storyArchiveMapViewController:(id)controller didNavigateToStoryItem:(id)item;
- (void)storyArchiveMapViewController:(id)controller didTapViewDayForStoryViewer:(id)viewer storyPresenter:(id)presenter;
- (void)storyArchiveMapViewController:(id)controller didLoadDayReelInfos:(id)infos feedItems:(id)items;
- (void)dismissStoryArchiveViewController:(id)controller navigationAction:(long long)action;
- (void)storyArchiveViewController:(id)controller didTapViewMapForStoryViewer:(id)viewer storyPresenter:(id)presenter;
- (void)segmentedTabViewController:(id)controller didPageFromViewController:(id)controller toViewController:(id)controller viaTabControlTap:(BOOL)tap;
- (void)_updateReelStoreDebugOverlayIfEnabled;
- (void)_showAndConfigureOverlay;
- (void)_hideDebugOverlay;
@end

#endif /* IGStoriesArchiveHomeViewController_h */