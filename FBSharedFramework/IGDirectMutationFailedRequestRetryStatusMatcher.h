//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMutationFailedRequestRetryStatusMatcher_h
#define IGDirectMutationFailedRequestRetryStatusMatcher_h
@import Foundation;

@interface IGDirectMutationFailedRequestRetryStatusMatcher : NSObject
/* class methods */
+ (id)match:(id)match noRetryPermitted:(id /* block */)permitted manualRetryOnly:(id /* block */)only autoRetry:(id /* block */)retry;
@end

#endif /* IGDirectMutationFailedRequestRetryStatusMatcher_h */
