//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBOnDemandAutoupdaterState_h
#define FBOnDemandAutoupdaterState_h
@import Foundation;

@class NSMutableSet, NSNumber;

@interface FBOnDemandAutoupdaterState : NSObject {
  /* instance variables */
  NSMutableSet *_subscriptions;
}

@property (readonly, nonatomic) NSNumber *nativeBuildNumber;
@property (readonly, nonatomic) NSNumber *activeBuildNumber;
@property (readonly, nonatomic) NSNumber *otaBuildNumber;

/* instance methods */
- (id)init;
- (void)didProcessUpdate;
@end

#endif /* FBOnDemandAutoupdaterState_h */
