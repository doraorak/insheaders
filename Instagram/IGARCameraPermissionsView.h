//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARCameraPermissionsView_h
#define IGARCameraPermissionsView_h
@import Foundation;

#include "UIView.h"

@class IGPrePromptsPermissionView, IGTapButton, IGTextButton, UIView;

@interface IGARCameraPermissionsView : UIView {
  /* instance variables */
  IGTextButton *_confimationButton;
  IGTapButton *_permissionCloseButton;
  IGPrePromptsPermissionView *_permissionView;
  UIView *_buttonContainerView;
}

/* instance methods */
- (id)init;
- (void)layoutSubviews;
@end

#endif /* IGARCameraPermissionsView_h */
