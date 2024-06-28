//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentWarningViewController_h
#define IGContentWarningViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGGestureHandler-Protocol.h"

@class IGBottomButtonsView, IGUserSession, NSMutableArray, NSString, UILabel, UIScrollView;
@protocol IGContentWarningViewControllerDelegate;

@interface IGContentWarningViewController : IGViewController<IGGestureHandler> {
  /* instance variables */
  UIScrollView *_containerView;
  UILabel *_titleLabel;
  NSMutableArray *_bodyViewsArray;
  IGBottomButtonsView *_bottomButtonsView;
  IGUserSession *_userSession;
  NSString *_presentingViewControllerModule;
}

@property (weak, nonatomic) NSObject<IGContentWarningViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session presentingViewControllerModule:(id)module;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)contentWarningBodyView:(id)view didTapURL:(id)url;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGContentWarningViewController_h */
