//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21IGSundialAchievements31IGSundialAchievementsDetailView_h
#define _TtC21IGSundialAchievements31IGSundialAchievementsDetailView_h
@import Foundation;

#include "IGBaseView.h"

@interface _TtC21IGSundialAchievements31IGSundialAchievementsDetailView : IGBaseView { // (Swift)
  /* instance variables */
   delegate;
   userSession;
   achievement;
   config;
   entryPoint;
   shouldDisplayProgressCellView;
   confettiAnimationController;
   progressCellViews;
   $__lazy_storage_$_imageView;
   $__lazy_storage_$_animatedImageView;
   $__lazy_storage_$_mediaImageView;
   $__lazy_storage_$_titleLabel;
   $__lazy_storage_$_subtitleLabel;
   $__lazy_storage_$_descriptionLabel;
   tipView;
   $__lazy_storage_$_bottomButtonsView;
   loopCount;
}

/* instance methods */
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapImageView:(id)view;
- (void)didTapMediaImageView:(id)view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC21IGSundialAchievements31IGSundialAchievementsDetailView_h */
