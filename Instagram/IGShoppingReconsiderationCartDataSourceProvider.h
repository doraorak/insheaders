//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingReconsiderationCartDataSourceProvider_h
#define IGShoppingReconsiderationCartDataSourceProvider_h
@import Foundation;

#include "IGShoppingCartDataController.h"
#include "IGShoppingCartDataQuery.h"
#include "IGShoppingReconsiderationDataControllerSource.h"
#include "NSObject-Protocol.h"

@class IGStatefulNetworkerFetchState, NSString;
@protocol IGShoppingReconsiderationDataSourceProviderAnnouncer;

@interface IGShoppingReconsiderationCartDataSourceProvider : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGShoppingReconsiderationDataSourceProviderAnnouncer> *_announcer;
  IGShoppingCartDataController *_shoppingCartDataController;
  IGShoppingReconsiderationDataControllerSource *_source;
  IGShoppingCartDataQuery *_cartQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGStatefulNetworkerFetchState *fetchState;

/* class methods */
+ (long long)sourceType;

/* instance methods */
- (id)initWithShoppingCartDataController:(id)controller source:(id)source;
- (id)items;
- (BOOL)hasMoreAvailable;
- (BOOL)hasCompletedInitialFetch;
- (void)requestDataWithAction:(long long)action;
- (void)dismissItemPk:(id)pk successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (void)removeDuplicateItemsWithPKs:(id)pks;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)shoppingCartDataController:(id)controller didUpdateState:(id)state forQuery:(id)query previousState:(id)state;
- (void)shoppingCartDataController:(id)controller didUpdateCartStore:(id)store withChangeset:(id)changeset;
- (void)shoppingCartDataController:(id)controller didHandleUserError:(id)error;
@end

#endif /* IGShoppingReconsiderationCartDataSourceProvider_h */
