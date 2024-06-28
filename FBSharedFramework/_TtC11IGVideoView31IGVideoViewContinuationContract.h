//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11IGVideoView31IGVideoViewContinuationContract_h
#define _TtC11IGVideoView31IGVideoViewContinuationContract_h
@import Foundation;

#include "_TtP11IGVideoView47IGVideoViewContinuationContractValidityProvider_-Protocol.h"

@interface _TtC11IGVideoView31IGVideoViewContinuationContract : NSObject { // (Swift)
  /* instance variables */
   fulfillmentState;
   shouldVoidOnTermination;
   fulfillmentDisplaySize;
   originalDisplaySize;
}

@property (nonatomic, weak) NSObject<_TtP11IGVideoView47IGVideoViewContinuationContractValidityProvider_> *validityProvider;

/* instance methods */
- (id)fulfillWithDisplaySize:(struct CGSize { double x0; double x1; })size;
- (id)init;
@end

#endif /* _TtC11IGVideoView31IGVideoViewContinuationContract_h */