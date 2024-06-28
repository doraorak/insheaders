//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTAnimatedImage_Protocol_h
#define RCTAnimatedImage_Protocol_h
@import Foundation;

#include "UIImage.h"
#include "RCTAnimatedImage-Protocol.h"

@class NSArray, NSString;

@protocol RCTAnimatedImage <NSObject>

@property (readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property (readonly, nonatomic) unsigned long long animatedImageLoopCount;

/* instance methods */
- (id)animatedImageFrameAtIndex:(unsigned long long)index;
- (double)animatedImageDurationAtIndex:(unsigned long long)index;
@end

#endif /* RCTAnimatedImage_Protocol_h */