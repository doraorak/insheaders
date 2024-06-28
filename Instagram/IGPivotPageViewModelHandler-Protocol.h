//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPivotPageViewModelHandler_Protocol_h
#define IGPivotPageViewModelHandler_Protocol_h
@import Foundation;

@protocol IGPivotPageViewModelHandler 

@property (nonatomic, readonly) BOOL shouldHideCTAButton;
@property (nonatomic, readonly) NSArray *rightBarButtonItems;

/* instance methods */
- (void)selectedWithPreview:(id)preview;
- (void)selectedWithHeader:(id)header on:(long long)on;
- (void)selectedWithHeaderButton:(id)button;
- (void)ctaButtonTapped;
- (void)configureWithNavigationController:(id)controller;
@end

#endif /* IGPivotPageViewModelHandler_Protocol_h */
