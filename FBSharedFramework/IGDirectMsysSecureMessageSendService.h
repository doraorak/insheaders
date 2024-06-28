//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysSecureMessageSendService_h
#define IGDirectMsysSecureMessageSendService_h
@import Foundation;

#include "IGDirectMessageSendingListener-Protocol.h"
#include "IGDirectMsysMessageSending-Protocol.h"
#include "IGDirectMsysMessagingMailbox.h"
#include "IGDirectOneTraceIDLogger.h"
#include "IGUserSessionProvider.h"

@class NSString;
@protocol IGDirectGalleryMediaRequesting;

@interface IGDirectMsysSecureMessageSendService : NSObject<IGDirectMsysMessageSending> {
  /* instance variables */
  IGDirectMsysMessagingMailbox *_mailboxProvider;
  NSObject<IGDirectGalleryMediaRequesting> *_mediaRequester;
  IGUserSessionProvider *_userSessionProvider;
  IGDirectOneTraceIDLogger *_directOneTraceIDLogger;
}

@property (weak, nonatomic) NSObject<IGDirectMessageSendingListener> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMailboxProvider:(id)provider mediaRequester:(id)requester userSessionProvider:(id)provider;
- (void)sendStoryMentionMessageWithStory:(id)story reelPk:(id)pk mentionSharingEnabled:(BOOL)enabled toUsers:(id)users attribution:(id)attribution;
- (void)sendMessageContent:(id)content toThreadTarget:(id)target threadSubtype:(unsigned long long)subtype attribution:(id)attribution productType:(long long)type isCutoverThread:(BOOL)thread e2eloggerLogId:(id)id messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLSSLogger:(id)lsslogger predefinedOfflineThreadingId:(id)id;
- (void)sendAudioWithURL:(id)url waveform:(id)waveform duration:(double)duration threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentPhotoWithImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)forwardSecureMessageWithMessageId:(long long)id threadTarget:(id)target attribution:(id)attribution additionalText:(id)text e2eloggerLogId:(id)id productType:(long long)type;
- (void)sendPermanentPhotoWithAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentPhotoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentVideoWithAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentVideoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentVideoWithAVAsset:(id)avasset previewImageEncoding:(id)encoding threadTarget:(id)target messageSentSpeedMarker:(id)marker e2eloggerLogId:(id)id replyMessagePk:(id)pk localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentVideoWithVideoURL:(id)url videoSize:(struct CGSize { double x0; double x1; })size previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendContentShareWithContentId:(id)id contentType:(long long)type threadTarget:(id)target;
- (void)cancelMessageSendWithMessageId:(id)id;
- (void)manuallyRetryMessageSendWithMessageId:(id)id;
- (void)sendNoteReplyWithNote:(id)note author:(id)author threadKey:(id)key noteReplyText:(id)text attribution:(id)attribution;
- (void)sendEditMessageWithThreadPk:(id)pk messageId:(id)id editText:(id)text;
- (void)scopeWillEnd;
@end

#endif /* IGDirectMsysSecureMessageSendService_h */
