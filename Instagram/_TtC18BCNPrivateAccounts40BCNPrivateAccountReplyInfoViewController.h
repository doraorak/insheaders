//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18BCNPrivateAccounts40BCNPrivateAccountReplyInfoViewController_h
#define _TtC18BCNPrivateAccounts40BCNPrivateAccountReplyInfoViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC18BCNPrivateAccounts40BCNPrivateAccountReplyInfoViewController : IGViewController { // (Swift)
  /* instance variables */
   isPrivate;
   userSession;
   replyInfoType;
   replyToUser;
   replyToMediaId;
   doneCompletionHandler;
   userDidTakeAction;
   shouldDefaultToPrivate;
   $__lazy_storage_$_headerView;
   $__lazy_storage_$_publicProfileButton;
   $__lazy_storage_$_privateProfileButton;
   $__lazy_storage_$_bottomButtonView;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } preferredContentInsets;

/* instance methods */
- (BOOL)prefersNavigationBarHidden;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)didTapPublicProfile;
- (void)didTapPrivateProfile;
- (void)didTapCancel;
- (void)didTapDone;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC18BCNPrivateAccounts40BCNPrivateAccountReplyInfoViewController_h */