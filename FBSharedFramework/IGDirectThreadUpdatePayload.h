//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadUpdatePayload_h
#define IGDirectThreadUpdatePayload_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectDjangoThreadIdentifier.h"
#include "IGDirectThreadOutgoingUpdateAction.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGDirectThreadUpdatePayload : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *threadId;
@property (readonly, copy, nonatomic) IGDirectDjangoThreadIdentifier *threadIdentifier;
@property (readonly, copy, nonatomic) IGDirectThreadOutgoingUpdateAction *action;
@property (readonly, copy, nonatomic) NSString *updateClientContext;
@property (readonly, nonatomic) long long productType;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithThreadId:(id)id threadIdentifier:(id)identifier action:(id)action updateClientContext:(id)context productType:(long long)type;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectThreadUpdatePayload_h */
