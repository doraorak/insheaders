//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPMediaStreamDeserializedResponse_h
#define SUPMediaStreamDeserializedResponse_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "SUPMediaStreamError.h"

@interface SUPMediaStreamDeserializedResponse : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) SUPMediaStreamError *response;
@property (readonly, nonatomic) unsigned long long nonce;

/* instance methods */
- (id)initWithResponse:(id)response nonce:(unsigned long long)nonce;
@end

#endif /* SUPMediaStreamDeserializedResponse_h */
