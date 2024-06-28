//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP36IGDirectVisualAsPermanentMediaSender36IGDirectVisualAsPermanentMediaSender__Protocol_h
#define _TtP36IGDirectVisualAsPermanentMediaSender36IGDirectVisualAsPermanentMediaSender__Protocol_h
@import Foundation;

@protocol _TtP36IGDirectVisualAsPermanentMediaSender36IGDirectVisualAsPermanentMediaSender_ 
/* instance methods */
- (void)sendVideoAsPermanentMediaWithPreviewImage:(id)image videoVariant:(id)variant videoDuration:(double)duration attribution:(id)attribution threadKeys:(id)keys replyMessageId:(id)id shouldUploadViaMessengerInfra:(BOOL)infra shouldUseOptimisticVideoRendering:(BOOL)rendering localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker;
- (void)sendImageAsPermanentMediaWithImage:(id)image usePJPEG:(BOOL)pjpeg attribution:(id)attribution threadKeys:(id)keys replyMessageId:(id)id localSendSpeedLogger:(id)logger localSendSpeedMarker:(id)marker;
@end

#endif /* _TtP36IGDirectVisualAsPermanentMediaSender36IGDirectVisualAsPermanentMediaSender__Protocol_h */
