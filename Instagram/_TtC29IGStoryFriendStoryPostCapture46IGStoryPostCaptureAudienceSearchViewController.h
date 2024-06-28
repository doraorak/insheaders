//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29IGStoryFriendStoryPostCapture46IGStoryPostCaptureAudienceSearchViewController_h
#define _TtC29IGStoryFriendStoryPostCapture46IGStoryPostCaptureAudienceSearchViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"

@class NSArray;
@protocol UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol;

@interface _TtC29IGStoryFriendStoryPostCapture46IGStoryPostCaptureAudienceSearchViewController : IGViewController { // (Swift)
  /* instance variables */
   $__lazy_storage_$_editingControlsOverlayView;
   userSession;
   originalComposition;
   originalCompositionSize;
   $__lazy_storage_$_mediaCompositionEditingViewController;
   $__lazy_storage_$_mediaCompositionView;
   $__lazy_storage_$_navigationBar;
   mediaTransformState;
   animationGroup;
   isInitialLayout;
   initialTransform;
   $__lazy_storage_$_keyboardObserver;
   keyboardFrameInWindow;
   $__lazy_storage_$_backgroundTapGestureView;
   mediaSnapshotView;
   $__lazy_storage_$_audienceViewController;
   $__lazy_storage_$_uploader;
}

@property (nonatomic, weak) NSObject<IGStoryPostCaptureEditingViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIView<IGStoryMediaCompositionEditingControlsOverlayViewProtocol> *editingControlsOverlayView;
@property (nonatomic, copy) NSArray *captureToolsForLogging;
@property (nonatomic) unsigned long long userFlowInstanceID;
@property (nonatomic, copy) NSArray *mediaCompositions;

/* instance methods */
- (id)initWithUserSession:(id)session composition:(id)composition;
- (void)viewDidLoad;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC29IGStoryFriendStoryPostCapture46IGStoryPostCaptureAudienceSearchViewController_h */