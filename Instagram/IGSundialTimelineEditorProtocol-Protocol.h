//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialTimelineEditorProtocol_Protocol_h
#define IGSundialTimelineEditorProtocol_Protocol_h
@import Foundation;

@protocol IGSundialTimelineEditorProtocol <NSObject>

@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) double timelineZoomScale;
@property (retain, nonatomic) IGSundialComposition *composition;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } mediaViewVerticalMargin;

/* instance methods */
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (void)setTimePillLabel:(id)label;
- (void)setVideoScale:(double)scale;
@end

#endif /* IGSundialTimelineEditorProtocol_Protocol_h */