//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP27IGFLIGAnimationViewProvider19IGFLIGAnimatedLabel__Protocol_h
#define _TtP27IGFLIGAnimationViewProvider19IGFLIGAnimatedLabel__Protocol_h
@import Foundation;

@protocol _TtP27IGFLIGAnimationViewProvider19IGFLIGAnimatedLabel_ 

@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } extraPadding;
@property (nonatomic) double playbackTime;
@property (nonatomic) double animationDuration;
@property (nonatomic, retain) IGStoryRichTextEntryModel *richTextModel;
@property (nonatomic) BOOL isHdr;

/* instance methods */
- (id)createMediaSourceForTranscodingWithLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds layerPosition:(struct CGPoint { double x0; double x1; })position layerAnchorPoint:(struct CGPoint { double x0; double x1; })point layerTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transform extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration scale:(double)scale;
- (void)setEDRMultiplier:(double)edrmultiplier;
@end

#endif /* _TtP27IGFLIGAnimationViewProvider19IGFLIGAnimatedLabel__Protocol_h */
