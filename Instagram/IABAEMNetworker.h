//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAEMNetworker_h
#define IABAEMNetworker_h
@import Foundation;

@interface IABAEMNetworker : NSObject {
  /* instance variables */
  long long _numberOfTries;
  long long _delayInMiliseconds;
  id /* block */ _requestCall;
}

/* instance methods */
- (id)initWithNumberOfTries:(long long)tries delayInMiliseconds:(long long)miliseconds requestCall:(id /* block */)call;
- (BOOL)initiateRequestWithRetries;
- (long long)numberOfTriesRemaining;
@end

#endif /* IABAEMNetworker_h */
