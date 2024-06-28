//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrowserPCMACSServerProvider_h
#define IGBrowserPCMACSServerProvider_h
@import Foundation;

#include "ACSServerProvider-Protocol.h"

@class IGGraphQLService, NSString;

@interface IGBrowserPCMACSServerProvider : NSObject<ACSServerProvider> {
  /* instance variables */
  NSString *_projectName;
  IGGraphQLService *_graphQLService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProjectName:(id)name graphQLService:(id)qlservice;
- (void)getCredentialWithServerConfig:(id)config withBlindedNonces:(id)nonces withProofRequested:(BOOL)requested withSuccessCallback:(id /* block */)callback withFailureCallback:(id /* block */)callback;
- (void)getPublicParameterWithProjectName:(id)name withAttributeIdentifier:(id)identifier withSuccessCallback:(id /* block */)callback withFailureCallback:(id /* block */)callback;
@end

#endif /* IGBrowserPCMACSServerProvider_h */