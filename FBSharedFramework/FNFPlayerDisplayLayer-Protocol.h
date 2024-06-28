//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFPlayerDisplayLayer_Protocol_h
#define FNFPlayerDisplayLayer_Protocol_h
@import Foundation;

@protocol FNFPlayerDisplayLayer <FNFAVPlayerLayer>

@property (weak, nonatomic) NSObject<FNFPlayerDisplayLayerDelegate> *displayLayerDelegate;
@property (nonatomic) BOOL layoutChanged;

/* instance methods */
- (BOOL)displayPixelBuffer:(struct __CVBuffer *)buffer framePts:(struct { long long x0; int x1; unsigned int x2; long long x3; })pts duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)reset;
- (void)flush;
- (BOOL)supportsHDR;
@end

#endif /* FNFPlayerDisplayLayer_Protocol_h */