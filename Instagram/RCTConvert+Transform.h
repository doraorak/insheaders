//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTConvert_Transform_h
#define RCTConvert_Transform_h
@import Foundation;

@interface RCTConvert (Transform)
/* class methods */
+ (double)convertToRadians:(id)radians;
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })CATransform3DFromMatrix:(id)matrix;
+ (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })CATransform3D:(id)d;
+ (struct { struct YGValue { float x0; int x1; } x0; struct YGValue { float x0; int x1; } x1; double x2; })RCTTransformOrigin:(id)origin;
@end

#endif /* RCTConvert_Transform_h */