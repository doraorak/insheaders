//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenMultipleChoiceQuestionOptionCell_h
#define IGLeadGenMultipleChoiceQuestionOptionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGLeadGenMultipleChoiceQuestionOptionViewModel.h"

@class IGMedia, IGUserSession, UIButton;
@protocol IGLeadGenMultipleChoiceQuestionOptionCellDelegate;

@interface IGLeadGenMultipleChoiceQuestionOptionCell : UICollectionViewCell {
  /* instance variables */
  IGLeadGenMultipleChoiceQuestionOptionViewModel *_multipleChoiceOption;
  UIButton *_optionButton;
  IGUserSession *_session;
  IGMedia *_media;
}

@property (weak, nonatomic) NSObject<IGLeadGenMultipleChoiceQuestionOptionCellDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_didTapOption;
@end

#endif /* IGLeadGenMultipleChoiceQuestionOptionCell_h */
