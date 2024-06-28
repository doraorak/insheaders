//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCVideoDecoderFactoryAV1_h
#define FB_RTCVideoDecoderFactoryAV1_h
@import Foundation;

#include "FB_RTCVideoDecoderFactory-Protocol.h"

@class NSString;

@interface FB_RTCVideoDecoderFactoryAV1 : NSObject<FB_RTCVideoDecoderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)createDecoder:(id)decoder;
- (id)supportedCodecs;
@end

#endif /* FB_RTCVideoDecoderFactoryAV1_h */
