//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingPollMessageInteraction_h
#define IGDirectOutgoingPollMessageInteraction_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGDirectOutgoingPollMessageInteraction : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pollId;
@property (readonly, copy, nonatomic) NSArray *novelOptionStrings;
@property (readonly, copy, nonatomic) NSArray *novelOptionVotes;
@property (readonly, copy, nonatomic) NSArray *existingOptionIds;
@property (readonly, copy, nonatomic) NSArray *existingOptionVotes;
@property (readonly, nonatomic) BOOL isCreatorBroadcast;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPollId:(id)id novelOptionStrings:(id)strings novelOptionVotes:(id)votes existingOptionIds:(id)ids existingOptionVotes:(id)votes isCreatorBroadcast:(BOOL)broadcast;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectOutgoingPollMessageInteraction_h */
