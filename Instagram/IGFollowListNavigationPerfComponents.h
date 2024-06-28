//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFollowListNavigationPerfComponents_h
#define IGFollowListNavigationPerfComponents_h
@import Foundation;

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGFollowListNavigationPerfComponents : NSObject {
  /* instance variables */
  IGPerformanceComponent *_usersListUpdate;
}

@property (readonly, nonatomic) IGPerformanceNavigationLogger *logger;
@property (readonly, nonatomic) IGPerformanceComponent *users;

/* instance methods */
@end

#endif /* IGFollowListNavigationPerfComponents_h */
