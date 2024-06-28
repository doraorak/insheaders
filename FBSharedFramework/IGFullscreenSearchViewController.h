//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFullscreenSearchViewController_h
#define IGFullscreenSearchViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGBasicListViewController.h"
#include "IGFullscreenSearchViewControllerLayoutSpec.h"
#include "IGKeyboardObserver.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#include "IGSearchBarWithCancel.h"

@class NSString, UIView, UIViewController;
@protocol IGFullscreenSearchViewControllerDelegate;

@interface IGFullscreenSearchViewController : IGViewController<IGKeyboardObserverFrameChangeDelegate> {
  /* instance variables */
  IGKeyboardObserver *_keyboardObserver;
  IGFullscreenSearchViewControllerLayoutSpec *_layoutSpec;
  UIView *_searchBarBottomBorderView;
  IGSearchBarWithCancel *_searchInput;
  IGBasicListViewController *_resultsViewController;
}

@property (weak, nonatomic) UIViewController *sourceViewController;
@property (weak, nonatomic) NSObject<IGFullscreenSearchViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnalyticsModule:(id)module searchBarConfig:(id)config layoutSpec:(id)spec;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredMinimizableInsets;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
@end

#endif /* IGFullscreenSearchViewController_h */