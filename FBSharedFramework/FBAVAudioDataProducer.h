//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAVAudioDataProducer_h
#define FBAVAudioDataProducer_h
@import Foundation;

#include "FBCameraAudioLevelListenerAnnouncer.h"
#include "FBLazyCreator.h"
#include "FBMPBaseProducerPort.h"

@interface FBAVAudioDataProducer : NSObject {
  /* instance variables */
  FBLazyCreator *_audioLevelAnnouncerCreator;
  unsigned long long _dataCounter;
}

@property (readonly, nonatomic) FBCameraAudioLevelListenerAnnouncer *audioLevelAnnouncer;
@property (readonly, nonatomic) FBMPBaseProducerPort *producerPort;

/* class methods */
+ (id)newWithProducerPort:(id)port;

/* instance methods */
- (id)initWithProducerPort:(id)port;
@end

#endif /* FBAVAudioDataProducer_h */