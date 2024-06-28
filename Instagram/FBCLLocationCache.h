//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCLLocationCache_h
#define FBCLLocationCache_h
@import Foundation;

@class CLLocation;

@interface FBCLLocationCache : NSObject {
  /* instance variables */
  struct _opaque_pthread_rwlock_t { long long __sig; char x[192] __opaque; } _rwlock;
  CLLocation *_locationNearestTenMeters;
  CLLocation *_locationHundredMeters;
  CLLocation *_locationKilometer;
  CLLocation *_locationOther;
}

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* FBCLLocationCache_h */
