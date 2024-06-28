//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARNetworkPolicyConfiguration_h
#define FBARNetworkPolicyConfiguration_h
@import Foundation;

#include "FBARServiceConfigurationCxx-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol struct shared_ptr<arfx::services::IServiceConfiguration> { struct IServiceConfiguration * x0; struct __shared_weak_count * x1; }, struct shared_ptr<msqrd::logging::IRawEventLogger> { struct IRawEventLogger * x0; struct __shared_weak_count * x1; }, struct shared_ptr<msqrd::services::network::INetworkConsentManager> { struct INetworkConsentManager * x0; struct __shared_weak_count * x1; }, {shared_ptr<msqrd::logging::IRawEventLogger>="__ptr_"^{IRawEventLogger}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<msqrd::services::network::INetworkConsentManager>="__ptr_"^{INetworkConsentManager}"__cntrl_"^{__shared_weak_count}};

@interface FBARNetworkPolicyConfiguration : NSObject<FBARServiceConfigurationCxx, NSSecureCoding>

@property (readonly, nonatomic) NSString *effectCacheKey;
@property (readonly, nonatomic) long long initialRequests;
@property (readonly, nonatomic) long long additionalRequests;
@property (readonly, nonatomic) long long additionalRequestsForSeconds;
@property (readonly, nonatomic) long long simultaneousRequestsCap;
@property (readonly, nonatomic) long long maxRequestsCapAtAGivenTime;
@property (readonly, nonatomic) BOOL networkConsentRequired;
@property (readonly, nonatomic) struct shared_ptr<msqrd::services::network::INetworkConsentManager> { struct INetworkConsentManager * x0; struct __shared_weak_count * x1; } networkConsentManager;
@property (readonly, nonatomic) struct shared_ptr<msqrd::logging::IRawEventLogger> { struct IRawEventLogger * x0; struct __shared_weak_count * x1; } logger;
@property (readonly, nonatomic) struct ServiceType { int x0; } serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct shared_ptr<arfx::services::IServiceConfiguration> { struct IServiceConfiguration * x0; struct __shared_weak_count * x1; } engineServiceConfiguration;

/* class methods */
+ (id)newWithEffectCacheKey:(id)key initialRequests:(long long)requests additionalRequests:(long long)requests additionalRequestsForSeconds:(long long)seconds simultaneousRequestsCap:(long long)cap maxRequestsCapAtAGivenTime:(long long)time networkConsentRequired:(BOOL)required networkConsentManager:(struct shared_ptr<msqrd::services::network::INetworkConsentManager> { struct INetworkConsentManager * x0; struct __shared_weak_count * x1; })manager logger:(struct shared_ptr<msqrd::logging::IRawEventLogger> { struct IRawEventLogger * x0; struct __shared_weak_count * x1; })logger;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEffectCacheKey:(id)key initialRequests:(long long)requests additionalRequests:(long long)requests additionalRequestsForSeconds:(long long)seconds simultaneousRequestsCap:(long long)cap maxRequestsCapAtAGivenTime:(long long)time networkConsentRequired:(BOOL)required networkConsentManager:(struct shared_ptr<msqrd::services::network::INetworkConsentManager> { struct INetworkConsentManager * x0; struct __shared_weak_count * x1; })manager logger:(struct shared_ptr<msqrd::logging::IRawEventLogger> { struct IRawEventLogger * x0; struct __shared_weak_count * x1; })logger;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBARNetworkPolicyConfiguration_h */
