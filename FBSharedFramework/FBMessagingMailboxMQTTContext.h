//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMessagingMailboxMQTTContext_h
#define FBMessagingMailboxMQTTContext_h
@import Foundation;

@class NSMutableDictionary, NSNotificationCenter;
@protocol FBMQTTInterface;

@interface FBMessagingMailboxMQTTContext : NSObject {
  /* instance variables */
  NSNotificationCenter *_center;
  id /* block */ _mqttInterfaceProvider;
  NSMutableDictionary *_tokenToPublisher;
  undefined * _rtMQTTListener;
  id _rtmqttListenerContext;
  NSMutableDictionary *_topicToMqttListener;
}

@property (readonly, nonatomic) NSObject<FBMQTTInterface> *mqttInterface;

/* instance methods */
- (id)initWithNotificationCenter:(id)center mqttInterfaceProvider:(id /* block */)provider;
- (void)_mqttConnectStatusDidChange:(id)change;
- (void)removePublisher:(unsigned long long)publisher;
- (id)topicToMqttListener;
- (void)deallocCleanUp;
- (void)dealloc;
@end

#endif /* FBMessagingMailboxMQTTContext_h */