//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloReaction_h
#define IGDirectInstamadilloReaction_h
@import Foundation;

#include "GPBMessage.h"

@class NSString;

@interface IGDirectInstamadilloReaction : GPBMessage

@property (copy, @dynamic, nonatomic) NSString *reactionType;
@property (@dynamic, nonatomic) BOOL hasReactionType;
@property (copy, @dynamic, nonatomic) NSString *reactionStatus;
@property (@dynamic, nonatomic) BOOL hasReactionStatus;
@property (copy, @dynamic, nonatomic) NSString *emoji;
@property (@dynamic, nonatomic) BOOL hasEmoji;
@property (copy, @dynamic, nonatomic) NSString *superReactType;
@property (@dynamic, nonatomic) BOOL hasSuperReactType;

/* class methods */
+ (id)descriptor;
@end

#endif /* IGDirectInstamadilloReaction_h */