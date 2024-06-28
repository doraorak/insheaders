//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageSending_Protocol_h
#define IGDirectMessageSending_Protocol_h
@import Foundation;

@protocol IGDirectMessageSending <NSObject, IGScopeEnding>
/* instance methods */
- (void)sendMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLSSLogger:(id)lsslogger agentsPerfLogger:(id)logger sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost associatedMultiModalParameters:(id)parameters;
- (void)sendMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLSSLogger:(id)lsslogger agentsPerfLogger:(id)logger sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost associatedMultiModalParameters:(id)parameters;
- (void)sendMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLSSLogger:(id)lsslogger agentsPerfLogger:(id)logger attachmentLocalFileURL:(id)url sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLSSLogger:(id)lsslogger agentsPerfLogger:(id)logger attachmentLocalFileURL:(id)url sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKeys:(id)keys attribution:(id)attribution privateReplyPayload:(id)payload localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKeys:(id)keys attribution:(id)attribution privateReplyPayload:(id)payload localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKeys:(id)keys attribution:(id)attribution privateReplyPayload:(id)payload localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendMessageContent:(id)content toThreadKeys:(id)keys attribution:(id)attribution privateReplyPayload:(id)payload localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently productType:(long long)type shouldCrosspost:(BOOL)crosspost;
- (void)sendStoryMentionMessageWithStory:(id)story reelPk:(id)pk mentionSharingEnabled:(BOOL)enabled toUsers:(id)users attribution:(id)attribution;
- (void)sendStoryMentionMessageWithStory:(id)story reelPk:(id)pk mentionSharingEnabled:(BOOL)enabled toUsers:(id)users attribution:(id)attribution;
- (void)sendPermanentPhotoWithImageEncoding:(id)encoding isForwarded:(BOOL)forwarded threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker replyMessagePk:(id)pk sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithImageEncoding:(id)encoding isForwarded:(BOOL)forwarded threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker replyMessagePk:(id)pk sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithAsset:(id)asset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithAsset:(id)asset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithAsset:(id)asset uploadId:(id)id previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithAsset:(id)asset uploadId:(id)id previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithMetaGalleryAsset:(id)asset uploadId:(id)id previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentPhotoWithMetaGalleryAsset:(id)asset uploadId:(id)id previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendSuperReshareMemeItWithAVAsset:(id)avasset previewImageEncoding:(id)encoding toThreadKeys:(id)keys attribution:(id)attribution extraPayloadParams:(id)params;
- (void)sendSuperReshareMemeItWithAVAsset:(id)avasset previewImageEncoding:(id)encoding toThreadKeys:(id)keys attribution:(id)attribution extraPayloadParams:(id)params;
- (void)sendPermanentVideoWithAVAsset:(id)avasset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution extraPayloadParams:(id)params privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithAVAsset:(id)avasset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution extraPayloadParams:(id)params privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithAsset:(id)asset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithAsset:(id)asset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithAsset:(id)asset uploadId:(id)id previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithAsset:(id)asset uploadId:(id)id previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithMetaGalleryAsset:(id)asset previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithMetaGalleryAsset:(id)asset uploadId:(id)id previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithMetaGalleryAsset:(id)asset uploadId:(id)id previewImageEncoding:(id)encoding threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker sessionId:(id)id mediaSelectedCount:(unsigned long long)count sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendPermanentVideoWithVideoURL:(id)url videoSize:(struct CGSize { double x0; double x1; })size previewImageEncoding:(id)encoding isForwarded:(BOOL)forwarded threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk;
- (void)sendPermanentVideoWithVideoURL:(id)url videoSize:(struct CGSize { double x0; double x1; })size previewImageEncoding:(id)encoding isForwarded:(BOOL)forwarded threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk;
- (void)sendPermanentVideoWithRenderableVideoVariant:(id)variant videoSize:(struct CGSize { double x0; double x1; })size videoDuration:(double)duration previewImageEncoding:(id)encoding isForwarded:(BOOL)forwarded threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk;
- (void)sendPermanentVideoWithRenderableVideoVariant:(id)variant videoSize:(struct CGSize { double x0; double x1; })size videoDuration:(double)duration previewImageEncoding:(id)encoding isForwarded:(BOOL)forwarded threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id replyMessagePk:(id)pk;
- (void)sendMediaPileWithItems:(id)items previewImageEncodings:(id)encodings threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendMediaPileWithItems:(id)items previewImageEncodings:(id)encodings threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendMediaPileWithAssets:(id)assets uploadId:(id)id previewImageEncodings:(id)encodings threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendMediaPileWithAssets:(id)assets uploadId:(id)id previewImageEncodings:(id)encodings threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (id)createUploadFlowForOptimisticUploadWithPersistentType:(long long)type;
- (id)createUploadFlowForOptimisticUploadWithPersistentType:(long long)type;
- (id)startOptimisticUploadForAsset:(id)asset optimisticUploadPostId:(id)id clientContext:(id)context assetIndex:(unsigned long long)index;
- (id)startOptimisticUploadForAsset:(id)asset optimisticUploadPostId:(id)id clientContext:(id)context assetIndex:(unsigned long long)index;
- (void)removeOptimisticallyUploadedMediaWithUploadId:(id)id forPostId:(id)id;
- (void)removeOptimisticallyUploadedMediaWithUploadId:(id)id forPostId:(id)id;
- (void)removePendingSessionForPostId:(id)id;
- (void)removePendingSessionForPostId:(id)id;
- (void)sendSharedAlbumWithAssets:(id)assets previewImageEncodings:(id)encodings threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker originalMessageClientContext:(id)context originalMessageId:(id)id sharedAlbumId:(id)id actionType:(unsigned long long)type;
- (void)sendSharedAlbumWithAssets:(id)assets previewImageEncodings:(id)encodings threadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker originalMessageClientContext:(id)context originalMessageId:(id)id sharedAlbumId:(id)id actionType:(unsigned long long)type;
- (void)sendAnimatedMediaWithLocalFileURL:(id)url previewImageData:(id)data size:(struct CGSize { double x0; double x1; })size isSticker:(BOOL)sticker threadKey:(id)key attribution:(id)attribution effectId:(id)id quotedPublishedMessage:(id)message animatedMediaInfo:(id)info foaLocalSendSpeedLogger:(id)logger;
- (void)sendAnimatedMediaWithLocalFileURL:(id)url previewImageData:(id)data size:(struct CGSize { double x0; double x1; })size isSticker:(BOOL)sticker threadKey:(id)key attribution:(id)attribution effectId:(id)id quotedPublishedMessage:(id)message animatedMediaInfo:(id)info foaLocalSendSpeedLogger:(id)logger;
- (void)sendAvatarStickerWithLocalFileURL:(id)url previewImageData:(id)data size:(struct CGSize { double x0; double x1; })size isAnimated:(BOOL)animated isSocial:(BOOL)social threadKey:(id)key attribution:(id)attribution threadParticipantIds:(id)ids stickerTemplate:(id)template stickerId:(id)id effectId:(id)id quotedPublishedMessage:(id)message isAvatarSticker:(BOOL)sticker;
- (void)sendAvatarStickerWithLocalFileURL:(id)url previewImageData:(id)data size:(struct CGSize { double x0; double x1; })size isAnimated:(BOOL)animated isSocial:(BOOL)social threadKey:(id)key attribution:(id)attribution threadParticipantIds:(id)ids stickerTemplate:(id)template stickerId:(id)id effectId:(id)id quotedPublishedMessage:(id)message isAvatarSticker:(BOOL)sticker;
- (void)sendThirdPartyAnimatedMediaWithModel:(id)model isRandom:(BOOL)random quotedMessage:(id)message threadKey:(id)key localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger attribution:(id)attribution;
- (void)sendThirdPartyAnimatedMediaWithModel:(id)model isRandom:(BOOL)random quotedMessage:(id)message threadKey:(id)key localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger attribution:(id)attribution;
- (void)sendAudioWithURL:(id)url waveform:(id)waveform duration:(double)duration threadKey:(id)key attribution:(id)attribution e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendAudioWithURL:(id)url waveform:(id)waveform duration:(double)duration threadKey:(id)key attribution:(id)attribution e2eloggerLogId:(id)id replyMessagePk:(id)pk quotedPublishedMessage:(id)message messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker foaLocalSendSpeedLogger:(id)logger sendSilently:(BOOL)silently shouldCrosspost:(BOOL)crosspost;
- (void)sendLinkMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker agentsPerfLogger:(id)logger sendSilently:(BOOL)silently productType:(long long)type;
- (void)sendLinkMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution privateReplyPayload:(id)payload e2eloggerLogId:(id)id messageSentSpeedLogger:(id)logger messageSentSpeedMarker:(id)marker localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker agentsPerfLogger:(id)logger sendSilently:(BOOL)silently productType:(long long)type;
- (void)cancelMessageSendWithMessageKey:(id)key messageContentTypeString:(id)string threadKey:(id)key isInstamadillo:(BOOL)instamadillo;
- (void)cancelMessageSendWithMessageKey:(id)key messageContentTypeString:(id)string threadKey:(id)key isInstamadillo:(BOOL)instamadillo;
- (void)manuallyRetryMessageSendWithMessageKey:(id)key messageContentTypeString:(id)string threadKey:(id)key isInstamadillo:(BOOL)instamadillo;
- (void)manuallyRetryMessageSendWithMessageKey:(id)key messageContentTypeString:(id)string threadKey:(id)key isInstamadillo:(BOOL)instamadillo;
- (void)sendForwardedMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution sendSilently:(BOOL)silently productType:(long long)type;
- (void)sendForwardedMessageContent:(id)content toThreadKey:(id)key attribution:(id)attribution sendSilently:(BOOL)silently productType:(long long)type;
- (void)forwardSecureMessageWithMessageId:(long long)id threadKey:(id)key attribution:(id)attribution additionalText:(id)text e2eloggerLogId:(id)id productType:(long long)type;
- (void)forwardSecureMessageWithMessageId:(long long)id threadKey:(id)key attribution:(id)attribution additionalText:(id)text e2eloggerLogId:(id)id productType:(long long)type;
- (void)sendDirectNoteReplyWithNote:(id)note author:(id)author threadKey:(id)key noteReplyText:(id)text attribution:(id)attribution;
- (void)sendDirectNoteReplyWithNote:(id)note author:(id)author threadKey:(id)key noteReplyText:(id)text attribution:(id)attribution;
- (void)sendContentNoteReplyWithNote:(id)note media:(id)media threadKey:(id)key noteReplyText:(id)text attribution:(id)attribution;
- (void)sendContentNoteReplyWithNote:(id)note media:(id)media threadKey:(id)key noteReplyText:(id)text attribution:(id)attribution;
- (void)sendContentNoteMentionWithNote:(id)note media:(id)media threadKey:(id)key attribution:(id)attribution targetURL:(id)url mentionedUserUsername:(id)username;
- (void)sendContentNoteMentionWithNote:(id)note media:(id)media threadKey:(id)key attribution:(id)attribution targetURL:(id)url mentionedUserUsername:(id)username;
- (void)sendMentionMessageContent:(id)content threadKey:(id)key attribution:(id)attribution;
- (void)sendLiveInviteMessageContent:(id)content threadKey:(id)key attribution:(id)attribution isCutoverThreadCompletion:(id /* block */)completion;
- (void)sendLiveInviteMessageContent:(id)content threadKey:(id)key attribution:(id)attribution isCutoverThreadCompletion:(id /* block */)completion;
- (void)sendEditMessageWithThreadPk:(id)pk messageId:(id)id editText:(id)text;
- (void)sendEditMessageWithThreadPk:(id)pk messageId:(id)id editText:(id)text;
- (void)addListener:(id)listener;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGDirectMessageSending_Protocol_h */