//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGCameraUtilityToolbar35IGCameraUtilityToolbarContainerView_h
#define _TtC22IGCameraUtilityToolbar35IGCameraUtilityToolbarContainerView_h
@import Foundation;

#include "IGPassthroughView.h"

@class NSArray;

@interface _TtC22IGCameraUtilityToolbar35IGCameraUtilityToolbarContainerView : IGPassthroughView { // (Swift)
  /* instance variables */
   $__lazy_storage_$_utilityToolbarView;
   maxItemsPerRow;
   onToggleHandler;
   hostView;
   overlayView;
}

@property (nonatomic, readonly) BOOL isToolBarHidden;
@property (nonatomic, readonly) NSArray *tools;
@property (nonatomic, retain) _TtC22IGCameraUtilityToolbar26IGCameraUtilityToolbarView *utilityToolbarView;

/* instance methods */
- (id)initWithMaxItemsPerRow:(long long)row;
- (void)layoutSubviews;
- (void)setToolbarHidden:(BOOL)hidden;
- (void)setTools:(id)tools animated:(BOOL)animated;
- (void)setExpandable:(BOOL)expandable;
- (void)setExpanded:(BOOL)expanded animated:(BOOL)animated completion:(id /* block */)completion;
- (void)setOnToggleHandler:(id /* block */)handler;
- (void)animateTimerButtonHighlighted;
- (void)handleOverlayTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC22IGCameraUtilityToolbar35IGCameraUtilityToolbarContainerView_h */