//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaSource_MediaSource_h
#define METAMediaSource_MediaSource_h
@import Foundation;

@interface METAMediaSource (MediaSource)
/* instance methods */
- (void)makeAVAssetSetWithCompletionHandler:(id /* block */)handler;
- (void)makeAVAssetSetWithRenderDelegate:(<_TtP11MediaSource25MediaSourceRenderDelegate_> *)delegate options:(_TtC11MediaSource28MediaSourceAVAssetSetOptions *)options completionHandler:(id /* block */)handler;
- (void)makeAVAssetSetWithRenderQueue:(OS_dispatch_queue *)queue renderDelegate:(<_TtP11MediaSource25MediaSourceRenderDelegate_> *)delegate options:(_TtC11MediaSource28MediaSourceAVAssetSetOptions *)options completionHandler:(id /* block */)handler;
@end

#endif /* METAMediaSource_MediaSource_h */
