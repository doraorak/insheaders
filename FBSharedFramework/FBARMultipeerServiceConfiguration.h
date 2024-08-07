//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARMultipeerServiceConfiguration_h
#define FBARMultipeerServiceConfiguration_h
@import Foundation;

#include "FBARServiceConfigurationCxx-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol FBARMultipeerServiceDelegate, struct shared_ptr<arfx::services::IServiceConfiguration> { struct IServiceConfiguration * x0; struct __shared_weak_count * x1; };

@interface FBARMultipeerServiceConfiguration : NSObject<FBARServiceConfigurationCxx, NSSecureCoding>

@property (readonly, weak, nonatomic) NSObject<FBARMultipeerServiceDelegate> *delegate;
@property (readonly, nonatomic) struct ServiceType { int x0; } serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct shared_ptr<arfx::services::IServiceConfiguration> { struct IServiceConfiguration * x0; struct __shared_weak_count * x1; } engineServiceConfiguration;

/* class methods */
+ (id)newWithDelegate:(id)delegate;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBARMultipeerServiceConfiguration_h */
