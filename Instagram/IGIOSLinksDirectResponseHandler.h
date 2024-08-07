//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIOSLinksDirectResponseHandler_h
#define IGIOSLinksDirectResponseHandler_h
@import Foundation;

#include "IGDirectReplyToAuthorViewControllerPresenting-Protocol.h"
#include "IGFeedItemDirectResponseLoggingProviderDelegate-Protocol.h"
#include "IGIOSLinkHandler.h"
#include "IGMediaAndCanvasViewPresenter.h"
#include "IGMediaAndCanvasViewPresenterDelegate-Protocol.h"
#include "IGMessengerURLHandler.h"
#include "SFSafariViewControllerDelegate-Protocol.h"

@class IGSponsoredSupportConfiguration, IGUserSession, NSString;

@interface IGIOSLinksDirectResponseHandler : NSObject<SFSafariViewControllerDelegate, IGMediaAndCanvasViewPresenterDelegate> {
  /* instance variables */
  IGMessengerURLHandler *_messengerURLHandler;
  NSObject<IGDirectReplyToAuthorViewControllerPresenting> *_replyToAuthorVCPresenter;
  Class _contactActionHandler;
  IGMediaAndCanvasViewPresenter *_mediaAndCanvasViewPresenter;
  IGIOSLinkHandler *_linkHandler;
}

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, weak, nonatomic) NSObject<IGFeedItemDirectResponseLoggingProviderDelegate> *loggingDelegate;
@property (readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLoggingDelegate:(id)delegate userSession:(id)session sponsoredSupportConfiguration:(id)configuration;
- (id)mediaAndCanvasViewPresenter:(id)presenter configuredMediaViewFromView:(id)view;
- (id)handleFeedItem:(id)item feedItemTracker:(id)tracker shoppingSessionTracker:(id)tracker directResponseInfo:(id)info viewController:(id)controller pageCellState:(id)state mediaPosition:(long long)position userSession:(id)session context:(unsigned long long)context module:(id)module showCallConfirmation:(BOOL)confirmation presentationCompletion:(id /* block */)completion dismissalCompletion:(id /* block */)completion;
- (void)handleFeedItem:(id)item feedItemTracker:(id)tracker shoppingSessionTracker:(id)tracker directResponseInfo:(id)info viewController:(id)controller pageCellState:(id)state mediaPosition:(long long)position userSession:(id)session context:(unsigned long long)context module:(id)module showCallConfirmation:(BOOL)confirmation presentationCompletion:(id /* block */)completion dismissalCompletion:(id /* block */)completion resultBlock:(id /* block */)block callsiteSessionID:(id)id;
- (void)safariViewControllerDidFinish:(id)finish;
- (void)mediaAndCanvasViewPresenterDidDismiss:(id)dismiss;
- (void)linkHandlerDidStartHandlingLink:(id)link;
- (void)linkHandlerDidFinishHandlingLink:(id)link;
- (void)linkHandler:(id)handler didOpenLinkForProductId:(id)id presentingViewController:(id)controller;
@end

#endif /* IGIOSLinksDirectResponseHandler_h */
