//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadParticipantRequestsViewController_h
#define IGDirectThreadParticipantRequestsViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectOutgoingUpdateListener-Protocol.h"
#include "IGDirectOutgoingUpdateSending-Protocol.h"
#include "IGDirectParticipantRequestsService.h"
#include "IGDirectThreadParticipantRequestAnalyticsLogging.h"
#include "IGDirectThreadParticipantsGradientButton.h"
#include "IGDirectThreadParticipantsRequestsController.h"
#include "IGDirectThreadParticipantsRequestsViewControllerDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGStoryViewerPresenting-Protocol.h"
#include "IGStoryViewerSectionControllerViewerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGDirectThreadMetadata, IGListAdapter, IGUserSession, NSString, UIBarButtonItem, UICollectionView;

@interface IGDirectThreadParticipantRequestsViewController : IGViewController<IGDirectOutgoingUpdateListener, IGListAdapterDataSource, IGStoryViewerSectionControllerViewerDelegate, UIScrollViewDelegate> {
  /* instance variables */
  NSObject<IGDirectThreadParticipantsRequestsViewControllerDelegate> *_delegate;
  UICollectionView *_collectionView;
  IGDirectThreadParticipantsRequestsController *_participantsRequestsController;
  NSObject<IGStoryViewerPresenting> *_storyPresentationController;
  IGListAdapter *_listAdapter;
  IGDirectThreadParticipantsGradientButton *_footerButton;
  IGUserSession *_userSession;
  IGDirectParticipantRequestsService *_participantRequestsService;
  long long _actionState;
  NSObject<IGDirectOutgoingUpdateSending> *_directOutgoingUpdateSender;
  NSString *_threadId;
  IGDirectThreadMetadata *_threadMetadata;
  UIBarButtonItem *_selectAllButton;
  IGDirectThreadParticipantRequestAnalyticsLogging *_participantRequestsLogger;
  BOOL _isSelectingAll;
  BOOL _threadStarted;
  BOOL _fromStoryViewer;
  BOOL _isPublicChannel;
  NSString *_sessionId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithParticipantsRequestsController:(id)controller userSession:(id)session participantRequestsService:(id)service directOutgoingUpdateSender:(id)sender threadId:(id)id delegate:(id)delegate threadStarted:(BOOL)started fromStoryViewer:(BOOL)viewer sessionId:(id)id threadMetadata:(id)metadata;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)dealloc;
- (long long)preferredTabBarBehavior;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didUpdateRequestedParticipants;
- (void)didReachMaxParticipants:(long long)participants remainingUsersSelected:(long long)selected;
- (void)directMessageOutgoingUpdateDidSucceed:(id)succeed;
- (void)directThreadOutgoingUpdateDidSucceed:(id)succeed;
- (void)directMessageOutgoingUpdate:(id)update didFailWithError:(id)error;
- (void)directThreadOutgoingUpdate:(id)update didFailWithError:(id)error;
- (void)storyViewerSectionController:(id)controller didTapViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller didTapMoreButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapCheckmarkButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapAddButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapProductThumbnailInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didHideViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller presentStoryForReel:(id)reel media:(id)media fromView:(id)view profilePictureView:(id)view;
- (void)storyViewerSectionController:(id)controller willDisplayViewerSource:(id)source position:(long long)position;
- (void)storyViewerSectionController:(id)controller didMarkAsNotSpamViewerSource:(id)source;
- (void)storyViewerSectionController:(id)controller didTapHeartButtonInViewerCell:(id)cell;
- (void)storyViewerSectionController:(id)controller didTapViewCommentLikes:(id)likes;
- (void)storyViewerSectionController:(id)controller didTapStoryComment:(id)comment;
- (void)storyViewerSectionController:(id)controller didDeleteStoryComment:(id)comment;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint *)offset;
- (void)_didTapFooterButton:(id)button;
- (void)_didTapSelectAll:(id)all;
- (void)_updateTitle;
@end

#endif /* IGDirectThreadParticipantRequestsViewController_h */