//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectConsolidatedReportingRecipientService_h
#define IGDirectConsolidatedReportingRecipientService_h
@import Foundation;

#include "IGDirectConsolidatedReportingRecipientQueryStateManager.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGDirectConsolidatedReportingRecipientService : NSObject<NSObject> {
  /* instance variables */
  IGDirectConsolidatedReportingRecipientQueryStateManager *_queryStateManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)fetchConsolidatedReportingRecipientsForString:(id)string successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
@end

#endif /* IGDirectConsolidatedReportingRecipientService_h */
