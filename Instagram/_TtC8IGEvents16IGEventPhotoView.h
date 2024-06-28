//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC8IGEvents16IGEventPhotoView_h
#define _TtC8IGEvents16IGEventPhotoView_h
@import Foundation;

#include "IGBaseView.h"

@interface _TtC8IGEvents16IGEventPhotoView : IGBaseView { // (Swift)
  /* instance variables */
   delegate;
   isReadOnly;
   eventPhotoType;
   photoImageView;
   containerView;
   $__lazy_storage_$_editButtonImageView;
}

/* instance methods */
- (void)layoutSubviews;
- (void)didTapEventPhoto;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC8IGEvents16IGEventPhotoView_h */
