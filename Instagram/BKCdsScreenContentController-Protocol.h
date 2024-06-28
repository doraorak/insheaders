//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKCdsScreenContentController_Protocol_h
#define BKCdsScreenContentController_Protocol_h
@import Foundation;

@protocol BKCdsScreenContentController <NSObject>

@property (nonatomic, readonly) NSString *appID;
@property (nonatomic, readonly) NSString *screenID;
@property (nonatomic, readonly) BKObjectSet *screenObjectSet;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic, readonly) BOOL needsTopSafeAreaPadding;
@property (nonatomic, readonly) double bottomPadding;
@property (nonatomic) double headerHeight;
@property (nonatomic, readonly) BOOL isBackSwipeDisabled;
@property (nonatomic, readonly) BOOL isLimitedTheme;
@property (nonatomic) BOOL isFlexibleHeight;
@property (nonatomic, weak) NSObject<BKCdsScreenContentControllerDelegate> *contentDelegate;

/* instance methods */
- (id)analyticsModule;
- (id)analyticsModuleClassOverride;
- (id)analyticsExtras;
@end

#endif /* BKCdsScreenContentController_Protocol_h */
