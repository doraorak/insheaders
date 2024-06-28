//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShareToStoryValue_h
#define IGShareToStoryValue_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGAPIProductDetailsProductItemDict.h"
#include "IGCommentModel.h"
#include "IGCreationViewControllerNavigationDelegate-Protocol.h"
#include "IGGuide.h"
#include "IGMedia.h"
#include "IGPostItemProtocol-Protocol.h"
#include "IGSavedMediaCollection.h"
#include "IGShoppingProductCollectionSharingModel.h"
#include "IGShoppingStorefrontSharingModel.h"
#include "IGStandaloneFundraiserSharesheetModel.h"
#include "IGUser.h"
#include "IGUserSession.h"

@class NSNumber, NSString, NSURL, UIImage;
@protocol IGDirectMessageViewModelProtocol, IGDirectShareToStoryValueActionHandler, IGPrivateStoriesRecipientListViewControllerHandling;

@interface IGShareToStoryValue : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGMedia *_shareFeedToStory_media;
  NSObject<IGPostItemProtocol> *_shareFeedToStory_selectedPost;
  long long _shareFeedToStory_feedSource;
  IGAPIProductDetailsProductItemDict *_shareProductToStory_productItem;
  IGShoppingProductCollectionSharingModel *_productCollectionShareModel;
  IGGuide *_guide;
  IGStandaloneFundraiserSharesheetModel *_fundraiserShareModel;
  IGShoppingStorefrontSharingModel *_storefrontShareModel;
  IGUser *_shareProfileToStory;
  IGSavedMediaCollection *_savedMediaCollection_savedMediaCollection;
  BOOL _savedMediaCollection_isOwnerSelf;
  BOOL _savedMediaCollection_isOwnerPrivate;
  NSObject<IGPrivateStoriesRecipientListViewControllerHandling> *_shareReactionToStory_handler;
  NSNumber *_shareChannelToStory_audienceType;
  long long _shareChannelToStory_chatType;
  IGUserSession *_shareChannelToStory_userSession;
  NSString *_shareChannelToStory_chatName;
  NSString *_shareChannelToStory_threadId;
  NSString *_shareChannelToStory_threadIdV2;
  NSObject<IGCreationViewControllerNavigationDelegate> *_shareChannelToStory_storyCreationViewControllerDelegate;
  IGUser *_shareChannelToStory_chatCreator;
  long long _shareChannelToStory_memberCount;
  unsigned long long _shareChannelToStory_threadSubtype;
  NSString *_shareChannelToStory_inviteLink;
  UIImage *_shareChannelToStory_storyBackgroundImage;
  NSString *_shareEventToStory_eventId;
  NSString *_shareEventToStory_eventTitle;
  NSString *_shareEventToStory_imageURL;
  NSString *_shareEventToStory_timeString;
  NSString *_shareEventToStory_locationString;
  NSObject<IGDirectMessageViewModelProtocol> *_shareBroadcastChannelMessageToStory_messageViewModel;
  NSObject<IGDirectShareToStoryValueActionHandler> *_shareBroadcastChannelMessageToStory_actionHandler;
  NSObject<IGDirectMessageViewModelProtocol> *_shareBroadcastChannelMessageToStory_previousMessageViewModel;
  IGMedia *_shareCommentToStory_media;
  IGCommentModel *_shareCommentToStory_comment;
  NSObject<IGPostItemProtocol> *_shareCommentToStory_selectedPost;
  long long _shareCommentToStory_entrypoint;
  NSString *_shareAchievementToStory_achievementImageURL;
  NSString *_shareAchievementToStory_achievementId;
  IGMedia *_shareAchievementToStory_media;
  long long _shareAchievementToStory_entrypoint;
  NSURL *_shareChannelChallengeToStory_profilePictureUrl;
  NSString *_shareChannelChallengeToStory_challengeName;
  NSString *_shareChannelChallengeToStory_creatorName;
  NSString *_shareChannelChallengeToStory_reward;
  NSNumber *_shareChannelChallengeToStory_audienceType;
  NSString *_shareChannelChallengeToStory_threadId;
  NSString *_shareChannelChallengeToStory_collectionId;
  NSObject<IGCreationViewControllerNavigationDelegate> *_shareChannelChallengeToStory_storyCreationViewControllerDelegate;
}

/* class methods */
+ (id)fundraiserShareModel:(id)model;
+ (id)guide:(id)guide;
+ (id)productCollectionShareModel:(id)model;
+ (id)savedMediaCollectionWithSavedMediaCollection:(id)collection isOwnerSelf:(BOOL)self isOwnerPrivate:(BOOL)private;
+ (id)shareAchievementToStoryWithAchievementImageURL:(id)url achievementId:(id)id media:(id)media entrypoint:(long long)entrypoint;
+ (id)shareBroadcastChannelMessageToStoryWithMessageViewModel:(id)model actionHandler:(id)handler previousMessageViewModel:(id)model;
+ (id)shareChannelChallengeToStoryWithProfilePictureUrl:(id)url challengeName:(id)name creatorName:(id)name reward:(id)reward audienceType:(id)type threadId:(id)id collectionId:(id)id storyCreationViewControllerDelegate:(id)delegate;
+ (id)shareChannelToStoryWithAudienceType:(id)type chatType:(long long)type userSession:(id)session chatName:(id)name threadId:(id)id threadIdV2:(id)v2 storyCreationViewControllerDelegate:(id)delegate chatCreator:(id)creator memberCount:(long long)count threadSubtype:(unsigned long long)subtype inviteLink:(id)link storyBackgroundImage:(id)image;
+ (id)shareCommentToStoryWithMedia:(id)media comment:(id)comment selectedPost:(id)post entrypoint:(long long)entrypoint;
+ (id)shareEventToStoryWithEventId:(id)id eventTitle:(id)title imageURL:(id)url timeString:(id)string locationString:(id)string;
+ (id)shareFeedToStoryWithMedia:(id)media selectedPost:(id)post feedSource:(long long)source;
+ (id)shareProductToStoryWithProductItem:(id)item;
+ (id)shareProfileToStory:(id)story;
+ (id)shareReactionToStoryWithHandler:(id)handler;
+ (id)storefrontShareModel:(id)model;

/* instance methods */
@end

#endif /* IGShareToStoryValue_h */
