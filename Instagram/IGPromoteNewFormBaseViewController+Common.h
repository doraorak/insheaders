//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteNewFormBaseViewController_Common_h
#define IGPromoteNewFormBaseViewController_Common_h
@import Foundation;

@interface IGPromoteNewFormBaseViewController (Common) <IGListAdapterDataSource, UICollectionViewDelegate>
/* instance methods */
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapCellTitleWithViewModel:(id)model;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapSubtitleLink:(id)link;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapTitleLinkWithViewModel:(id)model;
- (void)promoteTextInputSectionController:(id)controller didChangeTextFieldInModel:(id)model userInput:(id)input;
- (void)promoteCheckMarkListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteChevronListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteChevronListSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteChevronListSectionController:(id)controller didTapAccessoryForCellWithViewModel:(id)model;
- (void)viewController:(id)controller didFinishCreatingQuestion:(id)question;
- (void)viewController:(id)controller didFinishEditingQuestion:(id)question originalQuestion:(id)question;
- (void)viewController:(id)controller didDeleteQuestion:(id)question;
- (BOOL)viewController:(id)controller isUniqueQuestion:(id)question;
- (void)didTapOnSectionViewController:(id)controller;
- (void)advancedSettingViewController:(id)controller didUpdateNewFormName:(id)name;
- (void)promoteChevronSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteChevronSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)didTapCustomerInfoQuestionAtIndex:(long long)index;
@end

#endif /* IGPromoteNewFormBaseViewController_Common_h */