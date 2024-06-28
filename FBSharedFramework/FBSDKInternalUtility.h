//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKInternalUtility_h
#define FBSDKInternalUtility_h
@import Foundation;

#include "FBSDKAppAvailabilityChecker-Protocol.h"
#include "FBSDKAppURLSchemeProviding-Protocol.h"
#include "FBSDKInternalUtility-Protocol.h"
#include "FBSDKSettings-Protocol.h"
#include "FBSDKURLHosting-Protocol.h"
#include "_FBSDKWindowFinding-Protocol.h"

@class NSBundle, NSString;
@protocol FBSDKInfoDictionaryProviding;

@interface FBSDKInternalUtility : NSObject<FBSDKAppAvailabilityChecker, FBSDKAppURLSchemeProviding, FBSDKInternalUtility, FBSDKURLHosting, _FBSDKWindowFinding>

@property (nonatomic) BOOL isConfigured;
@property (retain, nonatomic) NSObject<FBSDKInfoDictionaryProviding> *infoDictionaryProvider;
@property (retain, nonatomic) NSObject<FBSDKSettings> *settings;
@property (readonly, nonatomic) NSBundle *bundleForStrings;
@property (readonly, nonatomic) BOOL isMessengerAppInstalled;
@property (readonly, nonatomic) BOOL isFacebookAppInstalled;
@property (readonly, copy, nonatomic) NSString *appURLScheme;

/* class methods */
+ (id)sharedUtility;

/* instance methods */
- (void)configureWithInfoDictionaryProvider:(id)provider settings:(id)settings;
- (id)appURLWithHost:(id)host path:(id)path queryParameters:(id)parameters error:(id *)error;
- (id)parametersFromFBURL:(id)fburl;
- (unsigned long long)currentTimeInMilliseconds;
- (void)extractPermissionsFromResponse:(id)response grantedPermissions:(id)permissions declinedPermissions:(id)permissions expiredPermissions:(id)permissions;
- (id)facebookURLWithHostPrefix:(id)prefix path:(id)path queryParameters:(id)parameters error:(id *)error;
- (id)facebookURLWithHostPrefix:(id)prefix path:(id)path queryParameters:(id)parameters defaultVersion:(id)version error:(id *)error;
- (id)unversionedFacebookURLWithHostPrefix:(id)prefix path:(id)path queryParameters:(id)parameters error:(id *)error;
- (id)_facebookURLWithHostPrefix:(id)prefix path:(id)path queryParameters:(id)parameters defaultVersion:(id)version error:(id *)error;
- (BOOL)isBrowserURL:(id)url;
- (BOOL)isFacebookBundleIdentifier:(id)identifier;
- (BOOL)isSafariBundleIdentifier:(id)identifier;
- (BOOL)object:(id)object isEqualToObject:(id)object;
- (struct { long long x0; long long x1; long long x2; })operatingSystemVersion;
- (id)URLWithScheme:(id)scheme host:(id)host path:(id)path queryParameters:(id)parameters error:(id *)error;
- (void)deleteFacebookCookies;
- (void)registerTransientObject:(id)object;
- (void)unregisterTransientObject:(id)object;
- (id)viewControllerForView:(id)view;
- (BOOL)_canOpenURLScheme:(id)urlscheme;
- (void)validateAppID;
- (id)validateRequiredClientAccessToken;
- (void)validateURLSchemes;
- (void)validateFacebookReservedURLSchemes;
- (void)extendDictionaryWithDataProcessingOptions:(id)options;
- (id)findWindow;
- (id)topMostViewController;
- (long long)statusBarOrientation;
- (id)hexadecimalStringFromData:(id)data;
- (BOOL)isRegisteredURLScheme:(id)urlscheme;
- (void)checkRegisteredCanOpenURLScheme:(id)urlscheme;
- (BOOL)isRegisteredCanOpenURLScheme:(id)urlscheme;
- (BOOL)isPublishPermission:(id)permission;
- (void)validateConfiguration;
@end

#endif /* FBSDKInternalUtility_h */
