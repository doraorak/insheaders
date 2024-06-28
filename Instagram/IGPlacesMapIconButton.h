//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPlacesMapIconButton_h
#define IGPlacesMapIconButton_h
@import Foundation;

#include "IGBouncyButton.h"

@class UIImageView;

@interface IGPlacesMapIconButton : IGBouncyButton {
  /* instance variables */
  UIImageView *_iconImageView;
}

/* instance methods */
- (id)initWithIconImage:(id)image;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setEnabled:(BOOL)enabled;
@end

#endif /* IGPlacesMapIconButton_h */
