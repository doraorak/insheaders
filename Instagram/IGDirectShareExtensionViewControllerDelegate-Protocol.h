//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectShareExtensionViewControllerDelegate_Protocol_h
#define IGDirectShareExtensionViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGDirectShareExtensionViewControllerDelegate <NSObject>
/* instance methods */
- (void)directShareExtensionViewControllerDidCompleteRequest:(id)request sourceApplication:(id)application;
- (void)directShareExtensionViewControllerDidCancelRequest:(id)request withError:(id)error sourceApplication:(id)application;
@end

#endif /* IGDirectShareExtensionViewControllerDelegate_Protocol_h */