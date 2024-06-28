//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOctaneRequestSnapshotState_h
#define IGOctaneRequestSnapshotState_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGOctaneRequestSnapshotState : NSObject<NSObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isValidNextState:(Class)state;
- (void)didEnterWithPreviousState:(id)state;
- (void)updateWithDeltaTime:(double)time;
- (void)willExitWithNextState:(id)state;
- (BOOL)validateOctaneSequenceId:(id)id withCurrentThreadSequenceId:(id)id;
- (void)validHandler:(id)handler context:(id)context;
- (void)invalidHandler:(id)handler context:(id)context;
@end

#endif /* IGOctaneRequestSnapshotState_h */
