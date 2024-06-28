//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteDestinationViewController_h
#define IGPromoteDestinationViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostCTWAQPLLogger.h"
#include "IGBoostPostLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGOneLinkCachedInfoEventListener-Protocol.h"
#include "IGPromoteDataStore.h"
#include "IGPromoteDestinationWebsiteViewController.h"
#include "IGPromoteEducationPresenter.h"
#include "IGPromoteFlowManagerNavigationProtocol-Protocol.h"
#include "IGPromoteGetHelpBottomSheetViewControllerDelegate-Protocol.h"
#include "IGPromoteListWithDrawerView.h"
#include "IGPromoteRadioButtonViewListModel.h"
#include "IGPromoteThumbnailAdsPreviewViewModel.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGDSHeadlineViewModel, IGListAdapter, IGMedia, IGTooltipView, IGUserSession, NSString;
@protocol IGPromoteDestinationViewControllerDelegate;

@interface IGPromoteDestinationViewController : IGPromoteViewController<IGListAdapterDataSource, UICollectionViewDelegate, IGPromoteGetHelpBottomSheetViewControllerDelegate, IGOneLinkCachedInfoEventListener, IGPromoteFlowManagerNavigationProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  IGBoostPostLogger *_logger;
  IGBoostPostCTWAQPLLogger *_ctwaPerfLogger;
  IGPromoteListWithDrawerView *_contentView;
  IGListAdapter *_adapter;
  IGPromoteDestinationWebsiteViewController *_websiteVisitViewController;
  IGBottomButtonsView *_bottomButtonView;
  IGDSHeadlineViewModel *_headlineViewModel;
  IGPromoteEducationPresenter *_educationPresenter;
  BOOL _isCTDRecommendationChevronEnabled;
  BOOL _isCTDRecommendationEnabled;
  BOOL _isCTDMonthlyActiveAdvertiserUpsellEnabled;
  BOOL _isCTDHighVBTUpsellEnabled;
  BOOL _isCTDMessagingToolsEnabled;
  BOOL _isCTDRecommendationByMTML;
  BOOL _isCTWAMediaCaptionContextualUpsellEnabled;
  BOOL _isCTWAProfileCaptionContextualUpsellEnabled;
  BOOL _isCTWAImageIntentUpsellEnabled;
  BOOL _isCTWAMonthlyActiveAdvertiserUpsellEnabled;
  BOOL _isCTWAHighVBTUpsellEnabled;
  BOOL _isCTWARecommendationByMTML;
  BOOL _shouldAutoselectDestination;
  BOOL _shouldPreselectDestination;
  IGPromoteDataStore *_localDataStore;
  BOOL _shouldResetLocalDataStore;
  BOOL _hasProductTags;
  BOOL _isLoadingLeadGenForms;
  BOOL _shouldShowMore;
  BOOL _isOrganicCTDMedia;
  BOOL _isOrganicCTWAMedia;
  BOOL _isWhatsAppBusinessLinked;
  BOOL _didPreSelectedCTWA;
  BOOL _didPreSelectCTD;
  BOOL _didPreSelectedWV;
  BOOL _didPreSelectedPV;
  BOOL _isMessagingAsSecondaryCTAEnabled;
  BOOL _didShowSecondaryCTA;
  IGTooltipView *_leadGenToolTipView;
  IGPromoteRadioButtonViewListModel *_leadGenRadioButtonViewListModel;
  IGTooltipView *_CTWAToolTipView;
  IGPromoteRadioButtonViewListModel *_CTWARadioButtonViewListModel;
  BOOL _didShowCTWATooltip;
  BOOL _didShowCTDTooltip;
  IGTooltipView *_CTDToolTipView;
  IGTooltipView *_adsPreviewToolTipView;
  IGPromoteThumbnailAdsPreviewViewModel *_adsPreviewThumbnailViewModel;
  BOOL _didShowAdsPreviewTooltip;
  unsigned long long _callCenterIntegrationTestGroup;
  BOOL _shouldShowIGPromotePromotionAbandonmentCoupon;
  BOOL _shouldShowMediaPickerUponQuit;
  int _descriptionGroup;
  BOOL _isBrandedContentSponsorBoost;
  BOOL _hasSeenWALinkingFlow;
  BOOL _viewHasAdPreview;
  BOOL _isCustomCTAsEnabled;
  IGMedia *_media;
  BOOL _shouldEnableSaveButtonInMessagingScreen;
  BOOL _shouldDisableAutoNavigationToMessagingScreen;
  BOOL _shouldShowWAContextGuidance;
  BOOL _isObjectiveScreenRecommendedOptimizationEnabled;
  BOOL _didShowRecommendedDestinationTooltip;
  IGTooltipView *_recommendedDestinationTooltipView;
  BOOL _isBoostObjectiveRecommendedTextEnabled;
  BOOL _isBoostObjectiveRecommendedPillEnabled;
  IGTooltipView *_recommendedToolTipView;
  long long _spacerCounter;
}

