//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGKragleVideoSubscriptionsController_h
#define IGKragleVideoSubscriptionsController_h
@import Foundation;

@class NSMutableSet;

@interface IGKragleVideoSubscriptionsController : NSObject {
  /* instance variables */
  struct __RSVideoSubscriptionsProxy * _videoSubscriptionsProxy;
  struct __RSVideoSubscriptionsApi * _videoSubscriptionsApi;
  BOOL _dominantIncludeSelf;
  NSMutableSet *_currentlySubscribedParticipants;
}

/* instance methods */
- (id)initWithLauncherSet:(id)set;
- (void)dealloc;
@end

#endif /* IGKragleVideoSubscriptionsController_h */