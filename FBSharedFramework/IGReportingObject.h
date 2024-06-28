//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGReportingObject_h
#define IGReportingObject_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGCommentModel.h"
#include "IGDirectThreadKey.h"
#include "IGLiveBroadcast.h"
#include "IGLiveCommentModel.h"
#include "IGMedia.h"
#include "IGUser.h"

@class NSArray, NSDate, NSString;

@interface IGReportingObject : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGMedia *_media_media;
  IGCommentModel *_comment_comment;
  IGUser *_comment_user;
  IGDirectThreadKey *_directMessage_threadKey;
  NSString *_directMessage_messageID;
  IGUser *_directMessage_sender;
  NSDate *_directMessage_sentDate;
  BOOL _directMessage_isOpenThreadWithVanishMode;
  NSArray *_directMessage_instamadilloMessages;
  IGDirectThreadKey *_directMessageThread_threadKey;
  IGUser *_directMessageThread_user;
  NSArray *_directMessageThread_instamadilloMessages;
  IGUser *_user_user;
  NSString *_product_productID;
  IGUser *_product_user;
  NSString *_ad_adID;
  NSString *_inAppBrowser_url;
  NSString *_hashtag_hashtagID;
  IGLiveBroadcast *_live_broadcast;
  IGLiveCommentModel *_liveComment_liveComment;
  NSString *_qAResponse_qaResponseID;
  IGUser *_qAResponse_user;
  NSString *_highlightsStory_reelID;
  IGUser *_highlightsStory_user;
  NSString *_cameraEffect_effectID;
  NSString *_sundialAudioPage_audioPageID;
  NSString *_fundraiser_fundraiserID;
  NSString *_guide_guideID;
  IGUser *_guide_user;
  NSString *_room_roomHash;
  NSString *_liveQuestion_liveQuestionID;
  IGUser *_liveQuestion_user;
  NSString *_prompt_promptId;
  IGUser *_prompt_user;
  NSString *_note_noteId;
  IGUser *_note_user;
  NSString *_collection_collectionId;
  IGUser *_collection_user;
}

/* class methods */
+ (id)adWithAdID:(id)id;
+ (id)cameraEffectWithEffectID:(id)id;
+ (id)collectionWithCollectionId:(id)id user:(id)user;
+ (id)commentWithComment:(id)comment user:(id)user;
+ (id)directMessageThreadWithThreadKey:(id)key user:(id)user instamadilloMessages:(id)messages;
+ (id)directMessageWithThreadKey:(id)key messageID:(id)id sender:(id)sender sentDate:(id)date isOpenThreadWithVanishMode:(BOOL)mode instamadilloMessages:(id)messages;
+ (id)fundraiserWithFundraiserID:(id)id;
+ (id)guideWithGuideID:(id)id user:(id)user;
+ (id)hashtagWithHashtagID:(id)id;
+ (id)highlightsStoryWithReelID:(id)id user:(id)user;
+ (id)inAppBrowserWithUrl:(id)url;
+ (id)liveCommentWithLiveComment:(id)comment;
+ (id)liveQuestionWithLiveQuestionID:(id)id user:(id)user;
+ (id)liveWithBroadcast:(id)broadcast;
+ (id)mediaWithMedia:(id)media;
+ (id)noteWithNoteId:(id)id user:(id)user;
+ (id)productWithProductID:(id)id user:(id)user;
+ (id)promptWithPromptId:(id)id user:(id)user;
+ (id)qAResponseWithQaResponseID:(id)id user:(id)user;
+ (id)roomWithRoomHash:(id)hash;
+ (id)sundialAudioPageWithAudioPageID:(id)id;
+ (id)userWithUser:(id)user;
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
@end

#endif /* IGReportingObject_h */