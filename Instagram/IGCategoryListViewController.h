//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCategoryListViewController_h
#define IGCategoryListViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGCategoryListLogger.h"
#include "IGCategoryNetworkSource.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListSingleSectionControllerDelegate-Protocol.h"
#include "IGStoryViewerPresentationController.h"

@class IGDirectAvatarView, IGInfoView, IGListAdapter, IGUser, IGUserSession, NSArray, NSString, UIActivityIndicatorView, UICollectionView;

@interface IGCategoryListViewController : IGViewController<IGListAdapterDataSource, IGListSingleSectionControllerDelegate> {
  /* instance variables */
  IGDirectAvatarView *_avatarView;
  IGCategoryListLogger *_logger;
  IGCategoryNetworkSource *_networkSource;
  IGInfoView *_errorView;
  IGListAdapter *_listAdapter;
  IGStoryViewerPresentationController *_storyViewerController;
  IGUser *_currentRecommendedUser;
  IGUserSession *_userSession;
  NSArray *_categoryItems;
  NSString *_targetID;
  NSString *_categoryID;
  UIActivityIndicatorView *_spinner;
  UICollectionView *_collectionView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session targetID:(id)id categoryID:(id)id entryModule:(id)module containerModule:(id)module;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didSelectSectionController:(id)controller withObject:(id)object;
- (void)didTapCategoryItemWithReelOwner:(id)owner onStoryEntryView:(id)view recommendedUser:(id)user;
- (void)didTapFollowButtonWithSectionController:(id)controller recommendedUser:(id)user;
- (void)categoryNetworkSource:(id)source didReceiveResponse:(id)response;
- (void)categoryNetworkSource:(id)source didReceiveError:(id)error;
- (void)infoViewWasTapped:(id)tapped;
- (void)infoViewTextButtonTapped:(id)tapped;
- (void)storyViewerPresentationControllerDidFinishOnMediaId:(id)id;
- (void)storyViewerPresentationControllerDidPresentViewer:(id)viewer withReel:(id)reel;
- (void)storyViewerPresentationControllerDidFailToPresentViewer:(id)viewer;
- (void)storyViewerPresentationControllerWillFinishOnMediaId:(id)id viewerExitContextDict:(id)dict;
- (void)storyViewerPresentationControllerDidNavigateToMediaId:(id)id;
- (void)storyViewerPresentationControllerDidFocusOnReelWithPK:(id)pk;
@end

#endif /* IGCategoryListViewController_h */
