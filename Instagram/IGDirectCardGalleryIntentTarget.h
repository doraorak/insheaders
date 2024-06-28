//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectCardGalleryIntentTarget_h
#define IGDirectCardGalleryIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGDirectMessageViewModelProtocol-Protocol.h"

@class IGDirectDailyPromptsMetadata, IGDirectThreadKey, IGDirectThreadTheme, IGDirectUIMessageMetadata, IGUser, NSArray, NSNumber, NSSet, NSString;
@protocol IGDirectCardGalleryViewControllerDelegate;

@interface IGDirectCardGalleryIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGDirectThreadKey *threadKey;
@property (readonly, nonatomic) NSArray *sundialThreadMessages;
@property (readonly, nonatomic) unsigned long long entryPoint;
@property (readonly, nonatomic) IGDirectThreadTheme *threadTheme;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *collectionId;
@property (readonly, nonatomic) NSString *messageId;
@property (readonly, nonatomic) NSString *seedMessageSenderId;
@property (readonly, nonatomic) IGDirectUIMessageMetadata *messageMetadata;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSArray *media;
@property (readonly, nonatomic) IGUser *channelCreatorUser;
@property (readonly, nonatomic) NSArray *threadUsers;
@property (readonly, nonatomic) BOOL canDeletePromptAndResponse;
@property (readonly, nonatomic) BOOL isBroadcastChannel;
@property (readonly, nonatomic) NSString *collectionType;
@property (readonly, nonatomic) IGDirectDailyPromptsMetadata *lastDailyPromptsMetadata;
@property (readonly, nonatomic) BOOL canDeleteOthersDailyPromptSubmission;
@property (readonly, nonatomic) BOOL canAddOrDeleteDailyPrompt;
@property (readonly, nonatomic) BOOL canAddDailyPromptResponse;
@property (readonly, nonatomic) NSSet *hiddenEmojisForBroadcastChannel;
@property (readonly, nonatomic) BOOL isChannelEnded;
@property (readonly, nonatomic) BOOL isDisappearingModeActive;
@property (readonly, nonatomic) NSObject<IGDirectMessageViewModelProtocol> *viewModel;
@property (readonly, nonatomic) NSString *threadName;
@property (readonly, nonatomic) NSNumber *consistentThreadFbid;
@property (readonly, nonatomic) long long audienceType;
@property (readonly, nonatomic) BOOL threadIsAddedToInbox;
@property (readonly, nonatomic) NSObject<IGDirectCardGalleryViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithThreadKey:(id)key sundialThreadMessages:(id)messages entryPoint:(unsigned long long)point threadTheme:(id)theme title:(id)title collectionId:(id)id messageId:(id)id seedMessageSenderId:(id)id messageMetadata:(id)metadata contentType:(id)type media:(id)media channelCreatorUser:(id)user threadUsers:(id)users canDeletePromptAndResponse:(BOOL)response isBroadcastChannel:(BOOL)channel collectionType:(id)type lastDailyPromptsMetadata:(id)metadata canDeleteOthersDailyPromptSubmission:(BOOL)submission canAddOrDeleteDailyPrompt:(BOOL)prompt canAddDailyPromptResponse:(BOOL)response hiddenEmojisForBroadcastChannel:(id)channel isChannelEnded:(BOOL)ended isDisappearingModeActive:(BOOL)active viewModel:(id)model threadName:(id)name consistentThreadFbid:(id)fbid audienceType:(long long)type threadIsAddedToInbox:(BOOL)inbox delegate:(id)delegate;
@end

#endif /* IGDirectCardGalleryIntentTarget_h */