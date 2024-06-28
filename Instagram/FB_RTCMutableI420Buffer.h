//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCMutableI420Buffer_h
#define FB_RTCMutableI420Buffer_h
@import Foundation;

#include "FB_RTCI420Buffer.h"
#include "FB_RTCMutableI420Buffer-Protocol.h"

@class NSString;

@interface FB_RTCMutableI420Buffer : FB_RTCI420Buffer<FB_RTCMutableI420Buffer>

@property (readonly, nonatomic) int chromaWidth;
@property (readonly, nonatomic) int chromaHeight;
@property (readonly, nonatomic) const char * dataY;
@property (readonly, nonatomic) const char * dataU;
@property (readonly, nonatomic) const char * dataV;
@property (readonly, nonatomic) int strideY;
@property (readonly, nonatomic) int strideU;
@property (readonly, nonatomic) int strideV;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char * mutableDataY;
@property (readonly, nonatomic) char * mutableDataU;
@property (readonly, nonatomic) char * mutableDataV;

@end

#endif /* FB_RTCMutableI420Buffer_h */
