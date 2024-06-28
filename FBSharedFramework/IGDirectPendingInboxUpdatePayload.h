//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPendingInboxUpdatePayload_h
#define IGDirectPendingInboxUpdatePayload_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectPendingInboxUpdateAction.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGDirectPendingInboxUpdatePayload : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGDirectPendingInboxUpdateAction *action;
@property (readonly, copy, nonatomic) NSString *updateClientContext;

/* instance methods */
- (id)initWithAction:(id)action updateClientContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectPendingInboxUpdatePayload_h */
