//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrandLiftSurveyAnswerListCell_h
#define IGBrandLiftSurveyAnswerListCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IGGenericSurveyQuestion, IGTextButton, NSMutableSet, NSString, UICollectionView;
@protocol IGBrandLiftSurveyAnswerListCellDelegate;

@interface IGBrandLiftSurveyAnswerListCell : UICollectionViewCell<UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate> {
  /* instance variables */
  IGGenericSurveyQuestion *_question;
  UICollectionView *_collectionView;
  IGTextButton *_submitButton;
  BOOL _allowInput;
  NSMutableSet *_indexPathsForExclusiveOptions;
}

@property (weak, nonatomic) NSObject<IGBrandLiftSurveyAnswerListCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)path;
- (void)_didSubmitAnswers;
@end

#endif /* IGBrandLiftSurveyAnswerListCell_h */