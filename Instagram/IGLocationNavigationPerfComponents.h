//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationNavigationPerfComponents_h
#define IGLocationNavigationPerfComponents_h
@import Foundation;

@class IGPerformanceComponent, IGPerformanceNavigationLogger;

@interface IGLocationNavigationPerfComponents : NSObject {
  /* instance variables */
  IGPerformanceComponent *_feedListUpdate;
}

@property (readonly, nonatomic) IGPerformanceNavigationLogger *logger;
@property (readonly, nonatomic) IGPerformanceComponent *feed;
@property (readonly, nonatomic) IGPerformanceComponent *business;
@property (readonly, nonatomic) IGPerformanceComponent *info;
@property (readonly, nonatomic) IGPerformanceComponent *story;
@property (readonly, nonatomic) IGPerformanceComponent *location;

/* instance methods */
- (id)init;
@end

#endif /* IGLocationNavigationPerfComponents_h */