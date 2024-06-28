//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTabBarControllerType_Protocol_h
#define IGTabBarControllerType_Protocol_h
@import Foundation;

@protocol IGTabBarControllerType <IGBaseTabBarControllerType>
/* instance methods */
- (id)feedViewController;
- (void)setSelectedTabBarSurface:(id)surface animated:(BOOL)animated;
- (id)selectedTabBarSurface;
- (id)buttonForTabBarSurface:(id)surface;
- (id)buttonForTabBarSurface:(id)surface;
- (void)setNeedsAttention:(BOOL)attention forSurface:(id)surface;
- (void)popAllNonVisibleNavigationControllersToRoot;
- (void)hideToastsAnimated:(BOOL)animated;
- (void)hideToastsAnimated:(BOOL)animated;
- (void)moveDownTabBarToOffset:(double)offset;
- (void)moveDownTabBarToOffset:(double)offset;
- (void)setBarButtonAlpha:(double)alpha;
- (BOOL)isDefaultState;
- (void)resetToDefaultState;
- (BOOL)containsSurface:(id)surface;
- (long long)tabBarAppearance;
- (void)setTabBarAppearance:(long long)appearance;
- (void)setButtonDimmingEnabled:(BOOL)enabled;
- (void)tabBarControllerTypeConformanceTag;
- (void)setTabBarDividerLineVisible:(BOOL)visible;
@end

#endif /* IGTabBarControllerType_Protocol_h */