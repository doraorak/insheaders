//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC31IGDirectDailyPromptsConsumption23IGDirectDailyPromptCell_h
#define _TtC31IGDirectDailyPromptsConsumption23IGDirectDailyPromptCell_h
@import Foundation;

#include "IGBaseCollectionViewCell.h"
#include "IGListBindable-Protocol.h"

@interface _TtC31IGDirectDailyPromptsConsumption23IGDirectDailyPromptCell : IGBaseCollectionViewCell<IGListBindable> { // (Swift)
  /* instance variables */
   viewModel;
   delegate;
   $__lazy_storage_$_cardView;
   $__lazy_storage_$_upvotePill;
   $__lazy_storage_$_replyPill;
   $__lazy_storage_$_pillMaskView;
   $__lazy_storage_$_maskedContainerViewForCardAndPills;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)bindViewModel:(id)model;
@end

#endif /* _TtC31IGDirectDailyPromptsConsumption23IGDirectDailyPromptCell_h */