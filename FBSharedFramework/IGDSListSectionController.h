//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDSListSectionController_h
#define IGDSListSectionController_h
@import Foundation;

#include "IGListBindingSectionController.h"
#include "IGDSListCellCollectionViewCell.h"
#include "IGDSListCellViewLinkDelegate-Protocol.h"
#include "IGDSListCellViewSwitchDelegate-Protocol.h"
#include "IGDSListSectionControllerDataSource-Protocol.h"
#include "IGDSListSectionControllerDelegate-Protocol.h"
#include "IGDSSectionFooterViewDelegate-Protocol.h"
#include "IGDSSectionHeaderViewDelegate-Protocol.h"
#include "IGListBindingSectionControllerDataSource-Protocol.h"
#include "IGListBindingSectionControllerSelectionDelegate-Protocol.h"
#include "IGListSupplementaryViewSource-Protocol.h"

@class NSString;
@protocol IGDSListSectionControllerDatePickerDelegate, IGDSListSectionControllerPillsBarDelegate;

@interface IGDSListSectionController : IGListBindingSectionController<IGDSListCellViewSwitchDelegate, IGDSListCellViewLinkDelegate, IGListSupplementaryViewSource, IGDSSectionHeaderViewDelegate, IGDSSectionFooterViewDelegate, IGListBindingSectionControllerDataSource, IGListBindingSectionControllerSelectionDelegate> {
  /* instance variables */
  IGDSListCellCollectionViewCell *_sizingCell;
  NSObject<IGDSListSectionControllerDataSource> *_listDataSource;
  NSObject<IGDSListSectionControllerDatePickerDelegate> *_datePickerDelegate;
  NSObject<IGDSListSectionControllerPillsBarDelegate> *_pillsBarDelegate;
}

@property (weak, nonatomic) NSObject<IGDSListSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)shouldSelectItemAtIndex:(long long)index;
- (BOOL)shouldDeselectItemAtIndex:(long long)index;
- (void)sectionController:(id)controller didSelectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didDeselectItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didHighlightItemAtIndex:(long long)index viewModel:(id)model;
- (void)sectionController:(id)controller didUnhighlightItemAtIndex:(long long)index viewModel:(id)model;
- (id)sectionController:(id)controller viewModelsForObject:(id)object;
- (id)sectionController:(id)controller cellForViewModel:(id)model atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sectionController:(id)controller sizeForViewModel:(id)model atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)kind atIndex:(long long)index;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)kind atIndex:(long long)index;
- (void)switchValueDidChange:(id)change;
- (void)textCell:(id)cell didTapLinkWithText:(id)text url:(id)url;
- (void)textCell:(id)cell didTapToOpenDatePicker:(id)picker;
- (void)textCell:(id)cell didDateValueChangedOnDatePicker:(id)picker;
- (void)textCell:(id)cell didDismissDropdownOnDatePicker:(id)picker;
- (void)textCell:(id)cell pillsBar:(id)bar didTapPillAtIndex:(long long)index selected:(BOOL)selected;
- (void)sectionHeaderDidTapButton:(id)button;
- (void)sectionFooterView:(id)view didTapLinkWithText:(id)text url:(id)url;
@end

#endif /* IGDSListSectionController_h */