//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC6BCNBio20BCNBioEventBadgeCell_h
#define _TtC6BCNBio20BCNBioEventBadgeCell_h
@import Foundation;

#include "_TtC6BCNBio21BCNBioProfileBaseCell.h"

@interface _TtC6BCNBio20BCNBioEventBadgeCell : _TtC6BCNBio21BCNBioProfileBaseCell { // (Swift)
  /* instance variables */
   userSessionProvider;
   $__lazy_storage_$_switchView;
   switchValueChangeHandler;
   dateFormatter;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* _TtC6BCNBio20BCNBioEventBadgeCell_h */
