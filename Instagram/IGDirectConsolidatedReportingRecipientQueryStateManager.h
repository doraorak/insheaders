//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectConsolidatedReportingRecipientQueryStateManager_h
#define IGDirectConsolidatedReportingRecipientQueryStateManager_h
@import Foundation;

#include "IGDirectConsolidatedReportingRecipientFetcher.h"
#include "NSObject-Protocol.h"

@class NSCache, NSString;

@interface IGDirectConsolidatedReportingRecipientQueryStateManager : NSObject<NSObject> {
  /* instance variables */
  long long _displayNameType;
  NSCache *_serverQueryResultCache;
  IGDirectConsolidatedReportingRecipientFetcher *_fetcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker currentUser:(id)user userSession:(id)session userStore:(id)store;
- (void)fetchConsolidatedReportingRecipientsForString:(id)string successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
@end

#endif /* IGDirectConsolidatedReportingRecipientQueryStateManager_h */
