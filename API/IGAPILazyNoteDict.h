//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPILazyNoteDict_h
#define IGAPILazyNoteDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPILazyNoteDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithAudience:(id)audience authorId:(id)id canReply:(id)reply createdAt:(id)at e2eeMentionedUserList:(id)list expiresAt:(id)at hasTranslation:(id)translation isEmojiOnly:(id)only isUnseen:(id)unseen noteId:(id)id noteResponseInfo:(id)info noteStyle:(id)style reactionInfo:(id)info text:(id)text;
@end

#endif /* IGAPILazyNoteDict_h */
