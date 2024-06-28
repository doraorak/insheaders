//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPFilterHandler_h
#define IGQPFilterHandler_h
@import Foundation;

#include "IGQPDataStore.h"
#include "IGQPFilterHandlerProtocol-Protocol.h"
#include "IGQPFilterTemplateParam.h"
#include "IGQPPromotion.h"
#include "IGUserSession.h"

@class NSDictionary, NSString;

@interface IGQPFilterHandler : NSObject<IGQPFilterHandlerProtocol> {
  /* instance variables */
  IGQPPromotion *_promotion;
}

@property (readonly, copy, nonatomic) NSString *surfaceID;
@property (readonly, copy, nonatomic) NSString *filterType;
@property (readonly, copy, nonatomic) IGQPFilterTemplateParam *value;
@property (readonly, copy, nonatomic) NSDictionary *extraDatas;
@property (readonly, nonatomic) BOOL passesIfNotSupported;
@property (readonly, copy, nonatomic) NSString *unknownAction;
@property (readonly, weak, nonatomic) IGQPDataStore *dataStore;
@property (readonly, weak, nonatomic) IGUserSession *userSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFilter:(id)filter promotion:(id)promotion surfaceID:(id)id dataStore:(id)store userSession:(id)session;
- (BOOL)passesFilterWithContext:(id)context error:(id *)error;
@end

#endif /* IGQPFilterHandler_h */