@property (retain, nonatomic) IGPromoteDataStore *dataStore;
@property (weak, nonatomic) NSObject<IGPromoteDestinationViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session logger:(id)logger dataStore:(id)store;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)dealloc;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)promoteRadioButtonListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapTitleAppendedTextWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapDeleteButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapEditButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapURL:(id)url withViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller maybeShowTitleAppendedTextTooltipOnCell:(id)cell withPoint:(struct CGPoint { double x0; double x1; })point;
- (void)promoteRecommendedPillCellDidTapPillWithRecommendedInfoViewModel:(id)model;
- (void)headlineSectionControllerDidTapButton:(id)button viewModel:(id)model;
- (void)promoteThumbnailAdsPreviewSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteThumbnailAdsPreviewSectionController:(id)controller didTapButtonWithHeadlineViewModel:(id)model;
- (void)promoteChevronSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteChevronSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteTitleSubtitleListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteTitleSubtitleListSectionController:(id)controller didTapSubtitleLink:(id)link;
- (void)_onBackBarButtonTapped;
- (void)_onNormalPromoteCancelBarButtonTapped;
- (void)_onSaveBarButtonTapped;
- (void)_showRecommendedPillTooltipOnCell:(id)cell;
- (void)_showRecommendedTextTooltipOnCell:(id)cell atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_logRecommendedAppendedTextViewForPromoteDestinationType:(long long)type;
- (void)reloadViewWithCompletionHandler:(id /* block */)handler;
- (void)_exitAndResetLocalDataStore;
- (BOOL)_shouldShowExitFrictionActionSheet;
- (void)_onEducationComponentTapped;
- (void)_setNextButtonEnabled:(BOOL)enabled;
- (void)didTapOnPromoteEducationDrawerBannerView:(id)view;
- (void)didTapOnPromoteEducationDrawerTextView:(id)view;
- (void)promoteEducationDrawerViewController:(id)controller didSelectEducationAction:(long long)action;
- (void)promoteEducationCarouselViewController:(id)controller didSelectEducationAction:(long long)action;
- (BOOL)shouldPopViewControllerWithDismissViewControllers;
- (void)promoteGetHelpBottomSheetViewControllerDidTapElementType:(long long)type;
- (void)promoteCallCenterDidSucceedCancelCall;
- (void)didTapOnAdditionalBusinessInfoLink;
- (void)bloksIgwaLinkingEnvironmentDidFinished:(id)finished;
- (void)promoteMessagingAppsViewControllerDidTapNextBarButton:(id)button;
- (void)promoteMessagingAppsViewControllerDidTapBackBarButton:(id)button;
- (void)didUpdateCachedInfoWithBusinessInfoType:(unsigned long long)type;
- (void)didErrorOnFetchWithBusinessInfoType:(unsigned long long)type;
- (void)promoteDestinationWebsiteViewControllerDidTapNextBarButton:(id)button;
- (void)promoteDestinationWebsiteViewControllerDidTapSaveBarButton:(id)button;
@end

#endif /* IGPromoteDestinationViewController_h */