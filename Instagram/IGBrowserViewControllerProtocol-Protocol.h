//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrowserViewControllerProtocol_Protocol_h
#define IGBrowserViewControllerProtocol_Protocol_h
@import Foundation;

@protocol IGBrowserViewControllerProtocol <NSObject>

@property (readonly, nonatomic) IGBrowserSession *browserSession;
@property (readonly, nonatomic) UIViewController *browserViewControllerForPush;
@property (nonatomic) BOOL fullscreenExperienceEnabled;

/* instance methods */
- (BOOL)isFullscreenExperienceEnabled;
@end

#endif /* IGBrowserViewControllerProtocol_Protocol_h */
