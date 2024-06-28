//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SRSecurityPolicy_h
#define SRSecurityPolicy_h
@import Foundation;

@interface SRSecurityPolicy : NSObject

@property (readonly, nonatomic) BOOL certificateChainValidationEnabled;

/* class methods */
+ (id)defaultPolicy;
+ (id)pinnningPolicyWithCertificates:(id)certificates;

/* instance methods */
- (id)initWithCertificateChainValidationEnabled:(BOOL)enabled;
- (id)init;
- (void)updateSecurityOptionsInStream:(id)stream;
- (BOOL)evaluateServerTrust:(struct __SecTrust *)trust forDomain:(id)domain;
@end

#endif /* SRSecurityPolicy_h */
