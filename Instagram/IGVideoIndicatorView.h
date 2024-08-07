//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoIndicatorView_h
#define IGVideoIndicatorView_h
@import Foundation;

#include "UIView.h"
#include "IGVideoGlyphView.h"

@class IGSimpleButton, UIImageView, UIView;

@interface IGVideoIndicatorView : UIView {
  /* instance variables */
  UIView *_glyphView;
  IGSimpleButton *_playGlyph;
  IGSimpleButton *_pauseGlyph;
  IGSimpleButton *_errorGlyph;
  IGVideoGlyphView *_videoGlyph;
  UIImageView *_igtvGlyph;
  UIImageView *_clipsGlyph;
  long long _indicatorState;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)label;
- (void)setAccessibilityTraits:(unsigned long long)traits;
@end

#endif /* IGVideoIndicatorView_h */
