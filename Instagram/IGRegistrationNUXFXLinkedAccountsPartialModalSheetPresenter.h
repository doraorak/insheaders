//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationNUXFXLinkedAccountsPartialModalSheetPresenter_h
#define IGRegistrationNUXFXLinkedAccountsPartialModalSheetPresenter_h
@import Foundation;

@class IGPartialModalSheetViewController, IGUserSession, NSArray, UILabel, UIViewController;

@interface IGRegistrationNUXFXLinkedAccountsPartialModalSheetPresenter : NSObject {
  /* instance variables */
  NSArray *_accounts;
  IGUserSession *_userSession;
  IGPartialModalSheetViewController *_partialModalSheetVC;
  UILabel *_partialModalSheetLabel;
}

@property (weak, nonatomic) UIViewController *presentingViewController;

/* instance methods */
- (id)initWithAccounts:(id)accounts userSession:(id)session presentingViewController:(id)controller;
- (void)present;
@end

#endif /* IGRegistrationNUXFXLinkedAccountsPartialModalSheetPresenter_h */
