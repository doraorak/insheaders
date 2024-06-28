//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileViewControllerType_Protocol_h
#define IGProfileViewControllerType_Protocol_h
@import Foundation;

@protocol IGProfileViewControllerType <NSObject>
/* instance methods */
- (id)user;
- (id)ctaPresenterContext;
- (void)fetchAdditionalUserData;
- (id)animatableView;
- (id)customNavigationBar;
- (void)setShouldImmediatelyTransitionToOpal:(BOOL)opal;
- (id)opalFloatingButton;
- (void)tryToShowBlockSurvey;
- (BOOL)isMainProfileSurface;
- (id)storyTraySectionController;
@end

#endif /* IGProfileViewControllerType_Protocol_h */
