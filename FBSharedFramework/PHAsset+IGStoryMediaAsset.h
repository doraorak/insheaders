//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PHAsset_IGStoryMediaAsset_h
#define PHAsset_IGStoryMediaAsset_h
@import Foundation;

@interface PHAsset (IGStoryMediaAsset) <IGStoryMediaAsset>
/* instance methods */
- (struct CGSize { double x0; double x1; })mediaSize;
- (long long)assetType;
- (double)videoDuration;
- (id)miscAttribution;
- (void)fetchImageOfSize:(struct CGSize { double x0; double x1; })size atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time resultHandler:(id /* block */)handler;
- (void)fetchVideoWithUserSession:(id)session resultHandler:(id /* block */)handler;
- (void)fetchMediaSourceWithUserSession:(id)session igglkSession:(id)session metadata:(id)metadata completion:(id /* block */)completion;
@end

#endif /* PHAsset_IGStoryMediaAsset_h */