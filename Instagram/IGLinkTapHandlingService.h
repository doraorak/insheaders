//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLinkTapHandlingService_h
#define IGLinkTapHandlingService_h
@import Foundation;

#include "IGDirectIABInterstitialViewControllerDelegate-Protocol.h"
#include "IGMessengerURLHandler.h"

@class IGUserSession, NSString;

@interface IGLinkTapHandlingService : NSObject<IGDirectIABInterstitialViewControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMessengerURLHandler *_messengerURLHandler;
  NSString *_webViewEventAnalyticsModule;
  NSString *_viewerSessionId;
  BOOL _useURLSafetyCheck;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session webViewEventAnalyticsModule:(id)module viewerSessionId:(id)id useURLSafetyCheck:(BOOL)check;
- (void)iabInterstitialViewControllerDidTapContinueButton:(id)button;
@end

#endif /* IGLinkTapHandlingService_h */
