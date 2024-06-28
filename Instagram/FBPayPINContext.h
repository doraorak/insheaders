//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPINContext_h
#define FBPayPINContext_h
@import Foundation;

#include "FBPayAuthenticationFlowContentManager.h"
#include "FBPayUPLLoggingAPI-Protocol.h"

@class NSString;
@protocol FBPayAuthTicketIDCaching, FBPaySecurityExperimentGating, FBPaySecurityPINAPIService;

@interface FBPayPINContext : NSObject {
  /* instance variables */
  NSObject<FBPaySecurityPINAPIService> *_fbpayPINNetworkService;
  NSObject<FBPayUPLLoggingAPI> *_fbpayUPLLogger;
  NSString *_creationFlowType;
  FBPayAuthenticationFlowContentManager *_authenticationFlowContentManager;
  NSObject<FBPayAuthTicketIDCaching> *_authTicketIDCache;
}

@property (readonly, nonatomic) NSObject<FBPaySecurityExperimentGating> *experimentManager;
@property (readonly, copy, nonatomic) NSString *paymentType;

/* instance methods */
- (id)initWithService:(id)service fbpayUPLLogger:(id)upllogger fbpayExperimentManager:(id)manager creationFlowType:(id)type paymentType:(id)type authenticationFlowContentManager:(id)manager authTicketIDCache:(id)idcache;
@end

#endif /* FBPayPINContext_h */