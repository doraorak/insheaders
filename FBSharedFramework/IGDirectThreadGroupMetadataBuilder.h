//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadGroupMetadataBuilder_h
#define IGDirectThreadGroupMetadataBuilder_h
@import Foundation;

#include "IGDirectThreadGroupLinkMetadata.h"
#include "IGDirectThreadGroupPhotoIdentifier.h"
#include "IGDirectThreadPublicChatMetadata.h"

@class NSDate, NSSet, NSString;

@interface IGDirectThreadGroupMetadataBuilder : NSObject {
  /* instance variables */
  BOOL _isMentionsMuted;
  NSString *_lastMentionedMessageId;
  NSDate *_lastMentionedMessageSentDate;
  IGDirectThreadGroupPhotoIdentifier *_groupPhotoIdentifier;
  NSString *_customName;
  NSSet *_adminUserIds;
  BOOL _adminApprovalRequired;
  IGDirectThreadGroupLinkMetadata *_groupLinkMetadata;
  IGDirectThreadPublicChatMetadata *_publicChatMetadata;
  long long _seenCount;
}

/* class methods */
+ (id)directThreadGroupMetadataFromExistingDirectThreadGroupMetadata:(id)metadata;

/* instance methods */
- (id)initWithGroupPhotoIdentifier:(id)identifier;
- (id)build;
- (id)withIsMentionsMuted:(BOOL)muted;
- (id)withLastMentionedMessageId:(id)id;
- (id)withLastMentionedMessageSentDate:(id)date;
- (id)withGroupPhotoIdentifier:(id)identifier;
- (id)withCustomName:(id)name;
- (id)withAdminUserIds:(id)ids;
- (id)withAdminApprovalRequired:(BOOL)required;
- (id)withGroupLinkMetadata:(id)metadata;
- (id)withPublicChatMetadata:(id)metadata;
- (id)withSeenCount:(long long)count;
@end

#endif /* IGDirectThreadGroupMetadataBuilder_h */