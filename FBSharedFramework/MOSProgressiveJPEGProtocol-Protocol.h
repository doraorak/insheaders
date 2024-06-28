//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MOSProgressiveJPEGProtocol_Protocol_h
#define MOSProgressiveJPEGProtocol_Protocol_h
@import Foundation;

@protocol MOSProgressiveJPEGProtocol <NSObject>
/* instance methods */
- (id)updateBytes:(id)bytes;
- (id)getBestImageWithNewBytes:(id)bytes;
- (struct { struct CGImage * x0; BOOL x1; struct CGSize { double x0; double x1; } x2; })createImageByReplacingSOSForScanNumber:(unsigned long long)number fromData:(id)data;
- (unsigned long long)getBestScanNumber;
- (BOOL)isFullyLoaded;
@end

#endif /* MOSProgressiveJPEGProtocol_Protocol_h */