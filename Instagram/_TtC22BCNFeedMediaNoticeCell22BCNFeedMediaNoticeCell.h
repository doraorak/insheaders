//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22BCNFeedMediaNoticeCell22BCNFeedMediaNoticeCell_h
#define _TtC22BCNFeedMediaNoticeCell22BCNFeedMediaNoticeCell_h
@import Foundation;

#include "_TtC15BCNFeedBaseCell15BCNFeedBaseCell.h"

@interface _TtC22BCNFeedMediaNoticeCell22BCNFeedMediaNoticeCell : _TtC15BCNFeedBaseCell15BCNFeedBaseCell { // (Swift)
  /* instance variables */
   delegate;
   kNoticeHorizontalPadding;
   kIconDiameter;
   kIconLeftPadding;
   kPaddingBetweenTextAndSubText;
   kChevronDiameter;
   kChevronRightPadding;
   mediaNotice;
   $__lazy_storage_$_containerView;
   noticeTitle;
   noticeSubtitle;
   iconView;
   chevronView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)didTapNotice:(id)notice;
- (void)didMoveToWindow;
@end

#endif /* _TtC22BCNFeedMediaNoticeCell22BCNFeedMediaNoticeCell_h */
