//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKApplicationDelegate_h
#define FBSDKApplicationDelegate_h
@import Foundation;

#include "FBSDKCoreKitComponents.h"
#include "FBSDKCoreKitConfiguring-Protocol.h"

@class NSHashTable;

@interface FBSDKApplicationDelegate : NSObject

@property (retain, nonatomic) FBSDKCoreKitComponents *components;
@property (retain, nonatomic) NSObject<FBSDKCoreKitConfiguring> *configurator;
@property (retain, nonatomic) NSHashTable *applicationObservers;
@property (nonatomic) BOOL isAppLaunched;

/* class methods */
+ (void)initializeSDK:(id)sdk;
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)initWithComponents:(id)components configurator:(id)configurator;
- (void)initializeSDK;
- (void)initializeSDKWithLaunchOptions:(id)options;
- (void)handleDeferredActivationIfNeeded;
- (void)configureSourceApplicationWithLaunchOptions:(id)options;
- (void)logBackgroundRefreshStatus;
- (void)logInitialization;
- (void)enableInstrumentation;
- (void)addObservers;
- (BOOL)application:(id)application continueUserActivity:(id)activity;
- (BOOL)application:(id)application openURL:(id)url options:(id)options;
- (BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application annotation:(id)annotation;
- (BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
- (void)initializeTokenCache;
- (void)fetchServerConfiguration;
- (void)checkAuthentication;
- (BOOL)notifyLaunchObserversWithApplication:(id)application launchOptions:(id)options;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationDidBecomeActive:(id)active;
- (void)applicationWillResignActive:(id)active;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)setApplicationState:(long long)state;
- (void)_logSDKInitialize;
@end

#endif /* FBSDKApplicationDelegate_h */
