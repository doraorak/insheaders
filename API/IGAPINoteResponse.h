//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPINoteResponse_h
#define IGAPINoteResponse_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPINoteResponse : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithAudience:(id)audience audienceFacepileUsers:(id)users audienceSize:(id)size canReply:(id)reply createdAt:(id)at e2eeMentionedUserList:(id)list expiresAt:(id)at fontStyle:(id)style groupId:(id)id hasTranslation:(id)translation graphQLID:(id)qlid isEmojiOnly:(id)only isUnseen:(id)unseen noteResponseInfo:(id)info noteStyle:(id)style reactions:(id)reactions targetProfile:(id)profile text:(id)text user:(id)user userId:(id)id;
@end

#endif /* IGAPINoteResponse_h */
