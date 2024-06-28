//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMOSImageRequest_h
#define IGMOSImageRequest_h
@import Foundation;

#include "MOSImageRequest.h"
#include "MOSImageDownloading-Protocol.h"

@interface IGMOSImageRequest : MOSImageRequest {
  /* instance variables */
  NSObject<MOSImageDownloading> *_downloader;
}

@property (copy, nonatomic) id /* block */ imageCompletionBlock;
@property (copy, nonatomic) id /* block */ imageProgressBlock;
@property (copy, nonatomic) id /* block */ previewCompletionBlock;

/* instance methods */
- (id)initWithURL:(id)url downloader:(id)downloader cacheBehavior:(unsigned long long)behavior fetchBehavior:(unsigned long long)behavior imageFetchPriority:(long long)priority shouldBackgroundDecodeImage:(BOOL)image module:(id)module previewPayload:(id)payload previewSize:(struct CGSize { double x0; double x1; })size isSponsored:(BOOL)sponsored adaptiveQueryComponents:(id)components imageProcessor:(id)processor imageCompletionBlock:(id /* block */)block progressiveImageCompletionBlock:(id /* block */)block previewCompletionBlock:(id /* block */)block animatedImageCompletionBlock:(id /* block */)block imageProgressBlock:(id /* block */)block;
- (void)begin;
- (void)cancel;
@end

#endif /* IGMOSImageRequest_h */