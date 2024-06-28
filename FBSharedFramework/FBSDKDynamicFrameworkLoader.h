//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKDynamicFrameworkLoader_h
#define FBSDKDynamicFrameworkLoader_h
@import Foundation;

#include "FBSDKDynamicFrameworkResolving-Protocol.h"

@class NSString;

@interface FBSDKDynamicFrameworkLoader : NSObject<FBSDKDynamicFrameworkResolving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)shared;
+ (struct __SecRandom *)loadkSecRandomDefault;
+ (void *)loadkSecAttrAccessible;
+ (void *)loadkSecAttrAccessibleAfterFirstUnlockThisDeviceOnly;
+ (void *)loadkSecAttrAccount;
+ (void *)loadkSecAttrService;
+ (void *)loadkSecValueData;
+ (void *)loadkSecClassGenericPassword;
+ (void *)loadkSecAttrAccessGroup;
+ (void *)loadkSecMatchLimitOne;
+ (void *)loadkSecMatchLimit;
+ (void *)loadkSecReturnData;
+ (void *)loadkSecClass;

/* instance methods */
- (Class)safariViewControllerClass;
- (Class)asIdentifierManagerClass;
@end

#endif /* FBSDKDynamicFrameworkLoader_h */