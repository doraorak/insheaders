//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKCoreKitConfigurator_h
#define FBSDKCoreKitConfigurator_h
@import Foundation;

#include "FBSDKCoreKitComponents.h"
#include "FBSDKCoreKitConfiguring-Protocol.h"

@interface FBSDKCoreKitConfigurator : NSObject<FBSDKCoreKitConfiguring>

@property (retain, nonatomic) FBSDKCoreKitComponents *components;

/* instance methods */
- (id)initWithComponents:(id)components;
- (void)performConfiguration;
- (void)configureAccessToken;
- (void)configureAppEvents;
- (void)configureAppEventsDeviceInfo;
- (void)configureAppEventsState;
- (void)configureAppEventsUtility;
- (void)configureAuthenticationToken;
- (void)configureFeatureManager;
- (void)configureGatekeeperManager;
- (void)configureGraphRequest;
- (void)configureGraphRequestConnection;
- (void)configureInstrumentManager;
- (void)configureInternalUtility;
- (void)configureServerConfigurationManager;
- (void)configureSettings;
- (void)configureNonTVOSAppEvents;
- (void)configureAuthenticationStatusUtility;
- (void)configureBridgeAPIRequest;
- (void)configureCrashShield;
@end

#endif /* FBSDKCoreKitConfigurator_h */