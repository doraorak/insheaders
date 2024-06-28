//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBUnifiedUploadMosClientSideProvider_h
#define FBUnifiedUploadMosClientSideProvider_h
@import Foundation;

@interface FBUnifiedUploadMosClientSideProvider : NSObject
/* class methods */
+ (struct { double x0; id x1; })calculateUnifiedUploadMosClientSideScoreWithFeatures:(struct { BOOL x0; BOOL x1; BOOL x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; })features coefficients:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })coefficients;
+ (struct { double x0; id x1; })calculateUnifiedUploadMosClientSideV2ScoreWithFeatures:(struct { BOOL x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; double x9; })features coefficients:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })coefficients;
@end

#endif /* FBUnifiedUploadMosClientSideProvider_h */