//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METACTAutoDuckEffectAudioPostProcessorRenderer_h
#define METACTAutoDuckEffectAudioPostProcessorRenderer_h
@import Foundation;

#include "CTAutoDuckProcessor.h"
#include "METAAudioEffectRenderer-Protocol.h"

@class NSString;

@interface METACTAutoDuckEffectAudioPostProcessorRenderer : NSObject<METAAudioEffectRenderer> {
  /* instance variables */
  CTAutoDuckProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initProcessor:(id)processor;
- (void)configRendererForAudioStreamBasicDescription:(const struct AudioStreamBasicDescription *)description maxFrames:(long long)frames;
- (void)processAudioBufferList:(struct AudioBufferList *)list numberOfFrames:(long long)frames;
@end

#endif /* METACTAutoDuckEffectAudioPostProcessorRenderer_h */