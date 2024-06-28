//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC33IGCreatorAICustomNegativeFeedback26CustomNegativeFeedbackView_h
#define _TtC33IGCreatorAICustomNegativeFeedback26CustomNegativeFeedbackView_h
@import Foundation;

#include "IGBaseView.h"
#include "UICollectionViewDelegate-Protocol.h"

@interface _TtC33IGCreatorAICustomNegativeFeedback26CustomNegativeFeedbackView : IGBaseView<UICollectionViewDelegate> { // (Swift)
  /* instance variables */
   onNegativeFeedbackCellSelect;
   $__lazy_storage_$_dataSource;
   $__lazy_storage_$_collectionView;
}

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC33IGCreatorAICustomNegativeFeedback26CustomNegativeFeedbackView_h */
