//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AdAccountInfoHandler_h
#define AdAccountInfoHandler_h
@import Foundation;

#include "BusinessInfoHandler-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGBusinessOneLinkLogger.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSession.h"

@class NSString;

@interface AdAccountInfoHandler : NSObject<BusinessInfoHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGBusinessOneLinkLogger *_logger;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session businessOneLinkLogger:(id)logger;
- (id)businessInfoModelWithCallerInfo:(id)info;
- (void)fetchBusinessInfoWithCallerInfo:(id)info authConfig:(id)config onSuccess:(id /* block */)success onError:(id /* block */)error;
- (void)clearCachedBusinessInfoWithCallerInfo:(id)info;
- (void)storeBusinessInfo:(id)info;
- (void)notifyBusinessInfoUpdated;
@end

#endif /* AdAccountInfoHandler_h */
