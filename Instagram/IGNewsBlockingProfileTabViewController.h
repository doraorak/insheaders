//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNewsBlockingProfileTabViewController_h
#define IGNewsBlockingProfileTabViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDynamicPageChildViewControllerDelegate-Protocol.h"
#include "IGNewsBlockingIconTextView.h"
#include "IGProfileTabViewController-Protocol.h"
#include "IGProfileTabViewControllerDelegate-Protocol.h"

@class IGBloksAsyncActionHandler, IGUserSession, NSString;

@interface IGNewsBlockingProfileTabViewController : IGViewController<IGProfileTabViewController> {
  /* instance variables */
  IGUserSession *_userSession;
  IGNewsBlockingIconTextView *_iconTextView;
  BOOL _isViewingOwnProfile;
  IGBloksAsyncActionHandler *_bloksAsyncActionHandler;
  unsigned long long _country;
  NSString *_countryCode;
}

@property (weak, nonatomic) NSObject<IGProfileTabViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL disablePullToRefresh;
@property (weak, nonatomic) NSObject<IGDynamicPageChildViewControllerDelegate> *dynamicPageChildDelegate;

/* instance methods */
- (id)initWithUserSession:(id)session isViewingOwnProfile:(BOOL)profile;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredContentInsets;
- (void)didTapLearnMore;
- (id)scrollView;
- (id)scrollViewAnnouncer;
- (void)didBecomeSelectedPageInDynamicPageViewController;
- (void)willResignSelectedPageInDynamicPageViewController;
- (void)prepareForReuse;
- (id)refreshControl;
- (void)updateContentInsets;
- (void)setRefreshControlBackgroundColor:(id)color;
- (void)parentWillDisappearWithIsBeingRemovedFromStack:(BOOL)stack;
@end

#endif /* IGNewsBlockingProfileTabViewController_h */
