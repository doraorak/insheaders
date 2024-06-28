//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPayoutOnboardingSetFinancialEntityInformationSender_h
#define IGPayoutOnboardingSetFinancialEntityInformationSender_h
@import Foundation;

@class IGUserSession, NSString;

@interface IGPayoutOnboardingSetFinancialEntityInformationSender : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_financialEntityId;
  NSString *_credentialId;
}

/* instance methods */
- (id)initWithUserSession:(id)session financialEntityId:(id)id credentialId:(id)id;
@end

#endif /* IGPayoutOnboardingSetFinancialEntityInformationSender_h */
