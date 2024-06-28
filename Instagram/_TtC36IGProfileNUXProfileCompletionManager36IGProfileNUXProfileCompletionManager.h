//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC36IGProfileNUXProfileCompletionManager36IGProfileNUXProfileCompletionManager_h
#define _TtC36IGProfileNUXProfileCompletionManager36IGProfileNUXProfileCompletionManager_h
@import Foundation;

@interface _TtC36IGProfileNUXProfileCompletionManager36IGProfileNUXProfileCompletionManager : NSObject { // (Swift)
  /* instance variables */
   presentingViewController;
   userSession;
   headerLogger;
}

/* instance methods */
- (id)initWithUserSession:(id)session headerLogger:(id)logger presentingViewController:(id)controller;
- (void)presentProfileCompletionViewController;
- (id)init;
@end

#endif /* _TtC36IGProfileNUXProfileCompletionManager36IGProfileNUXProfileCompletionManager_h */
