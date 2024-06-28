//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ARCameraPermissionsModule_h
#define ARCameraPermissionsModule_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol ARCameraPermissionsModuleDelegate, ARCameraPermissionsProviderProtocol, ARCameraPermissionsViewBridgeProtocol, ARCommerceLoggerProtocol;

@interface ARCameraPermissionsModule : NSObject<NSObject> {
  /* instance variables */
  BOOL _didCallDidAcquireCameraPermissions;
  NSObject<ARCameraPermissionsViewBridgeProtocol> *_viewBridge;
  NSObject<ARCommerceLoggerProtocol> *_logger;
  NSObject<ARCameraPermissionsProviderProtocol> *_permissionsProvider;
}

@property (weak, nonatomic) NSObject<ARCameraPermissionsModuleDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogger:(id)logger;
- (void)bindWithViewBridge:(id)bridge;
- (BOOL)requiresUserAuthorization;
- (void)onDidTapContinuePermissions;
- (void)onDidTapClosePermissions;
@end

#endif /* ARCameraPermissionsModule_h */
