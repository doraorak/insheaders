//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBStateMachineDelegate_Protocol_h
#define FBStateMachineDelegate_Protocol_h
@import Foundation;

@protocol FBStateMachineDelegate <NSObject>
/* instance methods */
- (void)stateMachine:(id)machine didTransitionFromState:(id)state toState:(id)state;
@end

#endif /* FBStateMachineDelegate_Protocol_h */
