//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPEngagementEventDataMatcher_h
#define SUPEngagementEventDataMatcher_h
@import Foundation;

@interface SUPEngagementEventDataMatcher : NSObject
/* class methods */
+ (id)match:(id)match comment:(id /* block */)comment commentAvailable:(id /* block */)available reaction:(id /* block */)reaction viewerCount:(id /* block */)count lifecycle:(id /* block */)lifecycle userEngagementResponse:(id /* block */)response firstPersonJoins:(id /* block */)joins lastPersonLeaves:(id /* block */)leaves userEngagementStatusUpdate:(id /* block */)update;
@end

#endif /* SUPEngagementEventDataMatcher_h */