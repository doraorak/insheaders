//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef QPCounterCatalog_h
#define QPCounterCatalog_h
@import Foundation;

#include "QPConfigurationProfile-Protocol.h"
#include "QPPersistedCounterStore.h"

@class NSDictionary;

@interface QPCounterCatalog : NSObject {
  /* instance variables */
  NSObject<QPConfigurationProfile> *_configurationProfile;
}

@property (readonly, copy, nonatomic) QPPersistedCounterStore *qpCounterPersistedStore;
@property (readonly, copy, nonatomic) NSDictionary *qpSurfaceEntries;

/* instance methods */
- (id)initWithConfigurationProfile:(id)profile appName:(long long)name loggedInAccountID:(id)id familySharedUserDefaults:(id)defaults;
- (void)_resetSurfaceRecordEntries;
- (id)lastOccurrenceTimeForEvent:(long long)event nuxID:(id)id qpID:(id)id;
- (id)lastOccurrenceTimeForEvent:(long long)event nuxID:(id)id;
- (long long)countForEvent:(long long)event nuxID:(id)id qpID:(id)id;
- (void)recordForEvent:(long long)event nuxID:(id)id timestamp:(id)timestamp qpID:(id)id;
- (void)resetRecordsForEvent:(long long)event nuxID:(id)id qpID:(id)id;
- (id)_recordListForQPNuxID:(id)id event:(long long)event promotionID:(id)id;
- (id)_mostRecentRecordForQPNuxID:(id)id event:(long long)event;
- (BOOL)lastEvent:(long long)event nuxID:(id)id qpID:(id)id withinTimeInterval:(double)interval;
- (id)_dataStoreEntryByQPNuxID:(id)id;
- (void)resetAll;
@end

#endif /* QPCounterCatalog_h */