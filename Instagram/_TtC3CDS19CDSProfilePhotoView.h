//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC3CDS19CDSProfilePhotoView_h
#define _TtC3CDS19CDSProfilePhotoView_h
@import Foundation;

#include "UIView.h"

@interface _TtC3CDS19CDSProfilePhotoView : UIView { // (Swift)
  /* instance variables */
   themeConfigResolver;
   imageView;
   control;
   size;
   style;
   photoBackgroundColor;
   didTap;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapHandle;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)accessibilityActivate;
@end

#endif /* _TtC3CDS19CDSProfilePhotoView_h */
