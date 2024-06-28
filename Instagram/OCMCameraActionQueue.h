//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMCameraActionQueue_h
#define OCMCameraActionQueue_h
@import Foundation;

@class NSMutableArray;

@interface OCMCameraActionQueue : NSObject {
  /* instance variables */
  NSMutableArray *_pendingActions;
  id /* block */ _conditionBlock;
  id /* block */ _executionBlock;
  BOOL _fixCameraActions;
}

/* instance methods */
- (id)initWithFixCameraActions:(BOOL)actions conditionBlock:(id /* block */)block executionBlock:(id /* block */)block;
- (void)enqueueAction:(id)action;
- (void)enqueueAction:(id)action completionQueue:(id)queue completion:(id /* block */)completion;
- (void)flush;
- (void)clear;
@end

#endif /* OCMCameraActionQueue_h */
