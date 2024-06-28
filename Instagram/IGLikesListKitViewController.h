//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLikesListKitViewController_h
#define IGLikesListKitViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGFeedItemPreviewProviding-Protocol.h"
#include "IGFeedItemToggleComponents.h"
#include "IGFeedNetworkSourceDelegate-Protocol.h"
#include "IGFeedPreviewingHandler.h"
#include "IGFeedPreviewingType-Protocol.h"
#include "IGFeedStarterKit.h"
#include "IGFeedStatusViewDelegate-Protocol.h"
#include "IGFeedToggleSectionController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h"
#include "IGMediaUpdatedListener-Protocol.h"
#include "IGScrollViewListener-Protocol.h"
#include "IGTransitionZoomFromCapable-Protocol.h"

@class IGFeedNetworkSource, IGNavigationController, IGUserSession, NSDictionary, NSMutableArray, NSOrderedSet, NSString, PreferredEdgeInsets;
@protocol IGLikesListKitViewControllerDelegate;

@interface IGLikesListKitViewController : IGViewController<IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGScrollViewListener, IGMediaThumbnailSectionControllerSelectionDelegate, IGTransitionZoomFromCapable, IGFeedStatusViewDelegate, IGMediaUpdatedListener, IGFeedItemPreviewProviding, IGFeedPreviewingType> {
  /* instance variables */
  IGFeedStarterKit *_feed;
  IGFeedToggleSectionController *_toggleItemController;
  IGFeedPreviewingHandler *_previewingHandler;
  IGFeedItemToggleComponents *_feedItemToggleComponents;
  NSMutableArray *_unliked;
  NSMutableArray *_reliked;
  NSOrderedSet *_currentItems;
  PreferredEdgeInsets *_preferredEdgeInsets;
  BOOL _disableFeedToggle;
  BOOL _disableFeedPreview;
  IGFeedNetworkSource *_networkDataSource;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (weak, nonatomic) NSObject<IGLikesListKitViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;
@property (readonly, nonatomic) IGNavigationController *navigationController;

/* instance methods */
- (id)initWithUserSession:(id)session preferredEdgeInsets:(id)insets disableFeedToggle:(BOOL)toggle disableFeedPreview:(BOOL)preview;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)feedNetworkSource:(id)source didReceiveFeedResponse:(id)response forRequestConfig:(id)config;
- (void)feedNetworkSource:(id)source didFinishLoadingWithConfig:(id)config success:(BOOL)success error:(id)error httpResponse:(id)response;
- (void)feedNetworkSource:(id)source didChangeToObjects:(id)objects;
- (void)feedNetworkSource:(id)source didStartLoadingWithConfig:(id)config;
- (void)feedNetworkSource:(id)source didCancelRequestForRequestConfig:(id)config;
- (id)collectionView;
- (id)adapter;
- (BOOL)performViewControllerCommitForPreviewedItem:(id)item;
- (id)cellForPreviewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)objectForPreviewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)scrollViewWillScrollNearBottom:(id)bottom;
- (void)feedToggleSectionController:(id)controller didSelectButtonType:(long long)type;
- (void)didSelectFeedItem:(id)item usingForceTouch:(BOOL)touch;
- (void)didTapSelectionOverlayWithFeedItem:(id)item;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomFromTransition;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (void)didCompleteBackwardZoomTransition;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (void)feedStatusViewDidTap:(id)tap;
- (void)feedStatusEmptyStateButtonWasTapped:(id)tapped;
@end

#endif /* IGLikesListKitViewController_h */
