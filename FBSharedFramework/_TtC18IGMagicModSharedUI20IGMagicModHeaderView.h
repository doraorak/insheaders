//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGMagicModSharedUI20IGMagicModHeaderView_h
#define _TtC18IGMagicModSharedUI20IGMagicModHeaderView_h
@import Foundation;

#include "IGPassthroughView.h"

@interface _TtC18IGMagicModSharedUI20IGMagicModHeaderView : IGPassthroughView { // (Swift)
  /* instance variables */
   actionProvider;
   delegate;
   midSupplementView;
   $__lazy_storage_$_nextButton;
   $__lazy_storage_$_leftBarButton;
   $__lazy_storage_$_moreButton;
   $__lazy_storage_$_crossButton;
   $__lazy_storage_$_titleLabel;
   $__lazy_storage_$_subtitleLabel;
   leftBarButtonType;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didTapOnleftBarButton:(id)button;
- (void)didTapOnNextButton:(id)button;
- (void)didTapOnCrossButton:(id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC18IGMagicModSharedUI20IGMagicModHeaderView_h */