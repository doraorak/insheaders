//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveCommentsContainerViewController_h
#define IGLiveCommentsContainerViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGLiveCommentControlService.h"
#include "IGLiveCommentsContainerView.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGDeviceSession, IGListAdapter, IGLiveCommentModel, NSCache, NSMutableArray, NSString;
@protocol IGLiveAddonCoordinating, IGLiveCommentsContainerViewControllerDelegate, IGLiveLoggingContext;

@interface IGLiveCommentsContainerViewController : UIViewController<IGListAdapterDataSource, UICollectionViewDelegate, UIScrollViewDelegate> {
  /* instance variables */
  IGLiveCommentsContainerView *_commentsContainerView;
  BOOL _isInBroadcastView;
  NSMutableArray *_commentModels;
  IGLiveCommentModel *_pinnedCommentModel;
  NSString *_module;
  IGListAdapter *_listAdapter;
  NSCache *_sizeCache;
  IGLiveCommentControlService *_commentControlService;
}

@property (weak, nonatomic) NSObject<IGLiveCommentsContainerViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSObject<IGAnalyticsEventLoggingProtocol> *analyticsLogger;
@property (retain, nonatomic) NSObject<IGLiveLoggingContext> *loggingContext;
@property (retain, nonatomic) IGDeviceSession *deviceSession;
@property (retain, nonatomic) NSString *broadcastId;
@property (retain, nonatomic) NSObject<IGAPIClient> *networker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGLiveAddonCoordinating> *coordinator;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL addonLifeCycleEventEnabled;

/* instance methods */
- (id)initIsInBroadcastView:(BOOL)view;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)removeCommentWithPk:(id)pk;
- (void)setCommentsContainerDisplayMode:(long long)mode;
- (BOOL)isCommentVisible:(id)visible;
- (long long)commentsContainerDisplayMode;
- (id)visibleCellForComment:(id)comment;
- (void)setIsHidden:(BOOL)hidden;
- (id)objectsForListAdapter:(id)adapter;
- (id)emptyViewForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (void)liveCommentsSectionController:(id)controller didReceiveTap:(id)tap;
- (BOOL)liveCommentsSectionControllerIsInBroadcastView:(id)view;
- (void)liveCommentsSectionController:(id)controller didSelectCommentModel:(id)model tappedWaveButton:(BOOL)button cell:(id)cell;
- (void)liveCommentsSectionController:(id)controller didToggleComment:(id)comment asLiked:(BOOL)liked;
- (void)liveCommentSectionController:(id)controller didTapReplyComment:(id)comment;
- (void)liveCommentSectionController:(id)controller didTapParentComment:(id)comment;
- (void)liveCommentSectionController:(id)controller didTapPinComment:(id)comment;
- (void)commentsContainerView:(id)view didReceiveUnpinTapOnComment:(id)comment;
- (void)commentsContainerView:(id)view didReceiveTapOnComment:(id)comment isPinned:(BOOL)pinned tappedWaveButton:(BOOL)button cell:(id)cell;
- (void)commentControlService:(id)service didFailToPinComment:(id)comment;
- (void)commentControlService:(id)service didFailToUnpinComment:(id)comment;
- (void)commentControlService:(id)service didFailToToggleComment:(id)comment asLiked:(BOOL)liked;
- (void)commentControlService:(id)service didSuccessfullyToggleComment:(id)comment asLiked:(BOOL)liked;
- (void)configurateCoordinator:(id)coordinator;
- (void)unconfigurateCoordinator;
- (void)receiveEvent:(unsigned long long)event from:(id)from payload:(id)payload;
- (BOOL)canHandleRequest:(id)request;
- (id)handleRequest:(id)request;
@end

#endif /* IGLiveCommentsContainerViewController_h */