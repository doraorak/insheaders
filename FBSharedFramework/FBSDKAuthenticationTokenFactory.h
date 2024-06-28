//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKAuthenticationTokenFactory_h
#define FBSDKAuthenticationTokenFactory_h
@import Foundation;

#include "FBSDKAuthenticationTokenCreating-Protocol.h"
#include "NSURLSessionDelegate-Protocol.h"

@class NSString;
@protocol FBSDKSessionProviding;

@interface FBSDKAuthenticationTokenFactory : NSObject<NSURLSessionDelegate, FBSDKAuthenticationTokenCreating>

@property (retain, nonatomic) NSString *cert;
@property (retain, nonatomic) NSObject<FBSDKSessionProviding> *sessionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithSessionProvider:(id)provider;
- (void)createTokenFromTokenString:(id)string nonce:(id)nonce graphDomain:(id)domain completion:(id /* block */)completion;
- (void)verifySignature:(id)signature header:(id)header claims:(id)claims certificateKey:(id)key completion:(id /* block */)completion;
- (void)getPublicKeyWithCertificateKey:(id)key completion:(id /* block */)completion;
- (void)getCertificateWithKey:(id)key completion:(id /* block */)completion;
- (id)_certificateEndpoint;
@end

#endif /* FBSDKAuthenticationTokenFactory_h */
