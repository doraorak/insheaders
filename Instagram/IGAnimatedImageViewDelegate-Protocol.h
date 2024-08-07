//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnimatedImageViewDelegate_Protocol_h
#define IGAnimatedImageViewDelegate_Protocol_h
@import Foundation;

@protocol IGAnimatedImageViewDelegate <NSObject>
/* instance methods */
- (void)animatedImageView:(id)view didUpdateDownloadProgress:(double)progress source:(long long)source;
- (void)animatedImageViewDidLoadImage:(id)image;
- (void)animatedImageViewDidStartPlayingLoop:(id)loop;
- (void)animatedImageViewWillEndPlayingLoop:(id)loop;
- (void)animatedImageViewDidEndPlayingLoop:(id)loop;
@end

#endif /* IGAnimatedImageViewDelegate_Protocol_h */
