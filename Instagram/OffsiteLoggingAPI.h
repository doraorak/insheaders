//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OffsiteLoggingAPI_h
#define OffsiteLoggingAPI_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"

@class NSString;

@interface OffsiteLoggingAPI : NSObject {
  /* instance variables */
  NSObject<FBAnalyticsLogging> *_logger;
  int _productType;
  BOOL _isUPLLoggingEnabled;
}

@property (retain) NSString *sessionId;
@property (nonatomic) long long adId;

/* instance methods */
- (id)structuredLogger;
- (id)initWithLogger:(id)logger sessionId:(id)id;
- (void)logFetchOffsiteMerchantJavascriptInitWithPartnerId:(id)id merchantId:(id)id productId:(long long)id origin:(id)origin merchantJsUrl:(id)url;
- (void)logFetchOffsiteMerchantJavascriptResponseWithPartnerId:(id)id merchantId:(id)id productId:(long long)id cacheAvailable:(BOOL)available origin:(id)origin error:(id)error;
- (void)logExecuteOffsiteMerchantJavascriptInitWithPartnerId:(id)id merchantId:(id)id productId:(long long)id origin:(id)origin;
- (void)logExecuteOffsiteMerchantJavascriptResultWithPartnerId:(id)id merchantId:(id)id productId:(long long)id origin:(id)origin error:(id)error;
@end

#endif /* OffsiteLoggingAPI_h */