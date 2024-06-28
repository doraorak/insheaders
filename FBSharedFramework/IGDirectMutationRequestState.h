//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMutationRequestState_h
#define IGDirectMutationRequestState_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectMutationRequest.h"
#include "IGDirectMutationRequestExecutionState.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@protocol NSCopying><NSCoding;

@interface IGDirectMutationRequestState : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGDirectMutationRequest *mutationRequest;
@property (readonly, copy, nonatomic) IGDirectMutationRequestExecutionState *executionState;
@property (readonly, nonatomic) unsigned long long attemptedCount;
@property (readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *additionalData;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMutationRequest:(id)request executionState:(id)state attemptedCount:(unsigned long long)count additionalData:(id)data;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectMutationRequestState_h */