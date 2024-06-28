//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLogoutViewControllerLogger_h
#define IGLogoutViewControllerLogger_h
@import Foundation;

@class IGUserSession, NSString;

@interface IGLogoutViewControllerLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
}

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
@end

#endif /* IGLogoutViewControllerLogger_h */
