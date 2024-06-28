//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksFullScreenContainerController_h
#define BKBloksFullScreenContainerController_h
@import Foundation;

#include "BKBloksComponentController.h"
#include "BKBloksFullScreenContainerViewController.h"
#include "BKFullscreenWrapperView.h"

@class BKModel, NSSet;
@protocol {RCLayout="component"@"<RCMountable>""size"{CGSize="width"d"height"d}"children"{shared_ptr<const std::vector<RCLayoutChild>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}"extra"@"NSDictionary"};

@interface BKBloksFullScreenContainerController : BKBloksComponentController {
  /* instance variables */
  BKFullscreenWrapperView *_containerView;
  BKModel *_previousModel;
  struct RCLayout { <RCMountable> *component; struct CGSize { double width; double height; } size; struct shared_ptr<const std::vector<RCLayoutChild>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } children; NSDictionary *extra; } _computedLayout;
  NSSet *_mountedComponentsCache;
  struct CGSize { double width; double height; } _mountedSize;
  BKBloksFullScreenContainerViewController *_fullscreenVC;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _inlineRectRelativeToFullscreenVC;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _screenSafeAreaInsets;
}

/* instance methods */
- (void)component:(id)component didPrepareLayout:(const void *)layout;
- (void)didMount:(id)mount;
- (void)willUnmount:(id)unmount;
@end

#endif /* BKBloksFullScreenContainerController_h */