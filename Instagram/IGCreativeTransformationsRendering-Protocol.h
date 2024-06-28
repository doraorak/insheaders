//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreativeTransformationsRendering_Protocol_h
#define IGCreativeTransformationsRendering_Protocol_h
@import Foundation;

@protocol IGCreativeTransformationsRendering <NSObject, IGCreativeTransformationsPlayback>

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) BOOL userInteractionEnabled;
@property (nonatomic, copy) id /* block */ onLoadCompletionBlock;
@property (nonatomic, weak) NSObject<IGCreativeTransformationsRenderingDelegate> *delegate;

/* instance methods */
- (void)prepareForPlayback;
- (void)reload;
- (void)playWithDelay:(double)delay;
- (void)playWithDelay:(double)delay;
- (void)setAudioEnabled:(BOOL)enabled forReason:(long long)reason;
- (void)setAudioEnabled:(BOOL)enabled forReason:(long long)reason;
- (void)updateProductsIndexAfterShuffle:(long long)shuffle;
- (void)updateProductsIndexAfterShuffle:(long long)shuffle;
- (double)duration;
@end

#endif /* IGCreativeTransformationsRendering_Protocol_h */
