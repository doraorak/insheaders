//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20BCNOnboardingSession20BCNOnboardingSession_h
#define _TtC20BCNOnboardingSession20BCNOnboardingSession_h
@import Foundation;

@interface _TtC20BCNOnboardingSession20BCNOnboardingSession : NSObject { // (Swift)
  /* instance variables */
   userSession;
   isInEu;
   completionHandler;
}

/* instance methods */
- (id)initWithUserSession:(id)session isInEu:(BOOL)eu completionHandler:(id /* block */)handler;
- (id)init;
@end

#endif /* _TtC20BCNOnboardingSession20BCNOnboardingSession_h */
