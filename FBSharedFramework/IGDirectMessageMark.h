//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageMark_h
#define IGDirectMessageMark_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectMessageMarkType.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGDirectMessageMark : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *clientId;
@property (readonly, copy, nonatomic) NSString *threadId;
@property (readonly, copy, nonatomic) NSString *messageId;
@property (readonly, copy, nonatomic) IGDirectMessageMarkType *type;
@property (readonly, nonatomic) BOOL isE2ELoggingSampled;
@property (readonly, copy, nonatomic) NSString *originalMessageClientContext;
@property (readonly, nonatomic) long long productType;

/* instance methods */
- (id)initWithClientId:(id)id threadId:(id)id messageId:(id)id type:(id)type isE2ELoggingSampled:(BOOL)sampled originalMessageClientContext:(id)context productType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectMessageMark_h */