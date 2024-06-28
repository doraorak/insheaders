//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteHECBottomSheetViewController_h
#define IGPromoteHECBottomSheetViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGGestureHandler-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromoteHECBottomSheetViewModel.h"
#include "IGPromoteMessageViewModel.h"
#include "IGPromoteTitleSubtitleViewModel.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, IGUserSession, NSArray, NSMutableSet, NSSet, NSString, UICollectionView;
@protocol IGPromoteHECBottomSheetViewControllerDelegate;

@interface IGPromoteHECBottomSheetViewController : IGPromoteViewController<IGListAdapterDataSource, UICollectionViewDelegate, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_session;
  IGBoostPostLogger *_logger;
  IGPromoteHECBottomSheetViewModel *_hecBottomSheetViewModel;
  UICollectionView *_collectionView;
  IGListAdapter *_adapter;
  NSSet *_regulatedCategories;
  long long _selectedRegulatedCategory;
  NSMutableSet *_selectedRegulatedCategories;
  BOOL _isSIEPRegulatedCategoryDisabled;
  BOOL _isCreditRegulatedCateroryDisabled;
  BOOL _isEmploymentRegulatedCateroryDisabled;
  BOOL _isHousingRegulatedCateroryDisabled;
  BOOL _shouldAllowSIEPSelfIdentification;
  BOOL _isSelectedFormViolatingHECPolicy;
  NSString *_hecDescriptionString;
  NSArray *_radioButtonViewModels;
  NSArray *_checkmarkViewModels;
  IGPromoteMessageViewModel *_siepRestrictedMessageViewModel;
}

@property (copy, nonatomic) IGPromoteTitleSubtitleViewModel *titleViewModel;
@property (weak, nonatomic) NSObject<IGPromoteHECBottomSheetViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session selectedRegulatedCategory:(long long)category logger:(id)logger isSelectedFormViolatingHECPolicy:(BOOL)hecpolicy;
- (id)initWithSession:(id)session regulatedCategories:(id)categories selectedRegulatedCategories:(id)categories hecBottomSheetViewModel:(id)model logger:(id)logger isSelectedFormViolatingHECPolicy:(BOOL)hecpolicy;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_didTapDoneButton;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)promoteCheckMarkSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteCheckMarkSectionController:(id)controller didTapCheckMarkWithViewModel:(id)model;
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
- (void)promoteMessageViewSectionControllerDidTapIconImage:(id)image withViewModel:(id)model;
- (void)promoteMessageViewSectionController:(id)controller didTapSubtitleLink:(id)link withViewModel:(id)model;
- (void)promoteMessageViewSectionControllerDidTapTitle:(id)title withViewModel:(id)model;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGPromoteHECBottomSheetViewController_h */
