//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaSourceStickerViewType_Protocol_h
#define IGMediaSourceStickerViewType_Protocol_h
@import Foundation;

@protocol IGMediaSourceStickerViewType <IGStickerViewType>

@property (readonly, nonatomic) BOOL requiresMediaSource;

/* instance methods */
- (id)mediaSourceWithCompositionSize:(struct CGSize { double x0; double x1; })size outputSize:(struct CGSize { double x0; double x1; })size maxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration featureSets:(id)sets;
@end

#endif /* IGMediaSourceStickerViewType_Protocol_h */