//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingCartBadgingService_h
#define IGShoppingCartBadgingService_h
@import Foundation;

#include "IGBloksNavBarBadgingService-Protocol.h"
#include "IGShoppingCartBadgeAnimationController.h"
#include "IGShoppingCartDataController.h"

@class IGUserDefaults, NSHashTable, NSString;
@protocol IGShoppingCartBadgingAnnouncer;

@interface IGShoppingCartBadgingService : NSObject<IGBloksNavBarBadgingService> {
  /* instance variables */
  NSObject<IGShoppingCartBadgingAnnouncer> *_announcer;
  IGShoppingCartDataController *_dataController;
  IGUserDefaults *_userDefaults;
  NSHashTable *_badgeableTable;
  IGShoppingCartBadgeAnimationController *_animationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *datasourceIdentifier;

/* instance methods */
- (id)initWithDataController:(id)controller userDefaults:(id)defaults;
- (void)startUpdatingBadgeable:(id)badgeable;
- (void)stopUpdatingBadgeable:(id)badgeable;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)shoppingCartDataController:(id)controller didUpdateCartStore:(id)store withChangeset:(id)changeset;
- (void)shoppingCartDataController:(id)controller didUpdateState:(id)state forQuery:(id)query previousState:(id)state;
- (void)shoppingCartDataController:(id)controller didHandleUserError:(id)error;
@end

#endif /* IGShoppingCartBadgingService_h */