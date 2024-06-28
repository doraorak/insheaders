//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteProfileVisitsViewController_h
#define IGPromoteProfileVisitsViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromoteDataStore.h"
#include "IGPromoteEducationPresenter.h"
#include "IGPromoteListWithDrawerView.h"
#include "IGPromoteSwitchViewModel.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGBottomButtonsView, IGDSHeadlineViewModel, IGListAdapter, IGUserSession, NSString;

@interface IGPromoteProfileVisitsViewController : IGPromoteViewController<IGListAdapterDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGUserSession *_session;
  IGPromoteDataStore *_dataStore;
  IGBoostPostLogger *_logger;
  IGListAdapter *_adapter;
  IGPromoteListWithDrawerView *_contentView;
  IGDSHeadlineViewModel *_headlineViewModel;
  IGPromoteSwitchViewModel *_toggleViewModel;
  IGPromoteDataStore *_localDataStore;
  IGPromoteEducationPresenter *_educationPresenter;
  IGBottomButtonsView *_bottomButtonView;
  BOOL _isMoreMessageCTA;
  BOOL _isCTWAMessageExtensionEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session dataStore:(id)store logger:(id)logger;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_reloadView;
- (void)_onBackBarButtonTapped;
- (BOOL)switchShouldInterceptToggling:(id)toggling withViewModel:(id)model;
- (void)switchDidSucceedToggling:(id)toggling withViewModel:(id)model;
- (void)switchDidInterceptToggling:(id)toggling withViewModel:(id)model;
- (void)promoteEducationCarouselViewController:(id)controller didSelectEducationAction:(long long)action;
- (void)_onEducationComponentTapped;
- (void)promoteRadioButtonListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapTitleAppendedTextWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapDeleteButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapEditButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapURL:(id)url withViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller maybeShowTitleAppendedTextTooltipOnCell:(id)cell withPoint:(struct CGPoint { double x0; double x1; })point;
- (void)promoteTitleSubtitleListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteTitleSubtitleListSectionController:(id)controller didTapSubtitleLink:(id)link;
@end

#endif /* IGPromoteProfileVisitsViewController_h */
