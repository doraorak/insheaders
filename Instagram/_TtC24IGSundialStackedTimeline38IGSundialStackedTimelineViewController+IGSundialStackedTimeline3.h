//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController_IGSundialStackedTimeline3_h
#define _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController_IGSundialStackedTimeline3_h
@import Foundation;

@interface _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController (IGSundialStackedTimeline3) <IGCameraTrayDataSource>
/* instance methods */
- (long long)numberOfItemsInCameraTray;
- (id)cameraTrayAccessibilityLabelForItemAtIndex:(long long)index;
- (id)cameraTrayAccessibilityIdentifierForItemAtIndex:(long long)index;
- (id)cameraTrayAccessibilityHintForItemAtIndex:(long long)index;
- (id)cameraTrayImageURLForItemAtIndex:(long long)index isHighlighted:(BOOL)highlighted;
- (id /* block */)cameraTrayImageProviderForItemAtIndex:(long long)index isHighlighted:(BOOL)highlighted;
- (id)cameraTrayImageProcessorForItemAtIndex:(long long)index;
- (id)cameraCustomDialViewForItemAtIndex:(long long)index;
- (BOOL)cameraTrayItemDisabledAtIndex:(long long)index;
- (BOOL)cameraTrayItemPrivacyIncompatibleAtIndex:(long long)index;
- (BOOL)cameraTrayItemShouldUseOpaqueBackground:(long long)background;
- (BOOL)cameraTrayShouldAllowMoreInfoAccessForItemAtIndex:(long long)index;
- (double)cameraTrayImageViewContentScaleAtIndex:(long long)index;
- (double)magnifiedImageViewContentScaleAtIndex:(long long)index;
- (BOOL)cameraTrayItemIsAvatarEffectAtIndex:(long long)index;
- (id)cameraTrayItemAvatarAnimatedImageURLForItemAtIndex:(long long)index;
@end

#endif /* _TtC24IGSundialStackedTimeline38IGSundialStackedTimelineViewController_IGSundialStackedTimeline3_h */