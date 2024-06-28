//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialMediaCompositionEditingViewControlling_Protocol_h
#define IGSundialMediaCompositionEditingViewControlling_Protocol_h
@import Foundation;

@protocol IGSundialMediaCompositionEditingViewControlling <IGStoryPostCaptureEditingViewControllerType>

@property (retain, nonatomic) IGSundialComposition *composition;
@property (readonly, nonatomic) IGViewController<IGStoryMediaCompositionEditingViewControlling> *mediaEditor;
@property (nonatomic) double timelineEditorPresentationProgress;
@property (readonly, nonatomic) IGSundialVideoClip *stitchedPostCaptureVideo;
@property (nonatomic) BOOL shouldPlayMediaOnAppear;
@property (weak, nonatomic) _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController *stackedTimelineVC;
@property (weak, nonatomic) NSObject<IGSundialMediaCompositionEditingViewControllerDelegate> *compositionEditingDelegate;
@property (nonatomic) BOOL wasFirstFrameRendered;
@property (readonly, nonatomic) BOOL isInStackedTimelineFullscreenEditMode;
@property (readonly, nonatomic) IGPostCaptureARController *postcaptureAREffectController;
@property (nonatomic) BOOL shouldUpdateTimelineOnCompositionChange;

/* instance methods */
- (void)play;
- (void)pause;
- (void)setEffectTarget:(id)target;
- (void)exitTimelineEditorWithAnimation:(BOOL)animation completion:(id /* block */)completion;
- (void)showTimeSrubberForTime:(double)time;
- (void)pauseDueToScrubDuringPlayback;
- (void)cleanUpTextAnimatedStickers;
- (BOOL)presentClipsTrimmedNuxTooltipIfNeeded;
- (void)logTimelineMetadata;
- (void)logTextStylesMetadata;
- (void)updateHDRComposition;
@end

#endif /* IGSundialMediaCompositionEditingViewControlling_Protocol_h */