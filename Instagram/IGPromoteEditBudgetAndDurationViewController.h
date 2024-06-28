//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteEditBudgetAndDurationViewController_h
#define IGPromoteEditBudgetAndDurationViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromoteCampaignControlsDataStore.h"
#include "IGPromoteErrorDataModel.h"
#include "IGPromoteHeaderViewModel.h"
#include "IGPromoteSliderViewModel.h"
#include "IGPromoteTitleSubtitleViewModel.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, NSString, UIActivityIndicatorView, UICollectionView;
@protocol IGPromoteEditBudgetAndDurationViewControllerDelegate;

@interface IGPromoteEditBudgetAndDurationViewController : IGPromoteViewController<IGListAdapterDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGUserSession *_session;
  IGBoostPostLogger *_logger;
  UICollectionView *_contentView;
  IGListAdapter *_adapter;
  UIActivityIndicatorView *_spinner;
  IGPromoteErrorDataModel *_errorDataModel;
  BOOL _isEditing;
  BOOL _prevalidateError;
  BOOL _isFetching;
  IGPromoteCampaignControlsDataStore *_campaignControlsDataStore;
  IGPromoteHeaderViewModel *_warningViewModel;
  IGPromoteTitleSubtitleViewModel *_campaignDescriptionViewModel;
  IGPromoteSliderViewModel *_budgetSliderViewModel;
  IGPromoteSliderViewModel *_durationSliderViewModel;
}

@property (copy, nonatomic) IGPromoteHeaderViewModel *headerViewModel;
@property (weak, nonatomic) NSObject<IGPromoteEditBudgetAndDurationViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session campaignControlsDataStore:(id)store logger:(id)logger;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_onBackBarButtonTapped;
- (void)_onSaveBarButtonTapped;
- (void)promoteSliderViewSectionController:(id)controller didSlideOnCell:(id)cell withValue:(id)value;
- (void)promoteSliderViewSectionController:(id)controller didEndSlidingOnCell:(id)cell;
- (void)promoteSliderViewSectionController:(id)controller didRespondToTapOutsideThumbWithCell:(id)cell;
- (void)promoteHeaderSectionController:(id)controller didTapSubtitle:(id)subtitle;
- (void)promoteHeaderSectionController:(id)controller didTapURL:(id)url;
@end

#endif /* IGPromoteEditBudgetAndDurationViewController_h */
