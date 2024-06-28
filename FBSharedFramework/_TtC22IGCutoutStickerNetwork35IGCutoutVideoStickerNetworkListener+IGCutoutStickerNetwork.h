//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGCutoutStickerNetwork35IGCutoutVideoStickerNetworkListener_IGCutoutStickerNetwork_h
#define _TtC22IGCutoutStickerNetwork35IGCutoutVideoStickerNetworkListener_IGCutoutStickerNetwork_h
@import Foundation;

@interface _TtC22IGCutoutStickerNetwork35IGCutoutVideoStickerNetworkListener (IGCutoutStickerNetwork) <IGPostSessionListener>
/* instance methods */
- (void)postSession:(id)session didUpdateUploadStatus:(long long)status error:(id)error;
- (void)postSession:(id)session didUpdateUploadProgress:(double)progress;
- (void)postSession:(id)session didRenderVideoAtURL:(id)url;
- (void)postSessionDidSuspendVideoProcessing:(id)processing;
@end

#endif /* _TtC22IGCutoutStickerNetwork35IGCutoutVideoStickerNetworkListener_IGCutoutStickerNetwork_h */
