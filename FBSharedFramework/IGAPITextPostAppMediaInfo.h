//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPITextPostAppMediaInfo_h
#define IGAPITextPostAppMediaInfo_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPITextPostAppMediaInfo : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithCanReply:(id)reply directReplyCount:(id)count fediverseInfo:(id)info hushInfo:(id)info impressionCount:(id)count isFirstPost:(id)post isHidden:(id)hidden isPostUnavailable:(id)unavailable isReply:(id)reply isShareUfiHighlightEnabled:(id)enabled linkPreviewAttachment:(id)attachment linkedInlineMedia:(id)media mentionCount:(id)count pinnedPostInfo:(id)info postPreviewCaption:(id)caption quoteCount:(id)count relatedTrendsInfo:(id)info replyControl:(id)control replyFacepileUsers:(id)users replyLevel:(id)level replyToAuthor:(id)author repostCount:(id)count selfThreadCount:(id)count shareInfo:(id)info specialEffectsEnabledStr:(id)str willAddAuthorToMentionedUsers:(id)users;
@end

#endif /* IGAPITextPostAppMediaInfo_h */
