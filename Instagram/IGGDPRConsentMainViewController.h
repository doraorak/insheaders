//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGDPRConsentMainViewController_h
#define IGGDPRConsentMainViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAPIClient-Protocol.h"
#include "IGGDPRConsentContext.h"
#include "IGGDPRConsentDataSource.h"
#include "IGGDPRConsentLayoutSpec.h"
#include "IGGDPRConsentLoadingOverlayView.h"
#include "IGGDPRConsentLogger.h"
#include "IGGDPRConsentMainView.h"
#include "IGGDPRConsentNavigationPresenter.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGGDPRConsentMainViewController : IGViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGGDPRConsentContext *_consentContext;
  IGGDPRConsentDataSource *_consentDataSource;
  IGGDPRConsentMainView *_consentMainView;
  IGGDPRConsentLoadingOverlayView *_loadingOverlayView;
  long long _ageSelectionButtons;
  IGGDPRConsentLogger *_logger;
  IGGDPRConsentLayoutSpec *_layoutSpec;
  NSString *_screenVariantKey;
  NSObject<IGAPIClient> *_networker;
  IGGDPRConsentNavigationPresenter *_presenter;
  BOOL _showTermContentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session consentContext:(id)context consentDataSource:(id)source screenVariantKey:(id)key networker:(id)networker navigationPresenter:(id)presenter;
- (void)viewDidLoad;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)onCancelModal;
- (void)GDPRConsentMainContentDidTapConsentButton:(BOOL)button;
- (void)GDPRConsentMainContentDidTapOtherOptionsLink;
- (void)GDPRConsentMainContentDidTapTextLinkWithURL:(id)url;
@end

#endif /* IGGDPRConsentMainViewController_h */