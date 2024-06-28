//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteAdsManagerPastPromotionsViewController_h
#define IGPromoteAdsManagerPastPromotionsViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGBoostUnavailableDialogController.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromoteFlowPathManager.h"
#include "IGPromoteLoginHelper.h"
#include "IGScopedListener-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class IGListAdapter, IGRefreshControl, IGSpinnerLabelViewModel, IGUserSession, NSArray, NSString, UICollectionView;

@interface IGPromoteAdsManagerPastPromotionsViewController : IGPromoteViewController<UICollectionViewDelegate, UIScrollViewDelegate, IGListAdapterDataSource, IGScopedListener> {
  /* instance variables */
  IGUserSession *_session;
  NSArray *_inactivePromotionViewModels;
  UICollectionView *_contentView;
  IGListAdapter *_adapter;
  BOOL _navigatingToPastPromotionsPage;
  IGRefreshControl *_refreshControl;
  BOOL _errorFetchingData;
  IGBoostPostLogger *_logger;
  IGPromoteLoginHelper *_promoteLoginHelper;
  BOOL _secondaryFlowExitedWithCompletion;
  BOOL _secondaryFlowLaunchedFromPromotionManager;
  IGPromoteFlowPathManager *_promoteFlowPathManager;
  long long _totalInactivePromotions;
  long long _promotionPaginationCursor;
  long long _promotionPaginationHasMorePromotionsToFetch;
  BOOL _shouldShowFetchingMoreSpinner;
  IGSpinnerLabelViewModel *_fetchingMoreSpinnerModel;
  BOOL _shouldRefreshPromotionManager;
  IGBoostUnavailableDialogController *_boostUnavailableDialogController;
  BOOL _isUserUnderSanction;
  NSString *_blockingErrorTitle;
  NSString *_blockingErrorDescription;
  BOOL _openedFromAdsManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_refreshPromotions;
- (void)_onBackBarButtonTapped;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint *)offset;
- (void)notifyViewControllerDidTapResumeWithOrganicMediaIgId:(id)id mediaId:(id)id pageId:(id)id thumbnailURL:(id)url isStoryPost:(BOOL)post isPOSMRetry:(BOOL)posmretry tappedResumeCompletion:(id /* block */)completion failureBlock:(id /* block */)block;
- (void)notifyViewControllerDidTapPauseWithOrganicMediaIgId:(id)id mediaId:(id)id pageId:(id)id thumbnailURL:(id)url isStoryPost:(BOOL)post tappedPauseCompletion:(id /* block */)completion failureBlock:(id /* block */)block;
- (void)notifyViewControllerDidTapPromoteAgainWithMediaId:(id)id;
- (void)notifyViewControllerDidTapThumbnailWithMediaId:(id)id instagramPositions:(id)positions mediaProductType:(id)type politicalAdBylineText:(id)text destination:(long long)destination selectedWebsiteCTAType:(long long)ctatype;
- (void)notifyViewControllerDidTapAppealWithMediaId:(id)id boostId:(id)id rejectionDataModel:(id)model;
- (void)notifyViewControllerDidTapReviewWithMediaId:(id)id boostId:(id)id rejectionDataModel:(id)model adAccountId:(id)id audienceId:(id)id thumbnailURL:(id)url;
- (void)notifyViewControllerDidTapViewInsightsWithMediaId:(id)id splitTestPartnerPromotionIds:(id)ids;
- (void)notifyViewControllerDidTapViewLeadsWithMediaId:(id)id;
- (void)notifyViewControllerDidTapLearnMoreWithThumbnailURL:(id)url isStoryPost:(BOOL)post mediaId:(id)id;
- (void)notifyListSectionControllerDidTapViewAppealWithAppealSupportInboxURL:(id)url mediaId:(id)id;
- (void)notifyViewControllerDidTapRejectedLearnMoreWithMediaId:(id)id;
- (void)notifyViewControllerDidTapCampaignControlEditWithMediaId:(id)id pageId:(id)id;
- (void)notifyViewControllerDidTapPayNowWithAdAccountId:(id)id mediaId:(id)id adAmount:(id)amount;
- (void)notifyViewControllerDidTapAddFundsWithAdAccountId:(id)id mediaId:(id)id adAmount:(id)amount;
- (void)notifyViewControllerDidTapCompleteDraftWithMediaId:(id)id;
- (void)notifyViewControllerDidTapAccountSpendLimitStatusWithMediaId:(id)id;
- (void)notifyViewControllerDidTapNotDeliveringLearnMoreWithMediaId:(id)id;
- (void)shouldRefreshPromotionManager;
- (void)didUpdateStoryPromotionState;
- (void)boostASLViewControllerDidTapCancelButton:(id)button;
@end

#endif /* IGPromoteAdsManagerPastPromotionsViewController_h */