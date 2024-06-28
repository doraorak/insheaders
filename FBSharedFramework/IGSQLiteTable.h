//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSQLiteTable_h
#define IGSQLiteTable_h
@import Foundation;

#include "IGSQLiteClauseProvider-Protocol.h"
#include "IGSQLiteDatabase.h"

@protocol IGSQLiteColumnTransformerProvider, IGSQLiteRelationshipCollectionTransformerProvider, IGSQLiteTableConfiguration;

@interface IGSQLiteTable : NSObject {
  /* instance variables */
  NSObject<IGSQLiteClauseProvider> *_clauseProvider;
  NSObject<IGSQLiteColumnTransformerProvider> *_columnTransformerProvider;
  NSObject<IGSQLiteRelationshipCollectionTransformerProvider> *_relationshipTransformerProvider;
}

@property (readonly, weak, nonatomic) IGSQLiteDatabase *database;
@property (readonly, nonatomic) NSObject<IGSQLiteTableConfiguration> *configuration;

/* instance methods */
- (id)initWithDatabase:(id)database configuration:(id)configuration;
- (BOOL)addItems:(id)items;
- (BOOL)addItem:(id)item error:(id *)error;
- (BOOL)_startAddItem:(id)item rowId:(out long long *)id error:(id *)error;
- (BOOL)deleteAllItems;
- (id)allItems;
- (id)_columnNamesFromItem:(id)item changedProperties:(id)properties foreignBindings:(id)bindings bindings:(out id *)bindings;
- (id)_updateValueClauseFromColumnNames:(id)names;
- (id)_insertValueClauseFromColumnNames:(id)names;
@end

#endif /* IGSQLiteTable_h */