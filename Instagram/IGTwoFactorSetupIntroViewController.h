//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTwoFactorSetupIntroViewController_h
#define IGTwoFactorSetupIntroViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGTwoFactorSetupIntroView.h"
#include "IGTwoFactorSetupLogger.h"
#include "NSObject-Protocol.h"

@class IGTwoFactorStatusInfo, IGUserSession, NSString;

@interface IGTwoFactorSetupIntroViewController : IGViewController<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  IGTwoFactorStatusInfo *_statusInfo;
  IGTwoFactorSetupIntroView *_setupIntroView;
  IGTwoFactorSetupLogger *_setupLogger;
  BOOL _presentModally;
  id /* block */ _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session statusInfo:(id)info setupLogger:(id)logger presentModally:(BOOL)modally callback:(id /* block */)callback;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (long long)preferredTabBarBehavior;
- (void)twoFactorSetupIntroViewDidTapOnStartButton:(id)button;
- (void)twoFactorSetupIntroView:(id)view didTapOnLinkWithURL:(id)url;
- (void)_onDismissTapped;
@end

#endif /* IGTwoFactorSetupIntroViewController_h */