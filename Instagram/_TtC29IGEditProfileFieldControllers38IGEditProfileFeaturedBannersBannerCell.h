//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29IGEditProfileFieldControllers38IGEditProfileFeaturedBannersBannerCell_h
#define _TtC29IGEditProfileFieldControllers38IGEditProfileFeaturedBannersBannerCell_h
@import Foundation;

#include "IGCollectionViewCell.h"

@interface _TtC29IGEditProfileFieldControllers38IGEditProfileFeaturedBannersBannerCell : IGCollectionViewCell { // (Swift)
  /* instance variables */
   $__lazy_storage_$_leftIcon;
   $__lazy_storage_$_bannerCell;
   $__lazy_storage_$_rightIcon;
   $__lazy_storage_$_stackLayout;
   _isDragging;
   delegate;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didLongPress:(id)press;
- (void)didTapRemove:(id)remove;
- (void)didTapAdd:(id)add;
@end

#endif /* _TtC29IGEditProfileFieldControllers38IGEditProfileFeaturedBannersBannerCell_h */
