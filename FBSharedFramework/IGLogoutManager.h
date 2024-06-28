//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLogoutManager_h
#define IGLogoutManager_h
@import Foundation;

#include "IGAccountLinkingInfoLookup.h"
#include "IGAccountStoreCoordinator.h"
#include "IGActiveUserSessions.h"
#include "IGAuthHeaderStore.h"
#include "IGAuthNetworker.h"
#include "IGAuthService.h"
#include "IGGroupScheduler-Protocol.h"
#include "IGLoginDeferredAccountManager.h"
#include "IGLogoutDiskClearer.h"
#include "IGLogoutManaging-Protocol.h"
#include "IGMultipleAccountHandling-Protocol.h"
#include "IGPersistentAccountStore.h"
#include "IGSSOTokenWriter.h"
#include "IGUserSessionEnder.h"

@class NSString;
@protocol IGSessionEndChecking, IGUserCacheClearing;

@interface IGLogoutManager : NSObject<IGLogoutManaging> {
  /* instance variables */
  IGActiveUserSessions *_activeUserSessions;
  NSObject<IGMultipleAccountHandling> *_multipleAccountHandler;
  IGAccountLinkingInfoLookup *_accountLinkingInfoLookup;
  IGAuthNetworker *_authNetworker;
  IGAuthService *_authService;
  IGUserSessionEnder *_userSessionEnder;
  NSObject<IGUserCacheClearing> *_cacheClearer;
  IGLogoutDiskClearer *_logoutDiskClearer;
  NSObject<IGSessionEndChecking> *_endBlocker;
  IGAuthHeaderStore *_authHeaderStore;
  IGPersistentAccountStore *_persistentAccountStore;
  IGPersistentAccountStore *_cloudPersistentAccountStore;
  IGAccountStoreCoordinator *_accountStoreCoordinator;
  IGLoginDeferredAccountManager *_deferredAccountManager;
  IGSSOTokenWriter *_ssoTokenWriter;
  id /* block */ _invalidateExtensionsConfigurationsBlock;
  NSObject<IGGroupScheduler> *_groupScheduler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithActiveUserSessions:(id)sessions authNetworker:(id)networker multipleAccountHandler:(id)handler accountLinkingInfoLookup:(id)lookup authService:(id)service userSessionEnder:(id)ender cacheClearer:(id)clearer persistentAccountStore:(id)store cloudPersistentAccountStore:(id)store accountStoreCoordinator:(id)coordinator authHeaderStore:(id)store loginDeferredAccountManager:(id)manager ssoTokenWriter:(id)writer extensionsInvalidateConfigurationsBlock:(id /* block */)block groupScheduler:(id)scheduler;
- (void)logOutUserSession:(id)session oneTapLoginEnabled:(BOOL)enabled completionHandler:(id /* block */)handler logoutEntryPoint:(long long)point;
- (void)logOutMultipleUnitsUserSession:(id)session logoutAccountUnitPKs:(id)pks oneTapLoginEnabledUsers:(id)users logoutFinishHandler:(id /* block */)handler logoutEntryPoint:(long long)point;
- (void)logOutAccountGroupUserSession:(id)session oneTapLoginEnabledUsers:(id)users logoutFinishHandler:(id /* block */)handler logoutEntryPoint:(long long)point;
- (void)logOutAllUsersWithActiveUserSession:(id)session oneTapLoginEnabledUsers:(id)users completionHandler:(id /* block */)handler logoutEntryPoint:(long long)point;
- (void)clearAllUsers;
- (void)configureWithEndBlocker:(id)blocker;
@end

#endif /* IGLogoutManager_h */
