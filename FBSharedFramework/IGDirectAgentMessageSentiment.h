//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAgentMessageSentiment_h
#define IGDirectAgentMessageSentiment_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IGDirectAgentMessageSentiment : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long sentimentType;
@property (readonly, nonatomic) long long sentimentIntensity;
@property (readonly, nonatomic) long long reaction;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithSentimentType:(long long)type sentimentIntensity:(long long)intensity reaction:(long long)reaction;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectAgentMessageSentiment_h */