//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageOutgoingUpdateActionMatcher_h
#define IGDirectMessageOutgoingUpdateActionMatcher_h
@import Foundation;

@interface IGDirectMessageOutgoingUpdateActionMatcher : NSObject
/* class methods */
+ (id)match:(id)match markSeen:(id /* block */)seen editText:(id /* block */)text reaction:(id /* block */)reaction vote:(id /* block */)vote unsend:(id /* block */)unsend onDeviceNudityInferenceResult:(id /* block */)result;
@end

#endif /* IGDirectMessageOutgoingUpdateActionMatcher_h */