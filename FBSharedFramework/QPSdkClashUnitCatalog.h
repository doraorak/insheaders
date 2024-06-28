//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPSdkClashUnitCatalog_h
#define QPSdkClashUnitCatalog_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol QPSdkClashUnitCatalogDelegate, QPSdkClashUnitEligibilityFetcher;

@interface QPSdkClashUnitCatalog : NSObject<NSObject> {
  /* instance variables */
  long long _qpAppName;
  NSArray *_clashUnitModels;
  NSDictionary *_initialPriorityByClashName;
  NSMutableDictionary *_clashUnitsByClashName;
  NSDictionary *_vipSubUnitIDToPriorityMapping;
  NSSet *_emergencySubUnitIDs;
  id _session;
}

@property (retain, nonatomic) NSObject<QPSdkClashUnitEligibilityFetcher> *eligibilityFetcher_INTERNAL_USE_ONLY;
@property (weak, nonatomic) NSObject<QPSdkClashUnitCatalogDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *clashUnits_INTERNAL_ONLY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithSession:(id)session qpAppName:(long long)name;
- (void)forceEligibilityFetchFromServer_INTERNAL_USE_ONLY;
- (id /* block */)completionBlock;
- (void)setEligibilityFetcherAndFetch:(id)fetch;
- (void)updateWithDefaultClashUnits;
- (void)updateWithClashUnits:(id)units;
- (void)clearLocalClashUnitCache_INTERNAL_USE_ONLY;
- (void)registerClashUnit:(id)unit;
- (void)unregisterClashUnit:(id)unit;
- (unsigned long long)initialPriorityForClashName:(id)name;
- (BOOL)isClashSubUnitEmergencyWithName:(id)name subUnitID:(id)id;
- (long long)priorityForVIPSubUnitWithName:(id)name subUnitID:(id)id;
@end

#endif /* QPSdkClashUnitCatalog_h */