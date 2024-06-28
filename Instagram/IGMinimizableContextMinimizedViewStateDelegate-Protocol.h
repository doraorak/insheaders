//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMinimizableContextMinimizedViewStateDelegate_Protocol_h
#define IGMinimizableContextMinimizedViewStateDelegate_Protocol_h
@import Foundation;

@protocol IGMinimizableContextMinimizedViewStateDelegate <NSObject>
/* instance methods */
- (BOOL)shouldSupportMinimizedViewExpandedState;
- (struct CGSize { double x0; double x1; })preferredContentSizeForMinimizedViewState:(unsigned long long)state;
- (struct CGSize { double x0; double x1; })preferredContentSizeForMinimizedViewState:(unsigned long long)state;
- (void)minimizedViewTappedForState:(unsigned long long)state;
- (void)minimizedViewTappedForState:(unsigned long long)state;
- (void)customizeMinimizedViewAnimationStartPropertiesForState:(unsigned long long)state;
- (void)customizeMinimizedViewAnimationStartPropertiesForState:(unsigned long long)state;
- (void)customizeMinimizedViewAnimationEndPropertiesForState:(unsigned long long)state;
- (void)customizeMinimizedViewAnimationEndPropertiesForState:(unsigned long long)state;
- (void)customizeMinimizedViewAnimationCancelledPropertiesForState:(unsigned long long)state;
- (void)customizeMinimizedViewAnimationCancelledPropertiesForState:(unsigned long long)state;
- (void)minimizedViewSwipedToDismiss;
@end

#endif /* IGMinimizableContextMinimizedViewStateDelegate_Protocol_h */