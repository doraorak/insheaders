//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGDirectLockedThreadsLogger27IGDirectLockedThreadsLogger_h
#define _TtC27IGDirectLockedThreadsLogger27IGDirectLockedThreadsLogger_h
@import Foundation;

@interface _TtC27IGDirectLockedThreadsLogger27IGDirectLockedThreadsLogger : NSObject { // (Swift)
  /* instance variables */
   logger;
   eventConfig;
}

/* instance methods */
- (id)initWithLogger:(id)logger;
- (void)logActionWithAction:(long long)action entryPoint:(long long)point;
- (id)init;
@end

#endif /* _TtC27IGDirectLockedThreadsLogger27IGDirectLockedThreadsLogger_h */
