//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ImageSourceSurface_Protocol_h
#define ImageSourceSurface_Protocol_h
@import Foundation;

@protocol ImageSourceSurface 

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, copy, nonatomic) NSArray *textures;
@property (readonly, nonatomic) struct __CVBuffer * pixelBuffer;
@property (readonly, nonatomic) struct CGColorSpace * colorSpace;
@property (readonly, nonatomic) BOOL alphaIsPremultiplied;
@property (readonly, copy, nonatomic) NSString *label;

@end

#endif /* ImageSourceSurface_Protocol_h */