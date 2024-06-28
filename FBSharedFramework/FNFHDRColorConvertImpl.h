//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFHDRColorConvertImpl_h
#define FNFHDRColorConvertImpl_h
@import Foundation;

#include "FBCCHDRColorConvert.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface FNFHDRColorConvertImpl : NSObject<NSObject> {
  /* instance variables */
  FBCCHDRColorConvert *_hdrColorConvert;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (struct __CVBuffer *)applyToPixelBuffer:(struct __CVBuffer *)buffer configurations:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct CGSize { double x0; double x1; } x1; })configurations;
@end

#endif /* FNFHDRColorConvertImpl_h */
