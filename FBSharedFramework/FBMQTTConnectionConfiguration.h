//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTConnectionConfiguration_h
#define FBMQTTConnectionConfiguration_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface FBMQTTConnectionConfiguration : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *mqttHostName;
@property (readonly, copy, nonatomic) NSString *mqttFallbackHostName;
@property (readonly, copy, nonatomic) NSNumber *mqttPort;
@property (readonly, copy, nonatomic) NSString *mqttDeliverySandboxHostName;
@property (readonly, nonatomic) BOOL SSLDisabled;
@property (readonly, nonatomic) BOOL encodingDisabled;
@property (readonly, nonatomic) BOOL credentialHashDisabled;
@property (readonly, copy, nonatomic) NSString *h2PubSubHostName;
@property (readonly, copy, nonatomic) NSNumber *h2PubSubPort;
@property (readonly, nonatomic) BOOL h2PubSubSSLDisabled;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMqttHostName:(id)name mqttFallbackHostName:(id)name mqttPort:(id)port mqttDeliverySandboxHostName:(id)name SSLDisabled:(BOOL)ssldisabled encodingDisabled:(BOOL)disabled credentialHashDisabled:(BOOL)disabled h2PubSubHostName:(id)name h2PubSubPort:(id)port h2PubSubSSLDisabled:(BOOL)ssldisabled;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBMQTTConnectionConfiguration_h */
