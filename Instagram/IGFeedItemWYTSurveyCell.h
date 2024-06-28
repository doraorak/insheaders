//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemWYTSurveyCell_h
#define IGFeedItemWYTSurveyCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGFeedItemWYTSurveyCellDelegate-Protocol.h"
#include "IGFeedSectionPerformUpdateListener-Protocol.h"
#include "IGFeedTheme-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGSimpleActionView.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGGenericSurveyQuestionList, IGListAdapter, IGListSectionController, IGSimpleAction, IGUserSession, NSString, UIButton, UICollectionView;

@interface IGFeedItemWYTSurveyCell : UICollectionViewCell<UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGFeedTheme> *_feedTheme;
  IGListSectionController *_sectionContext;
  IGSimpleAction *_simpleAction;
  UICollectionView *_collectionView;
  IGSimpleActionView *_simpleActionView;
  UIButton *_dismissButton;
  IGListAdapter *_listAdapter;
  IGGenericSurveyQuestionList *_genericQuestionList;
  NSObject<IGFeedSectionPerformUpdateListener> *_sectionUpdateAnnouncer;
  long long _currentIndex;
}

@property (weak, nonatomic) NSObject<IGFeedItemWYTSurveyCellDelegate> *delegate;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)layoutSubviews;
- (void)_dismissButtonDidTapped:(id)tapped;
- (void)simpleActionViewDidTapDismissButton:(id)button;
- (void)simpleActionViewDidTapStartButton:(id)button withSimpleAction:(id)action;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)genericSurveyQuestionListSectionController:(id)controller didCompleteWithSurveyResults:(id)results extraDict:(id)dict;
- (void)genericSurveyQuestionListSectionController:(id)controller didNavToQuestion:(id)question questionIndex:(long long)index;
- (void)genericSurveyQuestionListSectionController:(id)controller didReceiveSurveyResult:(id)result extraDict:(id)dict;
- (void)genericSurveyQuestionListSectionController:(id)controller willShowKeyboardWithItemHeight:(double)height;
- (void)genericSurveyQuestionListSectionControllerWillDismissKeyboard:(id)keyboard;
- (void)alertAssistantDetectErrorWithMessage:(id)message;
@end

#endif /* IGFeedItemWYTSurveyCell_h */