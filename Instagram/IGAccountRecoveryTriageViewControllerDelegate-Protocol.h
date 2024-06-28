//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountRecoveryTriageViewControllerDelegate_Protocol_h
#define IGAccountRecoveryTriageViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGAccountRecoveryTriageViewControllerDelegate <NSObject>
/* instance methods */
- (void)accountRecoveryTriageViewController:(id)controller didRequestRecoverCodeWithContext:(id)context;
- (void)accountRecoveryTriageViewControllerDidTapBackToLogin:(id)login;
@end

#endif /* IGAccountRecoveryTriageViewControllerDelegate_Protocol_h */