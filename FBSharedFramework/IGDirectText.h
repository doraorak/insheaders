//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectText_h
#define IGDirectText_h
@import Foundation;

#include "IGDirectMessageAuxiliaryContent.h"
#include "IGDirectMessagePaidPartnershipMetadata.h"
#include "IGDirectPowerupsMetadata.h"
#include "IGDirectUIMessage.h"
#include "IGDirectUIMessageProviding-Protocol.h"

@class NSArray, NSString;

@interface IGDirectText : NSObject<IGDirectUIMessageProviding> {
  /* instance variables */
  NSArray *_mentionedUserPks;
}

@property (readonly, nonatomic) IGDirectUIMessage *message;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *translatedText;
@property (readonly, copy, nonatomic) NSString *messageDialect;
@property (readonly, nonatomic) long long textType;
@property (readonly, copy, nonatomic) NSArray *messageCommands;
@property (readonly, nonatomic) BOOL sendSilently;
@property (readonly, copy, nonatomic) NSArray *animatedEmojiCharacterRanges;
@property (readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata;
@property (readonly, nonatomic) IGDirectMessageAuxiliaryContent *auxiliaryContent;
@property (readonly, nonatomic) IGDirectMessagePaidPartnershipMetadata *paidPartnershipMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessage:(id)message text:(id)text translatedText:(id)text mentionedUserPks:(id)pks messageCommands:(id)commands sendSilently:(BOOL)silently powerupsMetadata:(id)metadata paidPartnershipMetadata:(id)metadata animatedEmojiCharacterRanges:(id)ranges;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)messageType;
- (id)contentTypeString;
- (id)messageId;
- (id)replyable;
- (BOOL)hideInThread;
- (id)actionSummaryProvider;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGDirectText_h */