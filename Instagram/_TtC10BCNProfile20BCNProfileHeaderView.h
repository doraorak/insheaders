//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC10BCNProfile20BCNProfileHeaderView_h
#define _TtC10BCNProfile20BCNProfileHeaderView_h
@import Foundation;

#include "IGPassthroughView.h"

@interface _TtC10BCNProfile20BCNProfileHeaderView : IGPassthroughView { // (Swift)
  /* instance variables */
   showProfileChain;
   profileChainView;
   delegate;
   followRequestBannerDelegate;
   accountSwitcherEntryPoint;
   $__lazy_storage_$_accountSwitcherEntryPointView;
   followRequestBanner;
   profilePictureView;
   customProfilePictureView;
   $__lazy_storage_$_usernameDomainPillButton;
   fullNameLabel;
   pronounsLabel;
   internalLabel;
   usernameLabel;
   eventBadge;
   statusBadge;
   internalBadgeView;
   $__lazy_storage_$_bioTextView;
   $__lazy_storage_$_followersAndLinkView;
   transparencyLabel;
   actionBarView;
   similarUsersIsLoading;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)onDomainButtonTap:(id)tap;
- (void)onCustomProfilePictureViewTap;
- (void)openTransparencyBottomSheet;
- (void)handleFullNameTap;
@end

#endif /* _TtC10BCNProfile20BCNProfileHeaderView_h */
