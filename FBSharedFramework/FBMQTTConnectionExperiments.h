//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTConnectionExperiments_h
#define FBMQTTConnectionExperiments_h
@import Foundation;

#include "FBValueObject.h"
#include "FBMQTTKeepAliveConfig.h"
#include "FBMQTTPersonalizationConfig.h"
#include "FBMQTTSchedulingConfig.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface FBMQTTConnectionExperiments : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) BOOL enableMqttConnection;
@property (readonly, nonatomic) BOOL shouldShareEventBase;
@property (readonly, nonatomic) BOOL enableEndpointRewriting;
@property (readonly, copy, nonatomic) FBMQTTKeepAliveConfig *keepAliveConfig;
@property (readonly, copy, nonatomic) FBMQTTSchedulingConfig *schedulingConfig;
@property (readonly, copy, nonatomic) FBMQTTPersonalizationConfig *personalizationConfig;
@property (readonly, nonatomic) BOOL disconnectBeforeConnectErrorReturn;
@property (readonly, nonatomic) BOOL enableRegionHint;
@property (readonly, nonatomic) BOOL enableQPL;
@property (readonly, nonatomic) BOOL enableMqttFallbackDomain;
@property (readonly, nonatomic) long long numFailuresForFallback;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithEnableMqttConnection:(BOOL)connection shouldShareEventBase:(BOOL)base enableEndpointRewriting:(BOOL)rewriting keepAliveConfig:(id)config schedulingConfig:(id)config personalizationConfig:(id)config disconnectBeforeConnectErrorReturn:(BOOL)return enableRegionHint:(BOOL)hint enableQPL:(BOOL)qpl enableMqttFallbackDomain:(BOOL)domain numFailuresForFallback:(long long)fallback;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBMQTTConnectionExperiments_h */