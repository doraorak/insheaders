//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentFilterNetworkClient_h
#define IGContentFilterNetworkClient_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGContentFilterQueryBuilderFactory.h"
#include "NSObject-Protocol.h"
#include "PNPandoGraphQLService.h"

@class NSString;
@protocol IGDirectMsysSecureConsentFrameworkServicing;

@interface IGContentFilterNetworkClient : NSObject<NSObject> {
  /* instance variables */
  IGContentFilterQueryBuilderFactory *_queryBuilderFactory;
  PNPandoGraphQLService *_pandoGraphQLService;
  NSObject<IGAPIClient> *_networker;
  NSObject<IGDirectMsysSecureConsentFrameworkServicing> *_consentFrameworkServicing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueryBuilderFactory:(id)factory pandoGraphQLService:(id)qlservice networker:(id)networker consentFrameworkServicing:(id)servicing;
- (void)getDictionaryListWithParams:(id)params completion:(id /* block */)completion;
- (void)getDictionaryWithParams:(id)params completion:(id /* block */)completion;
- (void)modifyDictionaryWithParams:(id)params completion:(id /* block */)completion;
@end

#endif /* IGContentFilterNetworkClient_h */
