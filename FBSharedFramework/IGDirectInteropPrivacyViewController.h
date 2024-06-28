//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInteropPrivacyViewController_h
#define IGDirectInteropPrivacyViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGDirectInteropPrivacyViewModel.h"
#include "IGStackView.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UIScrollView, UITextView;
@protocol IGDirectInteropPrivacyLinkHandling, IGDirectInteropWrapperViewControllerDelegate;

@interface IGDirectInteropPrivacyViewController : UIViewController<IGAnalyticsModule, UITextViewDelegate> {
  /* instance variables */
  IGDirectInteropPrivacyViewModel *_viewModel;
  IGStackView *_privacyHighlightsStackView;
  UIScrollView *_scrollView;
  UILabel *_headerTitleLabel;
  UITextView *_headerSubtextView;
  BOOL _addBackIcon;
  BOOL _addDoneButton;
  BOOL _shouldDismissViewController;
  NSObject<IGDirectInteropPrivacyLinkHandling> *_linkHandler;
  NSObject<IGDirectInteropWrapperViewControllerDelegate> *_wrapperDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model addBackIcon:(BOOL)icon addDoneButton:(BOOL)button shouldDismissViewController:(BOOL)controller linkHandler:(id)handler;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)traitCollectionDidChange:(id)change;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)_didPressReturnButton;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (void)textViewDidChangeSelection:(id)selection;
- (void)bulletPointListItemViewDidTapOnLink:(id)link;
- (id)analyticsModule;
@end

#endif /* IGDirectInteropPrivacyViewController_h */