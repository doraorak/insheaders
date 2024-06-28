//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FoATextKitDecoration_h
#define FoATextKitDecoration_h
@import Foundation;

@class UIFont;

@interface FoATextKitDecoration : NSObject {
  /* instance variables */
  struct CGSize { double width; double height; } _size;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _margin;
  unsigned long long _align;
  UIFont *_alignToFont;
  id _model;
  undefined * _modelToViewFunc;
}

/* instance methods */
- (id)initWithSize:(struct CGSize { double x0; double x1; })size margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margin align:(unsigned long long)align alignToFont:(id)font model:(id)model;
@end

#endif /* FoATextKitDecoration_h */