//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadDetailBlockUserActionHelperDelegate_Protocol_h
#define IGDirectThreadDetailBlockUserActionHelperDelegate_Protocol_h
@import Foundation;

@protocol IGDirectThreadDetailBlockUserActionHelperDelegate <NSObject>
/* instance methods */
- (void)blockUserActionHelperBlockUserWithoutChaining;
- (void)blockUserActionHelperDidPerformBlock;
- (void)blockUserActionHelperDidDeleteThreadInChainedAction;
- (void)blockUserActionHelperDidDismiss;
- (void)blockUserActionHelperDidPerformUnblock;
@end

#endif /* IGDirectThreadDetailBlockUserActionHelperDelegate_Protocol_h */