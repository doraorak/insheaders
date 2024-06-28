//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextSheetCaptionViewController_h
#define IGContextSheetCaptionViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGContextSheetCaptionModel.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGGestureHandler-Protocol.h"

@class IGBottomButtonsView, IGCoreTextView, IGMedia, IGSponsoredSupportConfiguration, IGUserSession, NSString, UIScrollView;
@protocol IGContextSheetCaptionViewControllerDelegate;

@interface IGContextSheetCaptionViewController : IGViewController<IGCoreTextLinkHandler, IGGestureHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMedia *_media;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  long long _currentItemIndex;
  IGContextSheetCaptionModel *_captionModel;
  NSString *_priorModule;
  UIScrollView *_scrollView;
  IGCoreTextView *_coreTextView;
  IGBottomButtonsView *_bottomButtonsView;
}

@property (weak, nonatomic) NSObject<IGContextSheetCaptionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media sponsoredSupportConfiguration:(id)configuration currentItemIndex:(long long)index contextSheetCaptionModel:(id)model priorModule:(id)module;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)_ctaButtonTapped;
- (id)analyticsModule;
- (id)userSession;
- (id)trackingModel;
- (BOOL)canRespondToGesture:(id)gesture;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGContextSheetCaptionViewController_h */
