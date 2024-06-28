//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteBudgetAndDurationViewController_h
#define IGPromoteBudgetAndDurationViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBannerSectionControllerDelegate-Protocol.h"
#include "IGBoostBudgetAndDurationAdBudgetDetailsBannerView.h"
#include "IGBoostBudgetDetailsDataModel.h"
#include "IGBoostPostLogger.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGPromoteDataStore.h"
#include "IGPromoteDoubleTextViewListModel.h"
#include "IGPromoteEducationPresenter.h"
#include "IGPromoteFlowManagerNavigationProtocol-Protocol.h"
#include "IGPromoteHeaderViewModel.h"
#include "IGPromoteListWithDrawerView.h"
#include "IGPromoteMessageViewModel.h"
#include "IGPromoteRadioButtonViewListModel.h"
#include "IGPromoteReachEstimationFetcher.h"
#include "IGPromoteReachEstimationStore.h"
#include "IGPromoteSectionHeaderWithIconViewModel.h"
#include "IGPromoteSliderViewModel.h"
#include "IGPromoteTitleSubtitleViewModel.h"
#include "IGPromoteWarningTitleMessageViewModel.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGBannerSectionController, IGBannerView, IGBannerViewModel, IGBottomButtonsView, IGListAdapter, IGTooltipView, IGUserSession, NSString;
@protocol IGPromoteBudgetAndDurationViewControllerDelegate, IGPromoteReachEstimationUpdateAnnouncer;

@interface IGPromoteBudgetAndDurationViewController : IGPromoteViewController<IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGCoreTextLinkHandler, IGBannerSectionControllerDelegate, IGPromoteFlowManagerNavigationProtocol> {
  /* instance variables */
  IGUserSession *_session;
  IGBoostPostLogger *_logger;
  IGPromoteListWithDrawerView *_contentView;
  IGListAdapter *_adapter;
  NSObject<IGPromoteReachEstimationUpdateAnnouncer> *_reachEstimationUpdateAnnouncer;
  IGPromoteReachEstimationFetcher *_reachEstimationFetcher;
  IGPromoteEducationPresenter *_educationPresenter;
  IGBottomButtonsView *_bottomButtonView;
  BOOL _isFetching;
  BOOL _shouldFetchPaymentInfo;
  BOOL _shouldResetLocalDataStore;
  BOOL _shouldShowBudgetPackage;
  BOOL _selectedCustomizeBudgetInBudgetPackage;
  BOOL _shouldShowUpdatedBoostLanguageEvolutionContent;
  BOOL _isContinuousAdsEnabled;
  BOOL _isContinuousAdsPVEnabledExposedWhenLoadingBudgetScreen;
  IGBannerView *_continuousAdsWarningBannerView;
  BOOL _isContinuousAdsDefaultEnabled;
  BOOL _shouldShowContinuousAdsTooltipIfNeeded;
  IGTooltipView *_continuousBudgetTooltipView;
  unsigned long long _messagingDefaultBudgetTestGroup;
  IGPromoteDataStore *_localDataStore;
  BOOL _isIAPEnabled;
  IGBoostBudgetAndDurationAdBudgetDetailsBannerView *_adBudgetDetailsBannerView;
  NSString *_maxBudgetWithTax;
  NSString *_feeAmount;
  BOOL _didLogIAPMaxBudgetWarningView;
  BOOL didLogZeroOutcomeView;
  IGBannerSectionController *_similarAdvertiserBudgetRecommendationSectionController;
  BOOL _shouldPersistSABRWarning;
  BOOL _didLogSABRConversionView;
  BOOL _didLogDurationWarningView;
  BOOL _hasNonMessagingGoalEverBeenSelected;
  BOOL _isUIOptimizationEnabled;
  BOOL _isUIOptimizationNewAdvertiserEnabled;
  IGBoostBudgetDetailsDataModel *_budgetDetailsDataModel;
  BOOL _didLogEstimatedMessagesView;
  IGPromoteHeaderViewModel *_warningViewModel;
  IGPromoteTitleSubtitleViewModel *_estimatedReachViewModel;
  IGPromoteSectionHeaderWithIconViewModel *_budgetSectionHeaderViewModel;
  IGPromoteSliderViewModel *_budgetSliderViewModel;
  IGPromoteRadioButtonViewListModel *_budgetPackageOptionsRadioButtonListViewModel;
  IGPromoteSectionHeaderWithIconViewModel *_durationSectionHeaderViewModel;
  IGPromoteSliderViewModel *_durationSliderViewModel;
  IGPromoteRadioButtonViewListModel *_durationOptionsRadioButtonListViewModel;
  IGPromoteWarningTitleMessageViewModel *_budgetRecommendationMessageViewModel;
  IGPromoteMessageViewModel *_maxBudgetWarningViewModel;
  IGPromoteMessageViewModel *_educationMessageViewModel;
  IGBannerViewModel *_budgetBannerWarningViewModel;
  IGBannerViewModel *_durationBannerViewModel;
  IGBannerViewModel *_similarAdvertiserBudgetRecommendationBannerViewModel;
  IGPromoteReachEstimationStore *_reachEstimationStore;
}

