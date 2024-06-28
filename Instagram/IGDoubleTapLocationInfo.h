//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDoubleTapLocationInfo_h
#define IGDoubleTapLocationInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface IGDoubleTapLocationInfo : NSObject<NSCopying> {
  /* instance variables */
  struct CGSize { double width; double height; } _contentAreaSize;
  struct CGPoint { double x; double y; } _locationInContentArea;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaSize;

/* instance methods */
- (id)initWithMediaSize:(struct CGSize { double x0; double x1; })size contentAreaSize:(struct CGSize { double x0; double x1; })size locationInContentArea:(struct CGPoint { double x0; double x1; })area;
- (id)analyticsExtras;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGDoubleTapLocationInfo_h */
