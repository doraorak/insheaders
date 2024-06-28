//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGArchiveStoryCalendarViewController_h
#define IGArchiveStoryCalendarViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGArchiveLoadingPillController.h"
#include "IGArchiveStoryPresenter.h"
#include "IGCalendarViewDataSource.h"
#include "IGMediaDeletedListener-Protocol.h"
#include "IGMediaShellGalleryController.h"
#include "IGQuickScrubDataSource-Protocol.h"
#include "IGStoryDataControllerStoryItemListener-Protocol.h"
#include "IGTabControlSegment-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGListAdapter, IGQuickScrubController, IGUserSession, NSArray, NSDate, NSDateFormatter, NSIndexPath, NSMutableDictionary, NSMutableSet, NSString, UICollectionView;

@interface IGArchiveStoryCalendarViewController : IGViewController<IGStoryDataControllerStoryItemListener, IGMediaDeletedListener, IGQuickScrubDataSource, UIScrollViewDelegate, IGTabControlSegment> {
  /* instance variables */
  IGUserSession *_userSession;
  double _contentTopInset;
  IGCalendarViewDataSource *_calendarViewDataSource;
  UICollectionView *_collectionView;
  IGMediaShellGalleryController *_shellController;
  NSMutableDictionary *_reelDates;
  NSString *_launchReelPKAfterFetch;
  NSDate *_viewerFocusedReelDate;
  NSIndexPath *_tappedDayCellIndexPath;
  NSMutableDictionary *_mediaIdToReelId;
  NSMutableSet *_reelPksWithDeletedMedia;
  NSArray *_reelPksInViewer;
  IGArchiveStoryPresenter *_archiveStoryPresenter;
  IGArchiveLoadingPillController *_loadingPillController;
  IGQuickScrubController *_quickScrubController;
  NSDateFormatter *_quickScrubDateFormatter;
  NSDate *_pendingMediaDateDestination;
  BOOL _initialScroll;
  IGListAdapter *_listAdapter;
  BOOL _calendarOptimizationsEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session contentTopInset:(double)inset shellGalleryController:(id)controller scrollToDate:(id)date;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (void)dayCellWasTapped:(id)tapped;
- (id)reuseIdentifierForModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForMonthHeader;
- (struct CGSize { double x0; double x1; })sizeForDayHeader;
- (struct CGSize { double x0; double x1; })sizeForSpacer;
- (struct CGSize { double x0; double x1; })sizeForDay;
- (void)bindMonthHeaderCell:(id)cell toModel:(id)model;
- (void)bindDayHeaderCell:(id)cell toModel:(id)model;
- (void)bindSpacerCell:(id)cell toModel:(id)model;
- (void)bindDayCell:(id)cell toModel:(id)model;
- (void)mediaItemDeleted:(id)deleted storyReelPK:(id)pk;
- (void)storyDataController:(id)controller didUpdateReel:(id)reel refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller fetchItemsDidFailForReelPK:(id)pk error:(id)error refreshType:(long long)type updateDuration:(double)duration;
- (void)storyDataController:(id)controller didReturnNoStoryItemResultsForReelPK:(id)pk refreshType:(long long)type updateDuration:(double)duration;
- (void)mediaShellControllerDidInitiallyLoadGallery:(id)gallery;
- (void)mediaShellControllerDidUpdateGallery:(id)gallery;
- (void)mediaShellController:(id)controller loadingGalleryDidFailWithError:(id)error;
- (void)archiveStoryPresenter:(id)presenter didNavigateToStoryItem:(id)item;
- (void)archiveStoryPresenter:(id)presenter didFinishStoryViewer:(id)viewer;
- (void)archiveStoryPresenter:(id)presenter didFocusonReelWithPK:(id)pk forStoryViewer:(id)viewer;
- (void)archiveStoryPresenter:(id)presenter didPresentStoryItem:(id)item;
- (void)didDismissArchiveStoryPresenter:(id)presenter;
- (id)dismissingToViewForArchiveStoryPresenter:(id)presenter;
- (void)archiveStoryPresenter:(id)presenter didTapViewDayForStoryViewer:(id)viewer;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidScrollToTop:(id)top;
- (id)quickScrubController:(id)controller displayStringForItemAtIndexPath:(id)path;
- (void)quickScrubControllerDidUpdateScrubbing:(id)scrubbing withDirection:(unsigned long long)direction withDisplayString:(id)string;
- (id)title;
- (id)fallbackIcon;
@end

#endif /* IGArchiveStoryCalendarViewController_h */