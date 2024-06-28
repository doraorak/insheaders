//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromptStickerDetails_h
#define IGPromptStickerDetails_h
@import Foundation;

#include "FBValueObject.h"
#include "IGPromptStickerAnonymousPromptExplanation.h"
#include "IGPromptStickerOriginalPrompt.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface IGPromptStickerDetails : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGPromptStickerOriginalPrompt *originalPrompt;
@property (readonly, copy, nonatomic) NSNumber *participantCount;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, copy, nonatomic) NSString *disclaimerText;
@property (readonly, copy, nonatomic) IGPromptStickerAnonymousPromptExplanation *anonymousPromptExplanationInfo;
@property (readonly, nonatomic) long long notificationSetting;
@property (readonly, nonatomic) long long authorAttributionSetting;
@property (readonly, nonatomic) long long disablementState;
@property (readonly, copy, nonatomic) NSArray *remainingUserIdsToMaterialize;
@property (readonly, nonatomic) long long subsequentPageSize;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithOriginalPrompt:(id)prompt participantCount:(id)count participants:(id)participants disclaimerText:(id)text anonymousPromptExplanationInfo:(id)info notificationSetting:(long long)setting authorAttributionSetting:(long long)setting disablementState:(long long)state remainingUserIdsToMaterialize:(id)materialize subsequentPageSize:(long long)size;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGPromptStickerDetails_h */