//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCMTLRenderer_Protocol_h
#define FB_RTCMTLRenderer_Protocol_h
@import Foundation;

#include "FB_RTCMTLRenderer-Protocol.h"
#include "MTLCommandQueue-Protocol.h"
#include "MTLDevice-Protocol.h"

@class MTKView, NSString, NSValue;
@protocol MTLBuffer, MTLLibrary, MTLRenderPipelineState, OS_dispatch_semaphore;

@protocol FB_RTCMTLRenderer <NSObject>

@property (copy) id /* block */ errorCallback;

/* instance methods */
- (void)initErrorCallback:(id)callback;
- (void)drawFrame:(id)frame;
- (BOOL)addRenderingDestination:(id)destination;
@end

#endif /* FB_RTCMTLRenderer_Protocol_h */