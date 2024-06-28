//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageContentMutation_h
#define IGDirectMessageContentMutation_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectEmbeddedPublishedMessage.h"
#include "IGDirectMessageReaction.h"
#include "IGDirectMisinfoTreatmentUpdate.h"
#include "IGDirectViolationReviewUpdate.h"
#include "IGDirectVisualMessageActionSummary.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IGDirectMessageContentMutation : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_markMessageContentSeen_userPk;
  NSString *_like_userPk;
  NSString *_unlike_userPk;
  NSString *_editText_newContent;
  unsigned long long _editText_editCount;
  NSString *_editText_userPk;
  NSArray *_editText_editHistory;
  NSArray *_react_reactions;
  IGDirectMessageReaction *_reactViewer_reaction;
  IGDirectMessageReaction *_reactSelf_reaction;
  NSString *_unreact_userPk;
  IGDirectMessageReaction *_unreact_reaction;
  NSString *_unreactSelf_userPk;
  IGDirectMessageReaction *_unreactSelf_reaction;
  NSString *_reactToMedia_mediaId;
  IGDirectMessageReaction *_reactToMedia_reaction;
  NSString *_unreactToMedia_mediaId;
  IGDirectMessageReaction *_unreactToMedia_reaction;
  IGDirectVisualMessageActionSummary *_visualMessageActionSummary;
  unsigned long long _vote_optionId;
  IGDirectViolationReviewUpdate *_violationReviewUpdate;
  NSString *_updateTranslatedContent_translatedContent;
  NSString *_updateSharedAlbumId_sharedAlbumId;
  unsigned long long _updateRepliesCount_repliesCount;
  BOOL _updatePaidPartnershipLabel_shouldShowLabel;
  IGDirectEmbeddedPublishedMessage *_updateWithReplyPreview_repliedToMessage;
  NSNumber *_updateChannelSeenCount_seenCount;
  NSDictionary *_updateWithOnDeviceNudityInferenceResult_mediaInterventionsDict;
  IGDirectMisinfoTreatmentUpdate *_updateMisinfoTreatment;
}

/* class methods */
+ (id)editTextWithNewContent:(id)content editCount:(unsigned long long)count userPk:(id)pk editHistory:(id)history;
+ (id)likeWithUserPk:(id)pk;
+ (id)markMessageContentSeenWithUserPk:(id)pk;
+ (id)reactSelfWithReaction:(id)reaction;
+ (id)reactToMediaWithMediaId:(id)id reaction:(id)reaction;
+ (id)reactViewerWithReaction:(id)reaction;
+ (id)reactWithReactions:(id)reactions;
+ (id)unlikeWithUserPk:(id)pk;
+ (id)unreactSelfWithUserPk:(id)pk reaction:(id)reaction;
+ (id)unreactToMediaWithMediaId:(id)id reaction:(id)reaction;
+ (id)unreactWithUserPk:(id)pk reaction:(id)reaction;
+ (id)updateChannelSeenCountWithSeenCount:(id)count;
+ (id)updateMisinfoTreatment:(id)treatment;
+ (id)updatePaidPartnershipLabelWithShouldShowLabel:(BOOL)label;
+ (id)updateRepliesCountWithRepliesCount:(unsigned long long)count;
+ (id)updateSharedAlbumIdWithSharedAlbumId:(id)id;
+ (id)updateTranslatedContentWithTranslatedContent:(id)content;
+ (id)updateWithOnDeviceNudityInferenceResultWithMediaInterventionsDict:(id)dict;
+ (id)updateWithReplyPreviewWithRepliedToMessage:(id)message;
+ (id)violationReviewUpdate:(id)update;
+ (id)visualMessageActionSummary:(id)summary;
+ (id)voteWithOptionId:(unsigned long long)id;

/* instance methods */
@end

#endif /* IGDirectMessageContentMutation_h */
