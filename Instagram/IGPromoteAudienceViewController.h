//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteAudienceViewController_h
#define IGPromoteAudienceViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGBoostUnifiedAudienceGenericDataModel.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListAdapterDelegate-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGPromoteAudienceDataModel.h"
#include "IGPromoteChevronViewModel.h"
#include "IGPromoteCreateAndEditAudienceFlowManager.h"
#include "IGPromoteDataStore.h"
#include "IGPromoteEducationPresenter.h"
#include "IGPromoteFlowManagerNavigationProtocol-Protocol.h"
#include "IGPromoteHECAppealFlowManager.h"
#include "IGPromoteHeaderViewModel.h"
#include "IGPromoteListWithDrawerView.h"
#include "IGPromoteSeparatorViewModel.h"
#include "IGPromoteSwitchViewModel.h"
#include "IGPromoteTitleSubtitleViewModel.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGBannerView, IGBottomButtonsView, IGLabelItemViewModel, IGListAdapter, IGPartialModalSheetViewController, IGSpinnerLabelViewModel, IGUserSession, NSArray, NSString, UIActivityIndicatorView, UIBarButtonItem;
@protocol IGPromoteAudienceViewControllerDelegate;

@interface IGPromoteAudienceViewController : IGPromoteViewController<IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGPartialModalSheetListener, IGPromoteFlowManagerNavigationProtocol> {
  /* instance variables */
  IGUserSession *_session;
  IGBoostPostLogger *_logger;
  IGPromoteCreateAndEditAudienceFlowManager *_createAudienceFlowManager;
  IGPromoteListWithDrawerView *_contentView;
  IGBannerView *_audienceValidationBannerView;
  UIBarButtonItem *_loadingButton;
  UIActivityIndicatorView *_loadingSpinner;
  IGBottomButtonsView *_bottomButtonView;
  IGPromoteEducationPresenter *_educationPresenter;
  IGPartialModalSheetViewController *_partialModalSheetViewController;
  IGListAdapter *_adapter;
  BOOL _toggleImpressionLogged;
  IGPromoteDataStore *_localDataStore;
  BOOL _hasInitAudienceDataModelInDataStore;
  BOOL _shouldResetLocalDataStore;
  BOOL _shouldReRunAvailableAudiencesQueryIfCTXSelected;
  Class _audienceService;
  BOOL _isAudienceRedesignEnabled;
  IGBoostUnifiedAudienceGenericDataModel *_selectedPrimaryAudienceDataModel;
  BOOL _isAudiencePaginationIsEnabled;
  BOOL _shouldShowFetchingMoreSpinner;
  BOOL _audiencePaginationHasMoreAudiencesToFetch;
  IGSpinnerLabelViewModel *_fetchingMoreSpinnerModel;
  long long _audiencePaginationCount;
  long long _audiencePaginationCursor;
  IGPromoteAudienceDataModel *_selectedAudienceDataModel;
  IGPromoteChevronViewModel *_hecChevronViewModel;
  NSArray *_selectedCategoryTitleSubtitleViewModels;
  IGPromoteSeparatorViewModel *_separatorViewModel;
  NSArray *_radioButtonViewModels;
  IGPromoteChevronViewModel *_chevronViewModel;
  IGPromoteChevronViewModel *_specialRequirementsChevronViewModel;
  IGPromoteTitleSubtitleViewModel *_editCreateNewAudienceViewModel;
  IGPromoteChevronViewModel *_changeOrCreateNewAudienceViewModel;
  IGLabelItemViewModel *_fbPlacementTitleLabelViewModel;
  IGPromoteSwitchViewModel *_fbPlacementToggleViewModel;
  IGPromoteHECAppealFlowManager *_flowManager;
}

@property (copy, nonatomic) IGPromoteHeaderViewModel *headerViewModel;
@property (copy, nonatomic) IGPromoteSwitchViewModel *toggleViewModel;
@property (retain, nonatomic) IGPromoteDataStore *dataStore;
@property (weak, nonatomic) NSObject<IGPromoteAudienceViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session logger:(id)logger dataStore:(id)store flowManager:(id)manager audienceService:(Class)service;
- (id)initWithSession:(id)session logger:(id)logger dataStore:(id)store flowManager:(id)manager;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter willDisplayObject:(id)object atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingObject:(id)object atIndex:(long long)index;
- (BOOL)switchShouldInterceptToggling:(id)toggling withViewModel:(id)model;
- (void)switchDidSucceedToggling:(id)toggling withViewModel:(id)model;
- (void)switchDidInterceptToggling:(id)toggling withViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapTitleAppendedTextWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapDeleteButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapEditButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapURL:(id)url withViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller maybeShowTitleAppendedTextTooltipOnCell:(id)cell withPoint:(struct CGPoint { double x0; double x1; })point;
- (void)promoteChevronSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteChevronSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (long long)preferredTabBarBehavior;
- (void)_onBackBarButtonTapped;
- (void)_onSaveBarButtonTapped;
- (void)_onHecBackBarButtonTapped;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint *)offset;
- (BOOL)_isSelectedAudienceIdInList;
- (void)_onEducationComponentTapped;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)promoteHECBottomSheetViewControllerViewWillAppear:(id)appear;
- (void)promoteHECBottomSheetViewControllerDidTapLearnMore:(id)more;
- (void)promoteHECBottomSheetViewController:(id)controller didSelectRegulatedCategory:(long long)category;
- (void)promoteHECBottomSheetViewControllerDidTapDoneButton:(id)button selectedRegulatedCategories:(id)categories;
- (BOOL)isFullscreen;
- (void)promoteEducationDrawerViewController:(id)controller didSelectEducationAction:(long long)action;
- (void)promoteEducationCarouselViewController:(id)controller didSelectEducationAction:(long long)action;
- (void)promoteCreateAndEditAudienceDidFinishInNextStep:(id)step;
- (void)promoteUpdateAutoAudienceLocationDidFinish;
- (void)promoteCreateAndEditAudienceDidTapNextButtonForNextStep:(long long)step;
- (void)promoteCreateAndEditAudienceDidSaveButtonWithNewAudience:(id)audience;
- (void)promoteCreateAndEditAudienceDidTapCancelButtonOnStep:(long long)step;
- (void)createAndEditAudienceFlowManagerDidExitCreateAndEditAudienceFlow:(id)flow;
- (BOOL)shouldPopViewControllerWithDismissViewControllers;
- (void)didTapSwitchSubtitleLink:(id)link;
- (void)boostAudiencePastAudiencesViewController:(id)controller didTapSaveWithUpdatedAudienceList:(id)list;
- (void)reloadViewWithCompletionHandler:(id /* block */)handler;
@end

#endif /* IGPromoteAudienceViewController_h */
