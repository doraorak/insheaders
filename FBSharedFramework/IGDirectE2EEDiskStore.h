//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectE2EEDiskStore_h
#define IGDirectE2EEDiskStore_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGDirectE2EEMessageEditsSQLTable.h"
#include "IGDirectE2EEMessagesSQLTable.h"
#include "IGSQLiteDatabase.h"
#include "IGSQLiteDatabaseDelegate-Protocol.h"
#include "IGSQLiteDatabaseLocation.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserStore.h"
#include "_TtC18IGE2EEMediaManager18IGE2EEMediaManager.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IGDirectE2EEDiskStore : NSObject<IGSQLiteDatabaseDelegate> {
  /* instance variables */
  NSString *_userPk;
  IGUserStore *_userStore;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGSQLiteDatabaseLocation *_databaseLocation;
  BOOL _dbHasBeenPrepared;
  _TtC18IGE2EEMediaManager18IGE2EEMediaManager *_e2eeMediaManager;
  IGDirectE2EEMessagesSQLTable *_messagesManager;
  IGDirectE2EEMessageEditsSQLTable *_messageEditsManager;
}

@property (retain, nonatomic) IGSQLiteDatabase *database;
@property (retain, nonatomic) NSObject<IGUserLauncherSetProviding> *featureSets;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDatabaseLocation:(id)location userPk:(id)pk analyticsLogger:(id)logger featureSets:(id)sets userStore:(id)store e2eeMediaManager:(id)manager;
- (void)visualMessageActionsForMessageId:(id)id completion:(id /* block */)completion;
- (void)databaseDidInvalidate;
- (id)_getTargetMessageIdFromMessageKey:(id)key;
@end

#endif /* IGDirectE2EEDiskStore_h */
