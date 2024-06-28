//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAssistantStellaBusMessageDigestModelAttachment_h
#define FBAssistantStellaBusMessageDigestModelAttachment_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface FBAssistantStellaBusMessageDigestModelAttachment : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *attachmentId;
@property (readonly, nonatomic) long long expiryTimestampMs;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *fallbackUrl;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *faviconUrl;

/* instance methods */
- (id)initWithAttachmentId:(id)id expiryTimestampMs:(long long)ms type:(long long)type url:(id)url fallbackUrl:(id)url mimeType:(id)type titleText:(id)text faviconUrl:(id)url;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBAssistantStellaBusMessageDigestModelAttachment_h */
