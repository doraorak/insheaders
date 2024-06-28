//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIView_Screenshot_h
#define UIView_Screenshot_h
@import Foundation;

@interface UIView (Screenshot)
/* instance methods */
- (id)_fb_screenshotImageOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect opaque:(BOOL)opaque renderMethod:(unsigned long long)method;
- (void)_drawScreenshotImageOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inContext:(struct CGContext *)context withRenderMethod:(unsigned long long)method;
- (id)fb_screenshotImageOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect opaque:(BOOL)opaque afterScreenUpdates:(BOOL)updates;
- (id)fb_renderedScreenshotImageOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)fb_renderedScreenshotImageOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect opaque:(BOOL)opaque;
- (id)fb_associatedSnapshotViewAfterScreenUpdates:(BOOL)updates;
- (id)fb_associatedSnapshotViewAfterScreenUpdates:(BOOL)updates forceUpdate:(BOOL)update;
@end

#endif /* UIView_Screenshot_h */