//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTranscoderConfig_h
#define IGTranscoderConfig_h
@import Foundation;

#include "IGAudioConfig.h"
#include "IGSegmentsConfig.h"
#include "IGTranscoderFrameRequest.h"
#include "IGVideoConfig.h"

@interface IGTranscoderConfig : NSObject

@property (readonly, nonatomic) IGSegmentsConfig *segmentsConfig;
@property (readonly, nonatomic) IGVideoConfig *videoConfig;
@property (readonly, nonatomic) IGAudioConfig *audioConfig;
@property (readonly, nonatomic) IGTranscoderFrameRequest *frameRequest;

/* instance methods */
- (id)initWithSegmentsConfig:(id)config videoConfig:(id)config audioConfig:(id)config frameRequest:(id)request;
@end

#endif /* IGTranscoderConfig_h */