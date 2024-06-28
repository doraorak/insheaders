//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGCommentBannerView25IGCommentsBannerPresenter_h
#define _TtC19IGCommentBannerView25IGCommentsBannerPresenter_h
@import Foundation;

#include "_TtP19IGCommentBannerView33IGCommentsBannerPresenterDelegate_-Protocol.h"

@class UIView;

@interface _TtC19IGCommentBannerView25IGCommentsBannerPresenter : NSObject { // (Swift)
  /* instance variables */
   $__lazy_storage_$_bannerView;
   isDisplaying;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) UIView *ctaView;
@property (nonatomic, weak) NSObject<_TtP19IGCommentBannerView33IGCommentsBannerPresenterDelegate_> *delegate;

/* instance methods */
- (id)initWithType:(long long)type;
- (id)init;
- (void)displayInViewController:(id)controller inScrollView:(id)view belowView:(id)view;
@end

#endif /* _TtC19IGCommentBannerView25IGCommentsBannerPresenter_h */
