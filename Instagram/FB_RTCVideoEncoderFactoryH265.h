//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCVideoEncoderFactoryH265_h
#define FB_RTCVideoEncoderFactoryH265_h
@import Foundation;

#include "FB_RTCVideoEncoderFactory-Protocol.h"

@class NSString;

@interface FB_RTCVideoEncoderFactoryH265 : NSObject<FB_RTCVideoEncoderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)NonCachedIsH265CodecSupported;
+ (BOOL)IsH265CodecSupported;

/* instance methods */
- (id)supportedCodecs;
- (id)createEncoder:(id)encoder;
@end

#endif /* FB_RTCVideoEncoderFactoryH265_h */