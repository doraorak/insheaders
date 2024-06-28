//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCamMicPrePromptsPermissionViewController_h
#define IGCamMicPrePromptsPermissionViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NSObject-Protocol.h"

@class IGPrePromptsPermissionView, IGTextButton, NSString, UIView;
@protocol IGStoryCameraPermissionViewControllerDelegate;

@interface IGCamMicPrePromptsPermissionViewController : UIViewController<NSObject> {
  /* instance variables */
  IGPrePromptsPermissionView *_permissionView;
  UIView *_buttonContainerView;
  IGTextButton *_confimationButton;
}

@property (weak, nonatomic) NSObject<IGStoryCameraPermissionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_didTapConfirmationButton;
- (void)updateWithChangedPermissions;
- (void)refreshViewStateAnimated:(BOOL)animated;
- (id)analyticsModule;
@end

#endif /* IGCamMicPrePromptsPermissionViewController_h */