@property (copy, nonatomic) IGPromoteHeaderViewModel *headerViewModel;
@property (copy, nonatomic) IGPromoteTitleSubtitleViewModel *addPaymentMethodViewModel;
@property (copy, nonatomic) IGPromoteDoubleTextViewListModel *estimatedTaxViewModels;
@property (retain, nonatomic) IGPromoteDataStore *dataStore;
@property (nonatomic) BOOL shouldApplyDefaultContinuousBudget;
@property (weak, nonatomic) NSObject<IGPromoteBudgetAndDurationViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session dataStore:(id)store logger:(id)logger;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (void)_onBackBarButtonTapped;
- (void)_onSaveBarButtonTapped;
- (void)promoteSliderViewSectionController:(id)controller didSlideOnCell:(id)cell withValue:(id)value;
- (void)promoteSliderViewSectionController:(id)controller didEndSlidingOnCell:(id)cell;
- (void)promoteSliderViewSectionController:(id)controller didRespondToTapOutsideThumbWithCell:(id)cell;
- (void)promoteRadioButtonListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapTitleAppendedTextWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapDeleteButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapEditButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapURL:(id)url withViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller maybeShowTitleAppendedTextTooltipOnCell:(id)cell withPoint:(struct CGPoint { double x0; double x1; })point;
- (void)promoteHeaderSectionController:(id)controller didTapSubtitle:(id)subtitle;
- (void)promoteHeaderSectionController:(id)controller didTapURL:(id)url;
- (void)_updateReachEstimationViewModel;
- (void)reloadViewWithCompletionHandler:(id /* block */)handler;
- (void)_onEducationComponentTapped;
- (void)promoteEducationDrawerViewController:(id)controller didSelectEducationAction:(long long)action;
- (void)promoteEducationCarouselViewController:(id)controller didSelectEducationAction:(long long)action;
- (BOOL)shouldPopViewControllerWithDismissViewControllers;
- (void)boostDSAViewControllerDidTapConfirmButton:(id)button;
- (void)boostDSAViewControllerDidTapCancelButton:(id)button;
- (void)promoteMessageViewSectionControllerDidTapIconImage:(id)image withViewModel:(id)model;
- (void)promoteMessageViewSectionController:(id)controller didTapSubtitleLink:(id)link withViewModel:(id)model;
- (void)promoteMessageViewSectionControllerDidTapTitle:(id)title withViewModel:(id)model;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)didTapBannerView:(id)view;
- (void)didTapButton:(id)button;
- (void)didTapDismissButton:(id)button;
- (void)boostBudgetAndDurationAdBudgetDetailsBannerViewDidTapIconImage:(id)image;
@end

#endif /* IGPromoteBudgetAndDurationViewController_h */
