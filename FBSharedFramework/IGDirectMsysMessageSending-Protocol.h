//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysMessageSending_Protocol_h
#define IGDirectMsysMessageSending_Protocol_h
@import Foundation;

@protocol IGDirectMsysMessageSending <NSObject, IGScopeEnding>

@property (weak, nonatomic) NSObject<IGDirectMessageSendingListener> *delegate;

/* instance methods */
- (void)sendMessageContent:(id)content toThreadTarget:(id)target threadSubtype:(unsigned long long)subtype attribution:(id)attribution productType:(long long)type isCutoverThread:(BOOL)thread e2eloggerLogId:(id)id messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLSSLogger:(id)lsslogger predefinedOfflineThreadingId:(id)id;
- (void)sendStoryMentionMessageWithStory:(id)story reelPk:(id)pk mentionSharingEnabled:(BOOL)enabled toUsers:(id)users attribution:(id)attribution;
- (void)sendPermanentPhotoWithImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentPhotoWithAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentPhotoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentVideoWithAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentVideoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentVideoWithAVAsset:(id)avasset previewImageEncoding:(id)encoding threadTarget:(id)target messageSentSpeedMarker:(id)marker e2eloggerLogId:(id)id replyMessagePk:(id)pk localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendPermanentVideoWithVideoURL:(id)url videoSize:(struct CGSize { double x0; double x1; })size previewImageEncoding:(id)encoding threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)sendAudioWithURL:(id)url waveform:(id)waveform duration:(double)duration threadTarget:(id)target e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker attribution:(id)attribution;
- (void)cancelMessageSendWithMessageId:(id)id;
- (void)manuallyRetryMessageSendWithMessageId:(id)id;
- (void)forwardSecureMessageWithMessageId:(long long)id threadTarget:(id)target attribution:(id)attribution additionalText:(id)text e2eloggerLogId:(id)id productType:(long long)type;
- (void)sendContentShareWithContentId:(id)id contentType:(long long)type threadTarget:(id)target;
- (void)sendNoteReplyWithNote:(id)note author:(id)author threadKey:(id)key noteReplyText:(id)text attribution:(id)attribution;
- (void)sendEditMessageWithThreadPk:(id)pk messageId:(id)id editText:(id)text;
@end

#endif /* IGDirectMsysMessageSending_Protocol_h */