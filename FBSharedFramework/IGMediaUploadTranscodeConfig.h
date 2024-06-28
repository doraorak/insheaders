//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaUploadTranscodeConfig_h
#define IGMediaUploadTranscodeConfig_h
@import Foundation;

#include "IGAudioConfig.h"
#include "IGSegmentsConfig.h"
#include "IGVideoConfig.h"
#include "IGVideoRenderSource.h"
#include "IGVideoTranscodeOptions.h"

@class NSString;

@interface IGMediaUploadTranscodeConfig : NSObject

@property (readonly, nonatomic) IGVideoTranscodeOptions *transcodeOptions;
@property (readonly, nonatomic) IGVideoRenderSource *source;
@property (readonly, nonatomic) IGVideoConfig *videoConfig;
@property (readonly, nonatomic) IGAudioConfig *audioConfig;
@property (readonly, nonatomic) IGSegmentsConfig *segmentsConfig;
@property (readonly, nonatomic) NSString *mediaID;
@property (readonly, nonatomic) NSString *uploadID;

/* instance methods */
- (id)initWithTranscodeOptions:(id)options source:(id)source videoConfig:(id)config audioConfig:(id)config segmentsConfig:(id)config mediaID:(id)id uploadID:(id)id;
@end

#endif /* IGMediaUploadTranscodeConfig_h */