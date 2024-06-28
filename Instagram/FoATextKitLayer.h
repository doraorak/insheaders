//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FoATextKitLayer_h
#define FoATextKitLayer_h
@import Foundation;

#include "CALayer.h"
#include "FoATextKitContext.h"

@class UIColor, UITraitCollection;

@interface FoATextKitLayer : CALayer {
  /* instance variables */
  FoATextKitContext *_ctx;
  UITraitCollection *_traitCollection;
  struct _NSRange { unsigned long long location; unsigned long long length; } _highlightedRange;
  UIColor *_highlightColor;
  double _highlightCornerRadius;
}

/* instance methods */
- (id)init;
- (void)setLinksHighlightColor:(id)color cornerRadius:(double)radius;
- (void)drawInContext:(struct CGContext *)context;
- (void)setHighlightedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
@end

#endif /* FoATextKitLayer_h */
