//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationContactPointViewControllerContext_h
#define IGRegistrationContactPointViewControllerContext_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGNUXLayoutSpec.h"

@class IGAuthHeaderStore, IGAuthenticator, IGFacebookAuthHelper, IGRegistrationLogger, IGSSOFetcher, NSString;

@interface IGRegistrationContactPointViewControllerContext : NSObject

@property (readonly, nonatomic) NSObject<IGAPIClient> *networker;
@property (readonly, nonatomic) IGNUXLayoutSpec *layoutSpec;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL tryLoginWhenPossible;
@property (readonly, nonatomic) IGAuthenticator *authenticator;
@property (readonly, nonatomic) IGAuthHeaderStore *authHeaderStore;
@property (readonly, nonatomic) IGFacebookAuthHelper *fbAuthHelper;
@property (readonly, nonatomic) IGSSOFetcher *ssoFetcher;
@property (readonly, nonatomic) IGRegistrationLogger *logger;
@property (readonly, nonatomic) BOOL isSwitchingUsers;
@property (readonly, nonatomic) BOOL isProCreationSignup;
@property (readonly, nonatomic) BOOL isSACFlow;
@property (readonly, nonatomic) BOOL showContinueWithFacebookButton;
@property (readonly, nonatomic) BOOL showBackButton;
@property (readonly, nonatomic) NSString *actorEmail;
@property (readonly, nonatomic) NSString *actorPhoneNumber;
@property (readonly, nonatomic) long long flowType;

/* instance methods */
- (id)initWithNetworker:(id)networker layoutSpec:(id)spec title:(id)title tryLoginWhenPossible:(BOOL)possible authenticator:(id)authenticator authHeaderStore:(id)store fbAuthHelper:(id)helper ssoFetcher:(id)fetcher logger:(id)logger isSwitchingUsers:(BOOL)users isProCreationSignup:(BOOL)signup isSACFlow:(BOOL)sacflow showContinueWithFacebookButton:(BOOL)button showBackButton:(BOOL)button actorEmail:(id)email actorPhoneNumber:(id)number flowType:(long long)type;
@end

#endif /* IGRegistrationContactPointViewControllerContext_h */
