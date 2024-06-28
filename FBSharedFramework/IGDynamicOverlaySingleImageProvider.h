//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDynamicOverlaySingleImageProvider_h
#define IGDynamicOverlaySingleImageProvider_h
@import Foundation;

#include "IGDynamicOverlayImageProvider.h"

@class NSError, UIImage;

@interface IGDynamicOverlaySingleImageProvider : IGDynamicOverlayImageProvider {
  /* instance variables */
  UIImage *_image;
  BOOL _supportsHDR;
  NSError *_error;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image supportsHDR:(BOOL)hdr error:(id)error;
- (id)imageForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (BOOL)supportsHDR;
- (BOOL)isDynamic;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)error;
@end

#endif /* IGDynamicOverlaySingleImageProvider_h */
