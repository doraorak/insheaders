//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC35IGFeedOpenCarouselCreatorExperience37IGFeedOpenCarouselPivotPageHeaderView_h
#define _TtC35IGFeedOpenCarouselCreatorExperience37IGFeedOpenCarouselPivotPageHeaderView_h
@import Foundation;

#include "IGBaseView.h"

@interface _TtC35IGFeedOpenCarouselCreatorExperience37IGFeedOpenCarouselPivotPageHeaderView : IGBaseView { // (Swift)
  /* instance variables */
   delegate;
   filterType;
   $__lazy_storage_$_promptLabel;
   $__lazy_storage_$_participantsTextView;
   ringViewSpecFactory;
   originalAuthor;
   $__lazy_storage_$_authorProfilePhotoView;
   $__lazy_storage_$_participantsTextStyle;
   viewPostButton;
   separatorLine;
   $__lazy_storage_$_filterLabel;
   $__lazy_storage_$_chevronImageView;
   $__lazy_storage_$_filterButtonView;
}

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)viewPostButtonTapped;
- (void)filterButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC35IGFeedOpenCarouselCreatorExperience37IGFeedOpenCarouselPivotPageHeaderView_h */