//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNUXDiscoverPeopleQuickFriendingStepController_h
#define IGNUXDiscoverPeopleQuickFriendingStepController_h
@import Foundation;

#include "IGNUXFlowContext.h"
#include "IGRegistrationNUXCALConnectViewController.h"
#include "IGRegistrationNUXCALDisclosureViewController.h"
#include "NSObject-Protocol.h"
#include "_TtP15IGFriendingList37IGFriendingListViewControllerDelegate_-Protocol.h"

@class NSString, UIViewController;
@protocol IGNUXFlowCoordinatorProtocol;

@interface IGNUXDiscoverPeopleQuickFriendingStepController : NSObject<_TtP15IGFriendingList37IGFriendingListViewControllerDelegate_, NSObject> {
  /* instance variables */
  UIViewController *_viewController;
  IGRegistrationNUXCALConnectViewController *_connectVC;
  IGRegistrationNUXCALDisclosureViewController *_disclosureVC;
}

@property (readonly, nonatomic) IGNUXFlowContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGNUXFlowCoordinatorProtocol> *coordinator;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)viewController;
- (id)stepName;
- (void)discoverPeopleViewController:(id)controller didTriggerCALFlowWithBigBlueToken:(id)token;
- (void)discoverPeopleViewController:(id)controller didTriggerCALFlowWithSDKAccessToken:(id)token;
- (void)discoverPeopleViewControllerDidExposeToCALControlGroup:(id)group;
- (void)calVCDidTapSeeAllLinkedAccountsButton:(id)button;
- (void)calVCDidTapPrimaryButton:(id)button;
- (void)calVCDidTapSecondaryButton:(id)button;
- (void)calVCDidTapBackButton:(id)button;
- (void)secondCalVCDidCompleteLinkMutation:(id)mutation success:(BOOL)success;
- (void)secondCalVCDidTapPrimaryButton:(id)button;
- (void)secondCalVCDidTapSecondaryButton:(id)button;
- (void)ageMismatchViewDidTapPrimaryButton:(id)button withAgeInfo:(id)info;
- (void)friendingListViewControllerDidSubmit:(id)submit withNumOfAccountsFollow:(long long)follow;
- (void)_onNextButtonTapped;
- (void)_onSkipButtonTappedInDPNUX;
@end

#endif /* IGNUXDiscoverPeopleQuickFriendingStepController_h */
