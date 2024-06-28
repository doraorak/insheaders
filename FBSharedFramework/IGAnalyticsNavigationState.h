//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnalyticsNavigationState_h
#define IGAnalyticsNavigationState_h
@import Foundation;

@class NSMutableArray;

@interface IGAnalyticsNavigationState : NSObject {
  /* instance variables */
  NSMutableArray *_navEvents;
}

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* IGAnalyticsNavigationState_h */