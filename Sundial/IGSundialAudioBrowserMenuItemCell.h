//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAudioBrowserMenuItemCell_h
#define IGSundialAudioBrowserMenuItemCell_h
@import Foundation;

#include "IGBouncyCollectionViewCell.h"

@class IGImageView, UILabel, UIView;

@interface IGSundialAudioBrowserMenuItemCell : IGBouncyCollectionViewCell {
  /* instance variables */
  UILabel *_itemTitleLabel;
  IGImageView *_imageView;
  UIView *_containerView;
}

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setType:(long long)type;
@end

#endif /* IGSundialAudioBrowserMenuItemCell_h */