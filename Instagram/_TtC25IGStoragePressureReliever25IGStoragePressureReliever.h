//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGStoragePressureReliever25IGStoragePressureReliever_h
#define _TtC25IGStoragePressureReliever25IGStoragePressureReliever_h
@import Foundation;

@interface _TtC25IGStoragePressureReliever25IGStoragePressureReliever : NSObject { // (Swift)
  /* instance variables */
   sources;
   backgroundStateManager;
   evictables;
   timer;
}

/* class methods */
+ (double)availableMegabytes;

/* instance methods */
- (void)dealloc;
- (void)stopContiniousCheckingForOwner:(id)owner;
- (void)startContiniousCheckingForOwner:(id)owner neededMbs:(double)mbs;
- (id)init;
@end

#endif /* _TtC25IGStoragePressureReliever25IGStoragePressureReliever_h */
