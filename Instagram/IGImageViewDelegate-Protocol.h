//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageViewDelegate_Protocol_h
#define IGImageViewDelegate_Protocol_h
@import Foundation;

@protocol IGImageViewDelegate <IGImageViewListener>
/* instance methods */
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
@end

#endif /* IGImageViewDelegate_Protocol_h */
