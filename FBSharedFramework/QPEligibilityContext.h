//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPEligibilityContext_h
#define QPEligibilityContext_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "QPEligibilityContextMigration-Protocol.h"
#include "QPEligibilityLogger-Protocol.h"
#include "QPEligibilityPersistedState-Protocol.h"
#include "QPForceModeLoader-Protocol.h"

@class NSDate, NSDictionary, NSString, QPEligibilityClashManagementContext;

@interface QPEligibilityContext : NSObject<QPEligibilityContextMigration>

@property (readonly, copy, nonatomic) NSObject<NSObject> *userSession;
@property (readonly, nonatomic) long long app;
@property (readonly, nonatomic) NSString *nuxID;
@property (readonly, nonatomic) unsigned long long surfaceSpecificCoolDownMillis;
@property (readonly, copy, nonatomic) NSString *triggerID;
@property (readonly, nonatomic) BOOL devModeEnabled;
@property (readonly, nonatomic) NSObject<QPEligibilityPersistedState> *eligibilityPersistedState;
@property (readonly, nonatomic) NSObject<QPForceModeLoader> *forceModeLoader;
@property (readonly, nonatomic) NSDate *lastFetchTime;
@property (copy, nonatomic) NSDictionary *triggerContext;
@property (readonly, nonatomic) NSObject<QPEligibilityLogger> *eligibilityLogger;
@property (readonly, nonatomic) QPEligibilityClashManagementContext *clashManagementContext;
@property (readonly, nonatomic) BOOL shouldUseSDKClashManagement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session app:(long long)app nuxID:(id)id triggerID:(id)id triggerContext:(id)context surfaceSpecificCoolDownMillis:(unsigned long long)millis devModeEnabled:(BOOL)enabled eligibilityPersistedState:(id)state forceModeLoader:(id)loader eligibilityLogger:(id)logger lastFetchTime:(id)time clashManagementContext:(id)context shouldUseSDKClashManagement:(BOOL)management;
@end

#endif /* QPEligibilityContext_h */
