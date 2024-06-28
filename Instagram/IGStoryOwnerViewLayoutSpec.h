//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryOwnerViewLayoutSpec_h
#define IGStoryOwnerViewLayoutSpec_h
@import Foundation;

@class UIColor;

@interface IGStoryOwnerViewLayoutSpec : NSObject {
  /* instance variables */
  double _ringImagePadding;
  UIColor *_badgeViewBorderColor;
  struct CGSize { double width; double height; } _badgeViewSize;
  struct CGPoint { double x; double y; } _badgeViewOffset;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;

/* instance methods */
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })size badgeViewSize:(struct CGSize { double x0; double x1; })size badgeViewOffset:(struct CGPoint { double x0; double x1; })offset ringImagePadding:(double)padding badgeViewBorderColor:(id)color;
@end

#endif /* IGStoryOwnerViewLayoutSpec_h */