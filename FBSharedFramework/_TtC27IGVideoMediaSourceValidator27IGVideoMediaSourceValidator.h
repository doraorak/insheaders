//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGVideoMediaSourceValidator27IGVideoMediaSourceValidator_h
#define _TtC27IGVideoMediaSourceValidator27IGVideoMediaSourceValidator_h
@import Foundation;

@class IGMediaQualityMeter *, IGVideoComposition *, METAMediaSource *, NSString *;

@interface _TtC27IGVideoMediaSourceValidator27IGVideoMediaSourceValidator : NSObject // (Swift)
/* class methods */
+ (void)validateWithMediaSource:(METAMediaSource *)source renderSize:(struct CGSize { double x0; double x1; })size videoComposition:(IGVideoComposition *)composition qualityMeter:(IGMediaQualityMeter *)meter mediaId:(NSString *)id logger:(<_TtP27IGVideoMediaSourceValidator34IGVideoMediaSourceValidatorLogging_> *)logger checkSSIM:(BOOL)ssim completionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
@end

#endif /* _TtC27IGVideoMediaSourceValidator27IGVideoMediaSourceValidator_h */