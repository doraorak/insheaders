//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22BCNRecommendedAccounts32BCNRecommendedAccountsNavbarView_h
#define _TtC22BCNRecommendedAccounts32BCNRecommendedAccountsNavbarView_h
@import Foundation;

#include "IGBaseView.h"

@interface _TtC22BCNRecommendedAccounts32BCNRecommendedAccountsNavbarView : IGBaseView { // (Swift)
  /* instance variables */
   delegate;
   $__lazy_storage_$_grabberView;
   $__lazy_storage_$_closeButton;
   dismissType;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapCloseButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC22BCNRecommendedAccounts32BCNRecommendedAccountsNavbarView_h */
