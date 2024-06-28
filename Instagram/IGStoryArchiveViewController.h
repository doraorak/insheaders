//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryArchiveViewController_h
#define IGStoryArchiveViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGArchiveStoryPresenter.h"
#include "IGEmptyFeedViewDelegate-Protocol.h"
#include "IGGalleryConfiguration.h"
#include "IGGalleryLayout.h"
#include "IGGalleryPreloadHandler.h"
#include "IGGalleryPreloadThrottler.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGMediaGalleryController.h"
#include "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#include "IGQuickScrubDataSource-Protocol.h"
#include "IGStoryArchivePerfLogger.h"
#include "IGStoryFocusHandler.h"
#include "IGTabControlSegment-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGEmptyFeedView, IGListAdapter, IGListAdapterScrollingContext, IGQuickScrubController, IGScrollPerfManualLogger, IGUserSession, NSArray, NSDateFormatter, NSMutableOrderedSet, NSString, UICollectionView;
@protocol IGStoryArchiveNavigationHandler, IGStoryArchiveSelectionDelegate, IGStoryArchiveStoryViewerDelegate;

@interface IGStoryArchiveViewController : IGViewController<IGEmptyFeedViewDelegate, IGListAdapterDataSource, IGMediaThumbnailSectionControllerSelectionDelegate, IGQuickScrubDataSource, UIScrollViewDelegate, IGTabControlSegment> {
  /* instance variables */
  IGListAdapter *_adapter;
  IGListAdapterScrollingContext *_scrollingContext;
  long long _archiveAutoSaveStatus;
  UICollectionView *_collectionView;
  IGGalleryLayout *_collectionViewLayout;
  IGGalleryConfiguration *_configuration;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _deltaInsets;
  IGEmptyFeedView *_emptyView;
  BOOL _isDisclaimerVisible;
  IGGalleryPreloadHandler *_loadHandler;
  IGGalleryPreloadThrottler *_loadThrottler;
  NSObject<IGStoryArchiveNavigationHandler> *_navigationHandler;
  BOOL _prefersTabBarHidden;
  IGQuickScrubController *_quickScrubController;
  NSDateFormatter *_quickScrubDateFormatter;
  IGScrollPerfManualLogger *_scrollPerfLogger;
  NSMutableOrderedSet *_selectedItems;
  NSObject<IGStoryArchiveSelectionDelegate> *_selectionDelegate;
  IGStoryFocusHandler *_storyFocusHandler;
  IGUserSession *_userSession;
  long long _entryPoint;
  IGMediaGalleryController *_galleryController;
  NSArray *_supplementaryGalleryFragments;
  long long _originalBadgeCount;
  BOOL _hasOnThisDayMemory;
  BOOL _didOpenMemoriesShareFlow;
  IGArchiveStoryPresenter *_archiveStoryPresenter;
  IGStoryArchivePerfLogger *_performanceLogger;
}

@property (copy, nonatomic) NSArray *workingMedia;
@property (weak, nonatomic) NSObject<IGStoryArchiveStoryViewerDelegate> *storyViewerDelegate;
@property (nonatomic) long long presentation;
@property (readonly, nonatomic) unsigned long long archiveItemCount;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) unsigned long long minSelectedItems;
@property (nonatomic) unsigned long long maxSelectedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_generateEmptyFeedModelForAutoArchiveStatus:(long long)status;
+ (id)_generateEmptyViewForAutoArchiveStatus:(long long)status;

/* instance methods */
- (id)initWithConfiguration:(id)configuration contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets disclaimerVisible:(BOOL)visible originalBadgeCount:(long long)count navigationHandler:(id)handler prefersTabBarHidden:(BOOL)hidden userSession:(id)session currentReelPk:(id)pk entryPoint:(long long)point selectedItems:(id)items shellGalleryController:(id)controller;
- (void)viewWillAppear:(BOOL)appear;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)_updateContentInsets;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (long long)preferredTabBarBehavior;
- (id)selectedItems;
- (id)selectionDelegate;
- (void)setSelectionDelegate:(id)delegate;
- (void)setItem:(id)item selected:(BOOL)selected;
- (void)_tryToShowSurveyWithIntegrationPoint:(id)point;
- (id)analyticsExtras;
- (void)didChangeActiveMapFeedItem:(id)item;
- (void)didLoadDayReelInfos:(id)infos feedItems:(id)items;
- (void)emptyViewPrimaryButtonWasTapped:(id)tapped;
- (void)_openStorySettings;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (BOOL)_mediaIsSelectable:(id)selectable;
- (id)_selectedDisplayNumberForItem:(id)item;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_generateEmptyViewIfNecessary;
- (void)_updateAutoArchiveStatus:(long long)status;
- (void)mediaGalleryControllerDidLoad:(id)load;
- (void)mediaGalleryControllerDidUpdate:(id)update;
- (void)mediaGalleryController:(id)controller loadingDidFailWithError:(id)error;
- (void)_persistSupplementaryFragments;
- (void)_persistWorkingMediaStates:(id)states;
- (void)mediaShellSectionControllerDidSelect:(id)select;
- (void)didSelectFeedItem:(id)item usingForceTouch:(BOOL)touch;
- (void)didTapSelectionOverlayWithFeedItem:(id)item;
- (void)_handleFeedItemOpen:(id)open;
- (void)_handleFeedItemSelection:(id)selection;
- (id)quickScrubController:(id)controller displayStringForItemAtIndexPath:(id)path;
- (void)quickScrubControllerDidUpdateScrubbing:(id)scrubbing withDirection:(unsigned long long)direction withDisplayString:(id)string;
- (void)storyAutoArchiveUpsellSectionControllerDidTapUpsell:(id)upsell;
- (void)archiveStoryPresenter:(id)presenter didNavigateToStoryItem:(id)item;
- (void)archiveStoryPresenter:(id)presenter didFinishStoryViewer:(id)viewer;
- (void)archiveStoryPresenter:(id)presenter didFocusonReelWithPK:(id)pk forStoryViewer:(id)viewer;
- (void)archiveStoryPresenter:(id)presenter didPresentStoryItem:(id)item;
- (void)didDismissArchiveStoryPresenter:(id)presenter;
- (id)dismissingToViewForArchiveStoryPresenter:(id)presenter;
- (void)archiveStoryPresenter:(id)presenter didTapViewDayForStoryViewer:(id)viewer;
- (void)_updatePlayingStoryItem:(id)item;
- (id)title;
- (id)fallbackIcon;
- (void)onThisDaySectionControllerWantsToNavigateBackToProfile:(id)profile;
- (void)onThisDaySectionControllerDidTapDismissButton:(id)button mediaID:(id)id;
- (void)onThisDaySectionControllerDidCancelShare:(id)share;
- (void)onThisDaySectionControllerDidShareMemory:(id)memory;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)_performUpdatesPreservingScrollStateAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)galleryLayoutWillFinalizeCollectionViewUpdates:(id)updates;
@end

#endif /* IGStoryArchiveViewController_h */
