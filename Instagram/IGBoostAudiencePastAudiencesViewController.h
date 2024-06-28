//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBoostAudiencePastAudiencesViewController_h
#define IGBoostAudiencePastAudiencesViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGBoostUnifiedAudienceGenericDataModel.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromoteCreateAndEditAudienceFlowManager.h"
#include "IGPromoteDataStore.h"

@class IGBottomButtonsView, IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGBoostAudiencePastAudiencesViewControllerDelegate;

@interface IGBoostAudiencePastAudiencesViewController : IGPromoteViewController<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  IGBoostPostLogger *_logger;
  UICollectionView *_collectionView;
  IGListAdapter *_adapter;
  IGBoostUnifiedAudienceGenericDataModel *_igCreatedAudienceDataModel;
  NSArray *_previousAudienceDataModelList;
  IGPromoteCreateAndEditAudienceFlowManager *_createAndEditAudienceFlowManager;
  IGPromoteDataStore *_promoteDataStore;
  NSString *_selectedAudienceId;
  BOOL _isCustomAudienceSelected;
  IGBottomButtonsView *_bottomButtonView;
  BOOL _isFetching;
  BOOL _isDeleting;
}

@property (weak, nonatomic) NSObject<IGBoostAudiencePastAudiencesViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session promoteDataStore:(id)store createAndEditAudienceFlowManager:(id)manager logger:(id)logger;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_onCancelBarButtonTapped;
- (void)_onBackBarButtonTapped;
- (void)promoteRadioButtonListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapTitleAppendedTextWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapDeleteButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapEditButtonWithViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller didTapURL:(id)url withViewModel:(id)model;
- (void)promoteRadioButtonListSectionController:(id)controller maybeShowTitleAppendedTextTooltipOnCell:(id)cell withPoint:(struct CGPoint { double x0; double x1; })point;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapCellTitleWithViewModel:(id)model;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapSubtitleLink:(id)link;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapTitleLinkWithViewModel:(id)model;
@end

#endif /* IGBoostAudiencePastAudiencesViewController_h */