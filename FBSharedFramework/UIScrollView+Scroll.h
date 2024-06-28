//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIScrollView_Scroll_h
#define UIScrollView_Scroll_h
@import Foundation;

@interface UIScrollView (Scroll)
/* instance methods */
- (double)contentOffsetY;
- (double)contentOffsetX;
- (void)setContentOffsetY:(double)y;
- (void)setContentOffsetX:(double)x;
- (void)setContentOffsetY:(double)y animated:(BOOL)animated;
- (void)setContentOffsetX:(double)x animated:(BOOL)animated;
- (double)minContentOffsetY;
- (double)minContentOffsetX;
- (double)maxContentOffsetY;
- (double)maxContentOffsetX;
- (double)contentOffsetYForDesiredOffset:(double)offset;
- (double)contentOffsetXForDesiredOffset:(double)offset;
- (void)scrollToTopAnimated:(BOOL)animated;
- (void)scrollToBottomAnimated:(BOOL)animated;
- (void)ig_setContentOffsetWithoutTriggeringDelegate:(struct CGPoint { double x0; double x1; })delegate;
@end

#endif /* UIScrollView_Scroll_h */