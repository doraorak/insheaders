//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileSideTrayDataSource_h
#define IGProfileSideTrayDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"
#include "IGUserUpdatedListener-Protocol.h"

@class IGUserSession, NSArray, NSMapTable, NSOrderedSet, NSString;
@protocol IGSideTrayDataSourceDelegate, IGSideTrayLoggingController, IGSideTrayNavigationHandler;

@interface IGProfileSideTrayDataSource : NSObject<IGUserUpdatedListener, IGListAdapterDataSource> {
  /* instance variables */
  NSOrderedSet *_objects;
  NSMapTable *_modelToControllerMap;
  IGUserSession *_userSession;
  NSObject<IGSideTrayLoggingController> *_loggingController;
  NSObject<IGSideTrayNavigationHandler> *_navigationHandler;
  BOOL _profileIsInTabBar;
  BOOL _shoppingCartEnabled;
  BOOL _fbpayEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasFooter;
@property (weak, nonatomic) NSObject<IGSideTrayDataSourceDelegate> *delegate;
@property (retain, nonatomic) NSArray *rowTypes;
@property (readonly, nonatomic) long long objectCount;
@property (readonly, copy, nonatomic) NSString *analyticsModule;

/* instance methods */
- (id)initWithAnalyticsModule:(id)module profileIsInTabBar:(BOOL)bar userSession:(id)session loggingController:(id)controller navigationHandler:(id)handler;
- (id)sectionControllerForObject:(id)object;
- (id)accessoryViewForObject:(id)object withExistingView:(id)view;
- (void)prefetchWhereApplicable;
- (void)itemsWillBeDisplayed;
- (void)itemsDidDisplay;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)sideTrayItemSectionController:(id)controller didUpdateBadgeCount:(long long)count;
- (void)sideTrayItemSectionController:(id)controller wantsNavigationWithBlock:(id /* block */)block dismissSideTray:(BOOL)tray;
- (void)reloadSideTrayItemSectionController:(id)controller;
- (void)shoppingCartBadgingService:(id)service didUpdateTotalCartItemCount:(unsigned long long)count;
- (void)shoppingCartBadgingService:(id)service primaryEntryPointBadgingStateChanged:(BOOL)changed;
- (void)userWasUpdated:(id)updated;
- (void)interopUpgradeStatusDidChange:(long long)change;
- (void)_reload;
@end

#endif /* IGProfileSideTrayDataSource_h */
