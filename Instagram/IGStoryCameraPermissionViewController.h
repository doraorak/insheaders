//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCameraPermissionViewController_h
#define IGStoryCameraPermissionViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGStoryCameraPermissionView.h"
#include "IGStoryCameraPermissionViewConfig.h"

@class NSString;
@protocol IGStoryCameraPermissionViewControllerDelegate;

@interface IGStoryCameraPermissionViewController : UIViewController<IGAnalyticsModule> {
  /* instance variables */
  IGStoryCameraPermissionView *_permissionView;
}

@property (readonly, nonatomic) IGStoryCameraPermissionViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGStoryCameraPermissionViewControllerDelegate> *delegate;

/* instance methods */
- (id)initWithConfig:(id)config;
- (void)loadView;
- (void)viewDidLoad;
- (void)refreshViewStateAnimated:(BOOL)animated;
- (void)updateWithChangedPermissions;
- (id)analyticsModule;
- (void)permissionsViewDidTapCameraEnable:(id)enable;
- (void)permissionsViewDidTapMicrophoneEnable:(id)enable;
- (void)permissionsViewDidTapCancel:(id)cancel;
- (void)permissionsViewDidTapContinue:(id)continue;
@end

#endif /* IGStoryCameraPermissionViewController_h */
