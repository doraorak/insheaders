//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShowreelNativeControllerBuilder_h
#define IGShowreelNativeControllerBuilder_h
@import Foundation;

#include "ShowreelBuilder.h"

@class FBWeakObjectContainer, IGAdsAudioLogger, IGCreativeAudioData, IGUserSession;

@interface IGShowreelNativeControllerBuilder : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  FBWeakObjectContainer *_navigationController;
  IGCreativeAudioData *_audioData;
  IGAdsAudioLogger *_logger;
  ShowreelBuilder *_builder;
}

/* instance methods */
- (id)initWithShowreelNativeInfo:(id)info userSession:(id)session navigationController:(id)controller placement:(unsigned long long)placement module:(id)module loggingInfo:(id)info customLoggingInfo:(id)info options:(id)options audioData:(id)data logger:(id)logger;
- (id)build;
@end

#endif /* IGShowreelNativeControllerBuilder_h */