//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC35IGSundialStackedTimelineSharedUIKit28IGSundialStackedTimelineView_IGSundialStackedTimelineSharedUIKit_h
#define _TtC35IGSundialStackedTimelineSharedUIKit28IGSundialStackedTimelineView_IGSundialStackedTimelineSharedUIKit_h
@import Foundation;

@interface _TtC35IGSundialStackedTimelineSharedUIKit28IGSundialStackedTimelineView (IGSundialStackedTimelineSharedUIKit) <IGSundialTimelineDelegate>
/* instance methods */
- (void)videoTimeline:(id)timeline didLongPressClipAtIndex:(long long)index;
- (void)videoTimelineDidBeginScrubbing:(id)scrubbing;
- (void)videoTimelineDidEndScrubbing:(id)scrubbing;
- (void)videoTimeline:(id)timeline didScrubToTime:(double)time;
- (void)videoTimelineDidBeginZooming:(id)zooming;
- (void)videoTimelineDidEndZooming:(id)zooming changeInZoomScale:(double)scale;
- (void)videoTimeline:(id)timeline didZoomToPointsPerSecond:(double)second;
- (void)videoTimeline:(id)timeline mightBeginAdjustingAmountTrimmedFromStartOfVideoClipAtIndex:(long long)index;
- (void)videoTimeline:(id)timeline mightBeginAdjustingAmountTrimmedFromEndOfVideoClipAtIndex:(long long)index;
- (void)videoTimeline:(id)timeline didBeginAdjustingAmountTrimmedFromStartOfVideoClipAtIndex:(long long)index;
- (void)videoTimeline:(id)timeline didBeginAdjustingAmountTrimmedFromEndOfVideoClipAtIndex:(long long)index;
- (void)videoTimeline:(id)timeline didAdjustAmountTrimmedFromStart:(double)start OfVideoClipAtIndex:(long long)index;
- (void)videoTimeline:(id)timeline didAdjustAmountTrimmedFromEnd:(double)end OfVideoClipAtIndex:(long long)index;
- (void)videoTimeline:(id)timeline didAdjustAmountTrimmedFromStart:(double)start amountTrimmedFromEnd:(double)end OfVideoClipAtIndex:(long long)index;
- (struct CGPoint { double x0; double x1; })videoTimeline:(id)timeline deltaAdjustmentFor:(struct CGPoint { double x0; double x1; })for whenTrimmingVideoClipAt:(long long)at dragHandle:(long long)handle;
- (void)videoTimelineDidEndTrimming:(id)trimming trimType:(long long)type;
- (void)videoTimelineDidCancelTrimming:(id)trimming;
- (void)videoTimeline:(id)timeline didUpdateCurrentPlaybackTime:(double)time;
- (void)videoTimeline:(id)timeline didTapClipAtIndex:(long long)index;
- (BOOL)videoTimeline:(id)timeline gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)videoTimelineDidTapEmptySpace:(id)space;
@end

#endif /* _TtC35IGSundialStackedTimelineSharedUIKit28IGSundialStackedTimelineView_IGSundialStackedTimelineSharedUIKit_h */
