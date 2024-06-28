//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteLeadGenCustomQuestionViewController_h
#define IGPromoteLeadGenCustomQuestionViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGDSPromoteTextInputViewModel.h"
#include "IGLeadGenQuestionModel.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGListAdapter, NSMutableArray, NSString, UICollectionView;
@protocol IGPromoteLeadGenCustomQuestionViewControllerDelegate;

@interface IGPromoteLeadGenCustomQuestionViewController : IGPromoteViewController<IGListAdapterDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGBoostPostLogger *_logger;
  IGLeadGenQuestionModel *_originalQuestion;
  UICollectionView *_contentView;
  IGListAdapter *_adapter;
  IGDSPromoteTextInputViewModel *_textInputViewModel;
  NSMutableArray *_multipleChoiceOptionsTextInputViewModels;
  long long _questionType;
}

@property (weak, nonatomic) NSObject<IGPromoteLeadGenCustomQuestionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogger:(id)logger question:(id)question placeholderQuestion:(id)question questionType:(long long)type;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_onBackBarButtonTapped;
- (void)_onRightBarButtonTapped;
- (void)promoteTextInputSectionController:(id)controller didChangeTextFieldInModel:(id)model userInput:(id)input;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapCellTitleWithViewModel:(id)model;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapSubtitleLink:(id)link;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapTitleLinkWithViewModel:(id)model;
@end

#endif /* IGPromoteLeadGenCustomQuestionViewController_h */
