//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayShopPayWebAuthenticator_h
#define FBPayShopPayWebAuthenticator_h
@import Foundation;

#include "FBPayShopPayWebAuthenticatorResponseModel.h"
#include "FBWebAuthenticator.h"

@class NSURL, UIViewController;

@interface FBPayShopPayWebAuthenticator : NSObject {
  /* instance variables */
  FBWebAuthenticator *_webAuthenticator;
  id /* block */ _completion;
  UIViewController *_presenter;
  FBPayShopPayWebAuthenticatorResponseModel *_responseModel;
  NSURL *_url;
}

/* instance methods */
- (id)webAuthenticatorRequestURLScheme:(id)urlscheme;
- (id)webAuthenticatorWillSendRequest:(id)request;
- (id)webAuthenticator:(id)authenticator didReceiveURL:(id)url;
- (void)webAuthenticator:(id)authenticator completeWithResponse:(id)response;
- (id)webAuthenticator:(id)authenticator errorWithMessage:(id)message;
- (id)webAuthenticatorRequireAuthenticationPresenter:(id)presenter;
- (BOOL)webAuthenticator:(id)authenticator registerURLHandler:(id /* block */)urlhandler forURL:(id)url URLScheme:(id)urlscheme;
@end

#endif /* FBPayShopPayWebAuthenticator_h */