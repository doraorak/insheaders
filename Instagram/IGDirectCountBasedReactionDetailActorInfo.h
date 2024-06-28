//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectCountBasedReactionDetailActorInfo_h
#define IGDirectCountBasedReactionDetailActorInfo_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class IGUser, NSString;

@interface IGDirectCountBasedReactionDetailActorInfo : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGUser *actor;
@property (readonly, copy, nonatomic) NSString *emojiUnicode;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithActor:(id)actor emojiUnicode:(id)unicode;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectCountBasedReactionDetailActorInfo_h */