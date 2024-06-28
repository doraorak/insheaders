//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSavedMediaFeedViewController_h
#define IGSavedMediaFeedViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectShareCollectionController.h"
#include "IGEmptyFeedViewDelegate-Protocol.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGFeedPreviewHandler.h"
#include "IGFeedPreviewHandlerDelegate-Protocol.h"
#include "IGGridCollectionViewLayout.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGMediaDeletedListener-Protocol.h"
#include "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#include "IGSaveHomeLogger.h"
#include "IGSaveToCollectionsFeedDelegate-Protocol.h"
#include "IGSavedMediaCollectionBulkEditButtonView.h"
#include "IGSavedMediaFeedAdapterDataSource.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGStoryViewerDelegate-Protocol.h"
#include "IGTabControlSegment-Protocol.h"
#include "IGTransitionZoomFromCapable-Protocol.h"

@class IGContextualFeedBottomNuxController, IGFeedNetworkSource, IGInfoView, IGListAdapter, IGRefreshControl, IGSavedMediaCollection, IGScrollViewAnnouncer, IGUserSession, NSArray, NSDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, PreferredEdgeInsets, UICollectionView;
@protocol IGSavedMediaFeedContextualFeedPresenter, IGSavedMediaFeedViewControllerDelegate;

@interface IGSavedMediaFeedViewController : IGViewController<IGEmptyFeedViewDelegate, IGFeedNetworkSourceDelegate, IGFeedPreviewHandlerDelegate, IGScrollViewListener, IGListAdapterDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGSaveToCollectionsFeedDelegate, IGMediaDeletedListener, IGTransitionZoomFromCapable, IGStoryViewerDelegate, IGTabControlSegment> {
  /* instance variables */
  BOOL _hasLoadedData;
  IGInfoView *_infoView;
  BOOL _isMediaCollection;
  IGSaveHomeLogger *_logger;
  BOOL _isDataFetchNeeded;
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  IGContextualFeedBottomNuxController *_pillController;
  IGGridCollectionViewLayout *_feedLayout;
  IGScrollViewAnnouncer *_scrollViewAnnouncer;
  IGRefreshControl *_refreshControl;
  IGFeedNetworkSource *_feedNetworkSource;
  IGUserSession *_userSession;
  IGSavedMediaFeedAdapterDataSource *_dataSource;
  IGFeedPreviewHandler *_previewHandler;
  NSMutableSet *_pendingDeletedItems;
  IGSavedMediaCollection *_collection;
  NSMutableSet *_loggedImpressions;
  BOOL _isSelectable;
  NSMutableOrderedSet *_selectedItems;
  BOOL _showPillController;
  IGSavedMediaCollectionBulkEditButtonView *_bulkEditButtonView;
  NSSet *_itemsBeingBulkRemoved;
  NSString *_priorModule;
  PreferredEdgeInsets *_preferredEdgeInsets;
  BOOL _shouldHideTabBar;
  IGDirectShareCollectionController *_directShareController;
  NSDictionary *_collectionMediaContributors;
  NSArray *_originalSavedMediaPosts;
  long long _originalCollectionCount;
}

@property (weak, nonatomic) NSObject<IGSavedMediaFeedViewControllerDelegate> *delegate;
@property (nonatomic) BOOL disableFeedPreview;
@property (retain, nonatomic) NSObject<IGSavedMediaFeedContextualFeedPresenter> *contextualFeedPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;

/* instance methods */
- (id)initWithUserSession:(id)session collection:(id)collection priorModule:(id)module preferredEdgeInsets:(id)insets shouldHideTabBar:(BOOL)bar;
- (id)initWithTabbedCollection:(id)collection userSession:(id)session tabbedCollectionDataModel:(id)model priorModule:(id)module loadedPosts:(id)posts shouldHideTabBar:(BOOL)bar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (id)previewHandler:(id)handler loggingExtrasForMedia:(id)media atIndexPath:(id)path;
- (id)hashtagModelForPreviewHandler:(id)handler;
- (id)promptStickerModelForPreviewHandler:(id)handler;
- (id)previewHandler:(id)handler previewActionsForMedia:(id)media defaultActionProvider:(id /* block */)provider loggingExtra:(id)extra adProductItemPk:(id)pk;
- (void)previewHandlerDidTapSaveOrUnsave:(id)unsave shouldSave:(BOOL)save productItem:(id)item;
- (BOOL)previewHandlerShouldOmitProfilePinningAction:(id)action;
- (BOOL)previewHandlerPreviewEnabled:(id)enabled;
- (void)previewHandlerDidLoad:(id)load;
- (void)previewHandlerDidDismiss:(id)dismiss;
- (void)saveStatusChangedForItem:(id)item withEvent:(long long)event changedCollectionIds:(id)ids;
- (void)feedItemAddedToCollection:(id)collection withCollectionIds:(id)ids;
- (void)savedMediaCollectionStatusChanged:(long long)changed collection:(id)collection;
- (void)emptyViewPrimaryButtonWasTapped:(id)tapped;
- (void)_fetch;
- (void)infoViewWasTapped:(id)tapped;
- (void)infoViewTextButtonTapped:(id)tapped;
- (void)didSelectFeedItem:(id)item usingForceTouch:(BOOL)touch;
- (void)didTapSelectionOverlayWithFeedItem:(id)item;
- (void)savedCollectionHeaderSectionControllerDidRequestCreateGuide:(id)guide;
- (void)savedCollectionHeaderSectionControllerDidRequestSendCollection:(id)collection;
- (void)contributorViewControllerDidSelectDone:(id)done;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
- (void)mediaItemDeleted:(id)deleted storyReelPK:(id)pk;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (id)analyticsModule;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)savedMediaCollectionBulkEditButtonViewDidTapRemoveButton:(id)button;
- (void)savedMediaCollectionBulkEditButtonViewDidTapAddToCollectionButton:(id)button;
- (id)fallbackIcon;
- (BOOL)isEmpty;
- (void)setSelectionState:(BOOL)state;
- (void)selectAll;
- (void)deselectAll;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomFromTransition;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)didCompleteBackwardZoomTransition;
- (void)storyViewer:(id)viewer didNavigateToStoryItem:(id)item;
- (void)storyViewerShouldRemoveEmptyStateStory:(id)story navigationAction:(long long)action;
- (void)storyViewerDidFinish:(id)finish navigationAction:(long long)action lastMediaID:(id)id viewerExitContextDict:(id)dict completion:(id /* block */)completion;
- (BOOL)storyViewerShouldPresentCamera:(id)camera;
- (void)storyViewer:(id)viewer didFocusOnReelWithPK:(id)pk;
- (void)storyViewerDidTapTryItOn:(id)on onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
- (void)storyViewerDidTapViewDay:(id)day;
- (void)storyViewerDidMute:(id)mute didMutePosts:(BOOL)posts;
- (void)storyViewerDidUnfollow:(id)unfollow;
- (void)storyViewerDidFollow:(id)follow;
- (void)saveCollectionsViewController:(id)controller willUpdateCollection:(id)collection withRemoveFromCollection:(BOOL)collection;
- (void)saveCollectionsViewController:(id)controller didUpdateCollection:(id)collection withRemoveFromCollection:(BOOL)collection;
- (BOOL)saveCollectionsViewController:(id)controller shouldPauseForCollectionWithTitle:(id)title continueHandler:(id /* block */)handler;
- (void)saveCollectionsViewController:(id)controller updateFailedWithCollection:(id)collection;
- (void)saveCollectionsViewControllerDidDismiss:(id)dismiss;
@end

#endif /* IGSavedMediaFeedViewController_h */