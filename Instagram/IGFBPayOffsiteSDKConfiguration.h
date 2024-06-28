//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPayOffsiteSDKConfiguration_h
#define IGFBPayOffsiteSDKConfiguration_h
@import Foundation;

#include "FBPayOffsiteSDKConfiguration.h"

@class IGActionableConfirmationToastPresenter, IGUserSession;

@interface IGFBPayOffsiteSDKConfiguration : FBPayOffsiteSDKConfiguration {
  /* instance variables */
  IGUserSession *_userSession;
  IGActionableConfirmationToastPresenter *_toastPresenter;
}

/* instance methods */
- (id)initWithLogger:(id)logger userSession:(id)session;
- (id)createLauncherWithUserSession:(id)session logger:(id)logger;
- (void)presentAwarenessToastWithMessage:(id)message inViewController:(id)controller;
- (void)dismissAwarenessToast;
- (BOOL)shouldShowLast4OfCCInAwarenessBannerMessage;
- (BOOL)isOSAutofillEnabled;
- (BOOL)peekOSAutofillEnabled;
- (long long)proactiveCheckoutShortTermCheckoutCancellationLimit;
- (long long)proactiveCheckoutLongTermCheckoutCancellationLimit;
- (double)proactiveCheckoutShortTermTimeInterval;
- (double)proactiveCheckoutLongTermTimeInterval;
- (long long)proactiveCheckoutMinimumPurchaseRequiredToHideBanner;
- (double)proactiveCheckoutCoolDownTimeInterval;
- (BOOL)isMetaCheckoutEnabled;
- (id)urlFromLinkShim:(id)shim;
@end

#endif /* IGFBPayOffsiteSDKConfiguration_h */