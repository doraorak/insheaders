//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGridViewController_h
#define IGGridViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGContentSchedulingCoordinatorProtocol-Protocol.h"
#include "IGFeedItemPostedListener-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGGridViewControllerDelegate-Protocol.h"
#include "IGMediaDeletedListener-Protocol.h"
#include "IGMediaLibraryViewControllerGalleryAdapterProtocol_DELETE_ME_AFTER_QE-Protocol.h"
#include "IGPhotoLibraryLimitedAccessHeaderViewDelegate-Protocol.h"
#include "IGQuickScrubDataSource-Protocol.h"
#include "IGSundialCoordinatorProtocol-Protocol.h"
#include "IGWrapperAssetDataSource.h"
#include "PHPhotoLibraryChangeObserver-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDataSourcePrefetching-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGContentSchedulingLogger, IGPhotoLibraryLimitedAccessHeaderView, IGQuickScrubController, IGScrollPerfManualLogger, IGUserSession, NSArray, NSIndexPath, NSMutableArray, NSMutableOrderedSet, NSString, PHCachingImageManager, PHFetchResult, PHImageRequestOptions, UICollectionView, UILongPressGestureRecognizer;
@protocol IGAssetsFetchResult, IGGalleryAssetCollection, IGGridViewControllerScrollDelegate, UIView<IGQuickScrubAnnotation;

@interface IGGridViewController : UIViewController<UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate, UIGestureRecognizerDelegate, PHPhotoLibraryChangeObserver, IGFeedItemPostedListener, IGMediaDeletedListener, IGPhotoLibraryLimitedAccessHeaderViewDelegate, IGQuickScrubDataSource, IGMediaLibraryViewControllerGalleryAdapterProtocol_DELETE_ME_AFTER_QE, IGGestureHandler> {
  /* instance variables */
  long long _inlineCellType;
  IGWrapperAssetDataSource *_assetDataSource;
  NSObject<IGAssetsFetchResult> *_assetsResult;
  IGScrollPerfManualLogger *_scrollPerfLogger;
  IGQuickScrubController *_quickScrubController;
  UIView<IGQuickScrubAnnotation> *_pillScrubberView;
  IGContentSchedulingLogger *_contentSchedulingLogger;
  BOOL _draftsEnabled;
  BOOL _manageDraftsEnabled;
  BOOL _scheduledEnabled;
  BOOL _needsSetPhotoLibraryOptions;
  BOOL _finishedFetchingAssets;
  BOOL _finishedFetchingDrafts;
  BOOL _ignoreTapEventLogging;
  BOOL _isReselecting;
  id _firstAssetProperty;
  NSIndexPath *_currentlySelectedIndexPath;
  NSMutableArray *_scheduledContentList;
  PHFetchResult *_collectionFetchResult;
  PHImageRequestOptions *_imageRequestOptions;
  IGPhotoLibraryLimitedAccessHeaderView *_limitedAccessHeaderView;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousPreheatRect;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) NSMutableOrderedSet *selectedAssets_LEGACY_GRID_GALLERY;
@property (retain, nonatomic) NSArray *draftPreviews;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSObject<IGGalleryAssetCollection> *collection;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;
@property (readonly, nonatomic) double maxContentWidth;
@property (retain, nonatomic) NSObject<IGSundialCoordinatorProtocol> *sundialCoordinator;
@property (retain, nonatomic) NSObject<IGContentSchedulingCoordinatorProtocol> *contentSchedulingCoordinator;
@property (weak, nonatomic) NSObject<IGGridViewControllerDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGGridViewControllerScrollDelegate> *scrollDelegate;
@property (readonly, nonatomic) NSString *currentAlbumTitle;
@property (nonatomic) long long draftTotalCount;
@property (nonatomic) BOOL draftsTabSelected;
@property (nonatomic) BOOL scheduledTabSelected;
@property (nonatomic) BOOL multiSelectEnabled;
@property (readonly, nonatomic) unsigned long long assetFilterType;
@property (nonatomic) struct IGAssetSelectionMechanic { unsigned long long x0; unsigned long long x1; } assetSelectionMechanic;
@property (nonatomic) long long preselectedAssetIndex;
@property (nonatomic) BOOL enabledSelectedAssetOverlay;
@property (nonatomic) BOOL enablePhotoManagementRowForEmptyResults;
@property (retain, nonatomic) NSArray *preselectedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithUserSession:(id)session draftsEnabled:(BOOL)enabled manageDraftsEnabled:(BOOL)enabled scheduledEnabled:(BOOL)enabled maximumContentWidth:(double)width inlineCellType:(long long)type assetFilterType:(unsigned long long)type analyticsModule:(id)module sundialCoordinator:(id)coordinator contentSchedulingCoordinator:(id)coordinator;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)didReceiveMemoryWarning;
- (void)_reload;
- (void)reloadDraftsAndSelectDraft:(id)draft;
- (void)expandDrafts:(BOOL)drafts;
- (void)selectAsset:(id)asset;
- (void)setAlbum:(id)album fromCollectionFetchResult:(id)result completionBlock:(id /* block */)block;
- (void)_commitUpdateForAlbum:(id)album collectionFetchResult:(id)result;
- (void)_attemptToWrapAlbum:(id)album wrappedAlbumBlock:(id /* block */)block unrwappedAlbumBlock:(id /* block */)block;
- (void)updateWithMetaGalleryCollection:(id)collection;
- (BOOL)isInMetaGallery;
- (void)setContentInsetNoSideEffects:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effects;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset expanding:(BOOL)expanding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectedAssetFrame;
- (void)deselectAsset:(id)asset;
- (void)deselectAllAssets;
- (void)_handleLongPressGesture:(id)gesture;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(long long)section;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(long long)section;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view prefetchItemsAtIndexPaths:(id)paths;
- (void)collectionView:(id)view cancelPrefetchingForItemsAtIndexPaths:(id)paths;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)path;
- (void)updateSelectedOverlayForAsset:(id)asset;
- (id)firstAsset;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint *)offset;
- (BOOL)scrollViewShouldScrollToTop:(id)top;
- (void)photoLibraryDidChange:(id)change;
- (void)gridViewHeaderLabelDidTapSecondaryButton:(id)button;
- (id)quickScrubController:(id)controller displayStringForItemAtIndexPath:(id)path;
- (void)quickScrubControllerDidUpdateScrubbing:(id)scrubbing withDirection:(unsigned long long)direction withDisplayString:(id)string;
- (void)photoLibraryLimitedAccessHeaderViewDidTapManage:(id)manage;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)feedItemPosted:(id)posted postId:(id)id;
- (void)feedItemWillPost:(id)post taggedProducts:(id)products;
- (void)feedItemPostFailed;
- (void)mediaItemDeleted:(id)deleted storyReelPK:(id)pk;
- (BOOL)ignoreTapEventLogging;
@end

#endif /* IGGridViewController_h */
