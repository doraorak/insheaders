//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadGroupMetadataProviding_Protocol_h
#define IGDirectThreadGroupMetadataProviding_Protocol_h
@import Foundation;

@protocol IGDirectThreadGroupMetadataProviding <NSObject, NSCopying, NSCoding>

@property (readonly, nonatomic) BOOL isMentionsMuted;
@property (readonly, copy, nonatomic) NSString *lastMentionedMessageId;
@property (readonly, copy, nonatomic) NSDate *lastMentionedMessageSentDate;
@property (readonly, copy, nonatomic) IGDirectThreadGroupPhotoIdentifier *groupPhotoIdentifier;
@property (readonly, copy, nonatomic) NSString *customName;
@property (readonly, copy, nonatomic) NSSet *adminUserIds;
@property (readonly, nonatomic) BOOL adminApprovalRequired;
@property (readonly, copy, nonatomic) IGDirectThreadGroupLinkMetadata *groupLinkMetadata;
@property (readonly, copy, nonatomic) IGDirectThreadPublicChatMetadata *publicChatMetadata;
@property (readonly, nonatomic) long long seenCount;

@end

#endif /* IGDirectThreadGroupMetadataProviding_Protocol_h */