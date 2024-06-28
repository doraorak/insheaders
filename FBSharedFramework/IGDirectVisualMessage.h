//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVisualMessage_h
#define IGDirectVisualMessage_h
@import Foundation;

#include "IGDirectAttachmentIntervention.h"
#include "IGDirectMessageActionSummaryProvider-Protocol.h"
#include "IGDirectMessageAuxiliaryContent.h"
#include "IGDirectMessagePaidPartnershipMetadata.h"
#include "IGDirectMessageReplyable-Protocol.h"
#include "IGDirectPowerupsMetadata.h"
#include "IGDirectPublishedMessageVisualMediaInfo.h"
#include "IGDirectUIMessage.h"
#include "IGDirectUIMessageProviding-Protocol.h"
#include "IGImageLoggingIdentifier.h"
#include "IGImageSpecifier.h"
#include "IGMediaPreloaderItem-Protocol.h"
#include "IGPhotosRenderedTracking-Protocol.h"
#include "IGRingViewSpecFactory.h"

@class NSString, NSURL, UIImage;

@interface IGDirectVisualMessage : NSObject<IGDirectMessageActionSummaryProvider, IGDirectUIMessageProviding, IGDirectMessageReplyable, IGMediaPreloaderItem, IGPhotosRenderedTracking> {
  /* instance variables */
  NSURL *_initialUploadVideoURL;
  NSString *_tombstoneTextCaption;
  IGDirectPublishedMessageVisualMediaInfo *_visualMediaInfo;
  NSString *_dependentMediaURL;
  IGImageSpecifier *_fullImageSpecifier;
  UIImage *_pendingUploadImage;
  long long _primaryStatus;
  long long _primaryStatusCount;
  IGDirectAttachmentIntervention *_intervention;
}

@property (readonly, nonatomic) IGDirectUIMessage *message;
@property (readonly, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) NSString *dependentMediaUploadId;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) BOOL isPlayable;
@property (readonly, nonatomic) IGRingViewSpecFactory *ringViewSpecFactory;
@property (nonatomic) BOOL hasSensitiveMediaRevealed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGDirectPowerupsMetadata *powerupsMetadata;
@property (readonly, nonatomic) IGDirectMessageAuxiliaryContent *auxiliaryContent;
@property (readonly, nonatomic) IGDirectMessagePaidPartnershipMetadata *paidPartnershipMetadata;
@property (readonly, nonatomic) IGImageLoggingIdentifier *imageLoggingIdentifier;
@property (readonly, nonatomic) long long mediaType;

/* instance methods */
- (id)initWithMessage:(id)message visualMediaInfo:(id)info intervention:(id)intervention ringViewSpecFactory:(id)factory;
- (id)initWithMessage:(id)message mediaType:(long long)type viewMode:(long long)mode senderIsCurrentUser:(BOOL)user replyType:(long long)type actionSummary:(id)summary textLabelCaptions:(id)captions previewImage:(id)image fullImageSpecifier:(id)specifier photo:(id)photo video:(id)video hasTranscription:(BOOL)transcription isPlayable:(BOOL)playable primaryStatus:(long long)status primaryStatusCount:(long long)count intervention:(id)intervention ringViewSpecFactory:(id)factory;
- (id)initWithMessage:(id)message mediaType:(long long)type viewMode:(long long)mode replyType:(long long)type textLabelCaptions:(id)captions uploadImage:(id)image initialUploadVideoURL:(id)url dependentMediaUploadId:(id)id hasTranscription:(BOOL)transcription isSuperlative:(BOOL)superlative;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isExpired;
- (BOOL)isPending;
- (unsigned long long)messageType;
- (id)contentTypeString;
- (id)messageId;
- (id)replyable;
- (BOOL)hideInThread;
- (id)actionSummaryProvider;
- (id)replyableConfigurationMedia;
- (long long)replyableConfigurationMediaViewMode;
- (long long)replyType;
- (id)currentActionSummary;
- (id)pk;
- (id)user;
- (id)photo;
- (id)video;
@end

#endif /* IGDirectVisualMessage_h */