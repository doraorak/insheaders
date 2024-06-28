//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC8IGEvents25IGEventCollectionViewCell_h
#define _TtC8IGEvents25IGEventCollectionViewCell_h
@import Foundation;

#include "IGBaseCollectionViewCell.h"

@interface _TtC8IGEvents25IGEventCollectionViewCell : IGBaseCollectionViewCell { // (Swift)
  /* instance variables */
   viewModel;
   delegate;
   titleTextView;
   chevronView;
   iconImageView;
   $__lazy_storage_$_clearButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)didTapClearButton;
- (id)preferredLayoutAttributesFittingAttributes:(id)attributes;
@end

#endif /* _TtC8IGEvents25IGEventCollectionViewCell_h */
