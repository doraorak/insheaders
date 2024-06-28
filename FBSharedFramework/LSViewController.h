//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef LSViewController_h
#define LSViewController_h
@import Foundation;

#include "UIViewController.h"

@interface LSViewController : UIViewController {
  /* instance variables */
  struct LSViewControllerFuncTable { undefined *loadView; undefined *viewDidLoad; undefined *viewWillAppear; undefined *viewDidAppear; undefined *viewWillDisappear; undefined *viewDidDisappear; undefined *viewWillLayoutSubviews; undefined *viewDidLayoutSubviews; undefined *preferredContentSize; undefined *shouldAutoRotate; undefined *supportedInterfaceOrientations; undefined *viewWillTransitionToSizeWithTransitionCoordinator; undefined *willTransitionToTraitCollectionWithTransitionCoordinator; undefined *shouldAutomaticallyForwardAppearanceMethods; undefined *willMoveToParentViewController; undefined *didMoveToParentViewController; undefined *updateViewConstraints; undefined *viewLayoutMarginsDidChange; undefined *viewSafeAreaInsetsDidChange; undefined *preferredContentSizeDidChangeForChildContentContainer; undefined *preferredStatusBarStyle; undefined *childViewControllerForStatusBarStyle; undefined *preferredStatusBarUpdateAnimation; undefined *prefersStatusBarHidden; undefined *modalPresentationCapturesStatusBarAppearance; undefined *accessibilityActivate; undefined *accessibilityIncrement; undefined *accessibilityDecrement; undefined *accessibilityScroll; undefined *accessibilityPerformEscape; undefined *dealloc; undefined *accessibilityValue; undefined *accessibilityLabel; undefined *accessibilityHint; undefined *debugDescription; undefined *preferredScreenEdgesDeferringSystemGestures; undefined *childViewControllerForScreenEdgesDeferringSystemGestures; undefined *traitCollectionDidChange; undefined *surfaceTags; } _funcTable;
  const char * _className;
}

/* instance methods */
- (id)initWithFuncTable:(struct LSViewControllerFuncTable { undefined * x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; undefined * x12; undefined * x13; undefined * x14; undefined * x15; undefined * x16; undefined * x17; undefined * x18; undefined * x19; undefined * x20; undefined * x21; undefined * x22; undefined * x23; undefined * x24; undefined * x25; undefined * x26; undefined * x27; undefined * x28; undefined * x29; undefined * x30; undefined * x31; undefined * x32; undefined * x33; undefined * x34; undefined * x35; undefined * x36; undefined * x37; undefined * x38; })table className:(const char *)name;
- (void)dealloc;
- (id)className;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)willTransitionToTraitCollection:(id)collection withTransitionCoordinator:(id)coordinator;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)willMoveToParentViewController:(id)controller;
- (void)didMoveToParentViewController:(id)controller;
- (void)updateViewConstraints;
- (void)viewLayoutMarginsDidChange;
- (void)viewSafeAreaInsetsDidChange;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (BOOL)accessibilityActivate;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)scroll;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)description;
- (id)debugDescription;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)traitCollectionDidChange:(id)change;
- (id)surfaceTags;
@end

#endif /* LSViewController_h */