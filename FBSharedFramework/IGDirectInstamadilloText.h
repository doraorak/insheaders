//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloText_h
#define IGDirectInstamadilloText_h
@import Foundation;

#include "GPBMessage.h"
#include "IGDirectInstamadilloPowerUpsData.h"

@class NSMutableArray, NSString;

@interface IGDirectInstamadilloText : GPBMessage

@property (copy, @dynamic, nonatomic) NSString *text;
@property (@dynamic, nonatomic) BOOL hasText;
@property (@dynamic, nonatomic) BOOL isSuggestedReply;
@property (@dynamic, nonatomic) BOOL hasIsSuggestedReply;
@property (copy, @dynamic, nonatomic) NSString *postbackPayload;
@property (@dynamic, nonatomic) BOOL hasPostbackPayload;
@property (retain, @dynamic, nonatomic) IGDirectInstamadilloPowerUpsData *powerUpData;
@property (@dynamic, nonatomic) BOOL hasPowerUpData;
@property (retain, @dynamic, nonatomic) NSMutableArray *commandsArray;
@property (readonly, @dynamic, nonatomic) unsigned long long commandsArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *animatedEmojiCharacterRangesArray;
@property (readonly, @dynamic, nonatomic) unsigned long long animatedEmojiCharacterRangesArray_Count;

/* class methods */
+ (id)descriptor;
@end

#endif /* IGDirectInstamadilloText_h */