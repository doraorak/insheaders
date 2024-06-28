//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGPublishScreenCaptionAddOn36IGPublishScreenCaptionViewController_h
#define _TtC27IGPublishScreenCaptionAddOn36IGPublishScreenCaptionViewController_h
@import Foundation;

#include "IGViewController.h"
#include "_TtP27IGPublishScreenCaptionAddOn44IGPublishScreenCaptionViewControllerDelegate_-Protocol.h"

@interface _TtC27IGPublishScreenCaptionAddOn36IGPublishScreenCaptionViewController : IGViewController { // (Swift)
  /* instance variables */
   kAnalyticsModule;
   captionCellHeight;
   captionText;
   captionAddOnModel;
   userSession;
   creationEntrypoint;
   textViewHeight;
   autocompleteController;
   shouldAutomaticallyAdjustContentInsets;
   isAddOnSectionVisible;
   $__lazy_storage_$_pollViewModel;
   $__lazy_storage_$_commentPromptViewModel;
   $__lazy_storage_$_collectionView;
}

@property (nonatomic) long long selectedAddOnType;
@property (nonatomic, weak) NSObject<_TtP27IGPublishScreenCaptionAddOn44IGPublishScreenCaptionViewControllerDelegate_> *delegate;

/* instance methods */
- (id)initWithCaptionText:(id)text captionAddOnModel:(id)model autocompleteController:(id)controller shouldAutomaticallyAdjustContentInsets:(BOOL)insets userSession:(id)session creationEntrypoint:(long long)entrypoint;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)willMoveToParentViewController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captionRectInView;
- (void)setAddOnsVisible:(BOOL)visible;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)overlayViewTapped:(id)tapped;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC27IGPublishScreenCaptionAddOn36IGPublishScreenCaptionViewController_h */