//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNAnimationInteractionAction_h
#define SNAnimationInteractionAction_h
@import Foundation;

#include "NSOperation.h"
#include "SNAnimationInteractionActioning-Protocol.h"

@class NSString;

@interface SNAnimationInteractionAction : NSOperation<SNAnimationInteractionActioning> {
  /* instance variables */
  BOOL _executing;
  BOOL _finished;
}

@property (copy, nonatomic) id /* block */ executionBlock;
@property (retain, nonatomic) NSObject<SNAnimationInteractionActioning> *nextAction;
@property (copy) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)start;
- (void)finish;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)cancel;
@end

#endif /* SNAnimationInteractionAction_h */
