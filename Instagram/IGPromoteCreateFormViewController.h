//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteCreateFormViewController_h
#define IGPromoteCreateFormViewController_h
@import Foundation;

#include "IGPromoteViewController.h"
#include "IGBoostPostLogger.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGPromoteDataStore.h"
#include "IGPromoteLeadGenTextFieldViewModel.h"
#include "IGPromoteTitleSubtitleViewModel.h"
#include "UICollectionViewDelegate-Protocol.h"

@class IGDSHeadlineViewModel, IGListAdapter, IGUserSession, NSMutableArray, NSMutableSet, NSString, UICollectionView;
@protocol IGPromoteLeadGenCreateFormViewControllerDelegate;

@interface IGPromoteCreateFormViewController : IGPromoteViewController<IGListAdapterDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGUserSession *_session;
  UICollectionView *_contentView;
  IGListAdapter *_adapter;
  IGPromoteDataStore *_dataStore;
  IGBoostPostLogger *_logger;
  NSMutableSet *_selectedFormQuestions;
  NSMutableArray *_customQuestions;
  IGDSHeadlineViewModel *_headlineViewModel;
  IGPromoteLeadGenTextFieldViewModel *_formNameTextInputViewModel;
  IGPromoteTitleSubtitleViewModel *_customQuestionsTitleSubtitleViewModel;
  IGPromoteTitleSubtitleViewModel *_addQuestionViewModel;
  NSMutableArray *_presetQuestionsViewModels;
  IGPromoteDataStore *_localDataStore;
}

@property (weak, nonatomic) NSObject<IGPromoteLeadGenCreateFormViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session dataStore:(id)store logger:(id)logger;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)_onBackBarButtonTapped;
- (void)_onRightBarButtonTapped;
- (void)promoteLeadGenTextFieldSectionController:(id)controller didChangeTextFieldInModel:(id)model userInput:(id)input;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapCellTitleWithViewModel:(id)model;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapSubtitleLink:(id)link;
- (void)promoteTitleSubtitleSectionController:(id)controller didTapTitleLinkWithViewModel:(id)model;
- (void)promoteCheckMarkListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteLeadGenCustomQuestionDidFinishCreatingQuestion:(id)question;
- (void)promoteLeadGenCustomQuestionDidFinishEditingQuestion:(id)question originalQuestion:(id)question;
- (void)promoteLeadGenCustomQuestionDidDeleteQuestion:(id)question;
- (void)promoteChevronListSectionController:(id)controller didTapCellWithViewModel:(id)model;
- (void)promoteChevronListSectionController:(id)controller didTapSubtitleWithViewModel:(id)model;
- (void)promoteChevronListSectionController:(id)controller didTapAccessoryForCellWithViewModel:(id)model;
- (void)promoteLeadGenPreviewFormViewControllerDidFinishCreatingForm:(id)form;
@end

#endif /* IGPromoteCreateFormViewController_h */
