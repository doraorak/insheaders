//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryProfilePictureImageView_h
#define IGStoryProfilePictureImageView_h
@import Foundation;

#include "IGProfilePictureImageView.h"

@class IGTapButton;

@interface IGStoryProfilePictureImageView : IGProfilePictureImageView {
  /* instance variables */
  IGTapButton *_ownerImageExtraTapPaddingArea;
}

@property (nonatomic) double bottomPadding;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame imagePriority:(long long)priority placeholderImage:(id)image buttonDisabled:(BOOL)disabled;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
@end

#endif /* IGStoryProfilePictureImageView_h */
