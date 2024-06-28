//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMComponentCameraActionQueue_h
#define OCMComponentCameraActionQueue_h
@import Foundation;

#include "OCMCameraActionQueue.h"
#include "OCMComponentCameraActionQueueProtocol-Protocol.h"

@class NSString;

@interface OCMComponentCameraActionQueue : NSObject<OCMComponentCameraActionQueueProtocol> {
  /* instance variables */
  OCMCameraActionQueue *_actionQueue;
  BOOL _fixCameraActions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFixCameraActions:(BOOL)actions;
- (id)componentID;
- (id)dependentComponentIDs;
- (void)didAttachWithContext:(id)context;
- (long long)supportedControllerStates;
- (void)willDetachWithContext:(id)context;
- (void)enqueueAction:(id)action;
- (void)enqueueAction:(id)action completionQueue:(id)queue completion:(id /* block */)completion;
- (void)flush;
- (void)clear;
@end

#endif /* OCMComponentCameraActionQueue_h */
