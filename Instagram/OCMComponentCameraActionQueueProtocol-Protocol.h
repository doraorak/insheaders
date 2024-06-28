//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMComponentCameraActionQueueProtocol_Protocol_h
#define OCMComponentCameraActionQueueProtocol_Protocol_h
@import Foundation;

@protocol OCMComponentCameraActionQueueProtocol <OCMComponentProtocol>
/* instance methods */
- (void)enqueueAction:(id)action;
- (void)enqueueAction:(id)action completionQueue:(id)queue completion:(id /* block */)completion;
- (void)flush;
- (void)clear;
@end

#endif /* OCMComponentCameraActionQueueProtocol_Protocol_h */
