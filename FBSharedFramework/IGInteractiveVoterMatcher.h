//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInteractiveVoterMatcher_h
#define IGInteractiveVoterMatcher_h
@import Foundation;

@interface IGInteractiveVoterMatcher : NSObject
/* class methods */
+ (id)match:(id)match poll:(id /* block */)poll slider:(id /* block */)slider questionAnswer:(id /* block */)answer quiz:(id /* block */)quiz fundraiser:(id /* block */)fundraiser;
@end

#endif /* IGInteractiveVoterMatcher_h */