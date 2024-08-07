//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksComponentsTooltipContainerController_h
#define BKBloksComponentsTooltipContainerController_h
@import Foundation;

#include "BKBloksComponentController.h"
#include "BKBloksComponentsTooltipViewController.h"
#include "BKBloksTooltipComputePositionData.h"

@class NSSet, UITapGestureRecognizer, UIView;
@protocol {RCLayout="component"@"<RCMountable>""size"{CGSize="width"d"height"d}"children"{shared_ptr<const std::vector<RCLayoutChild>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}}"extra"@"NSDictionary"};

@interface BKBloksComponentsTooltipContainerController : BKBloksComponentController {
  /* instance variables */
  BKBloksTooltipComputePositionData *_computedPosition;
  BKBloksComponentsTooltipViewController *_tooltipVC;
  UIView *_tooltipPlaceholderView;
  UITapGestureRecognizer *_tapGesture;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _anchorRect;
  struct RCLayout { <RCMountable> *component; struct CGSize { double width; double height; } size; struct shared_ptr<const std::vector<RCLayoutChild>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } children; NSDictionary *extra; } _childLayout;
  struct RCLayout { <RCMountable> *component; struct CGSize { double width; double height; } size; struct shared_ptr<const std::vector<RCLayoutChild>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } children; NSDictionary *extra; } _tooltipLayout;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _computePositionMutex;
  NSSet *_mountedComponents;
  NSSet *_mountedTooltipComponents;
}

/* instance methods */
- (void)component:(id)component didPrepareLayout:(const void *)layout;
- (void)didMount:(id)mount;
- (void)willUnmount:(id)unmount;
- (void)dismissTooltipView;
@end

#endif /* BKBloksComponentsTooltipContainerController_h */
