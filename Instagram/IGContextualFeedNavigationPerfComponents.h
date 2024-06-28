//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextualFeedNavigationPerfComponents_h
#define IGContextualFeedNavigationPerfComponents_h
@import Foundation;

@class IGPerformanceMediaLoadingComponent, IGPerformanceNavigationLogger;

@interface IGContextualFeedNavigationPerfComponents : NSObject {
  /* instance variables */
  IGPerformanceMediaLoadingComponent *_mediaLoadingComponent;
}

@property (readonly, nonatomic) IGPerformanceNavigationLogger *logger;

/* instance methods */
- (id)initWithUserSession:(id)session markerId:(int)id;
@end

#endif /* IGContextualFeedNavigationPerfComponents_h */