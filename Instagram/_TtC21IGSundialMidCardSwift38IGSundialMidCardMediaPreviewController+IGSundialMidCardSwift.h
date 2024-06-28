//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC21IGSundialMidCardSwift38IGSundialMidCardMediaPreviewController_IGSundialMidCardSwift_h
#define _TtC21IGSundialMidCardSwift38IGSundialMidCardMediaPreviewController_IGSundialMidCardSwift_h
@import Foundation;

@interface _TtC21IGSundialMidCardSwift38IGSundialMidCardMediaPreviewController (IGSundialMidCardSwift) <_TtP21IGSundialMidCardSwift35IGSundialMidCardPreviewControllable_>
/* instance methods */
- (id)previewView;
- (id)previewComponents;
- (id)delegate;
- (void)setDelegate:(id)delegate;
- (void)setAudioEnabled:(BOOL)enabled reason:(long long)reason;
- (void)containerViewTapped:(id)tapped;
- (void)configurePreviewWithMaxWidth:(double)width;
- (void)configurePreviewWithMaxWidth:(double)width singleViewSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* _TtC21IGSundialMidCardSwift38IGSundialMidCardMediaPreviewController_IGSundialMidCardSwift_h */