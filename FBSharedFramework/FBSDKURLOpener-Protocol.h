//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKURLOpener_Protocol_h
#define FBSDKURLOpener_Protocol_h
@import Foundation;

@protocol FBSDKURLOpener 
/* instance methods */
- (void)openURL:(id)url sender:(id)sender handler:(id /* block */)handler;
- (void)openURLWithSafariViewController:(id)controller sender:(id)sender fromViewController:(id)controller handler:(id /* block */)handler;
@end

#endif /* FBSDKURLOpener_Protocol_h */