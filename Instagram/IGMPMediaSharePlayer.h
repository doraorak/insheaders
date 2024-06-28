//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMPMediaSharePlayer_h
#define IGMPMediaSharePlayer_h
@import Foundation;

#include "FBMPFilter-Protocol.h"
#include "FBMPPermissiveOutput-Protocol.h"
#include "IGMediaSharePlayerProtocol-Protocol.h"

@class FBMPBaseConsumerPort, FBMPBaseProducerPort, NSArray, NSString;

@interface IGMPMediaSharePlayer : NSObject<FBMPFilter, FBMPPermissiveOutput> {
  /* instance variables */
  FBMPBaseConsumerPort *_videoConsumerPort;
  FBMPBaseProducerPort *_videoProducerPort;
  FBMPBaseConsumerPort *_audioConsumerPort;
  FBMPBaseProducerPort *_audioProducerPort;
  FBMPBaseConsumerPort *_platformAlgorithmDataConsumerPort;
  FBMPBaseProducerPort *_platformAlgorithmDataProducerPort;
}

@property (readonly, nonatomic) NSObject<IGMediaSharePlayerProtocol> *mediaSharePlayer;
@property (readonly, copy, nonatomic) NSArray *producerPorts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMediaSharePlayer:(id)player;
- (void)sessionConnectedPort:(id)port context:(id)context;
- (void)sessionDisconnectedPort:(id)port context:(id)context;
- (void)sessionWillStart:(id)start;
- (void)sessionWillStop:(id)stop;
- (void)sessionWillStop:(id)stop stopAudio:(BOOL)audio;
- (void)invalidate;
- (id)consumerPorts;
- (BOOL)allowsConnectionsWithConsumerPortMapping:(id)mapping;
@end

#endif /* IGMPMediaSharePlayer_h */
