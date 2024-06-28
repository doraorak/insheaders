//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNUXFindFriendsStepController_h
#define IGNUXFindFriendsStepController_h
@import Foundation;

#include "IGNUXFlowContext.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGNUXFlowCoordinatorProtocol, UIViewController<IGRegistrationFindFriendsViewControllerConfiguring;

@interface IGNUXFindFriendsStepController : NSObject<NSObject> {
  /* instance variables */
  UIViewController<IGRegistrationFindFriendsViewControllerConfiguring> *_viewController;
}

@property (readonly, nonatomic) IGNUXFlowContext *context;
@property (readonly, nonatomic) long long mode;
@property (weak, nonatomic) NSObject<IGNUXFlowCoordinatorProtocol> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)viewController;
- (void)showUserListWithRequest:(id)request;
- (void)cancelUserFetch;
- (id)stepName;
- (void)findFriendsControllerDidLoad:(id)load;
- (void)findFriendsControllerSkipButtonTapped:(id)tapped;
- (void)findFriendsController:(id)controller didTapNextWithFollowCount:(unsigned long long)count;
- (void)findFriendsControllerDidFollowTopAccounts:(id)accounts;
- (void)findFriendsControllerDidAutoAdvanceToNextStep:(id)step;
- (void)findFriendsController:(id)controller wasTappedOnURL:(id)url;
- (id)regStepForFindFriendsViewController:(id)controller;
- (void)findFriendsControllerDidStartUserListFetch:(id)fetch;
- (void)findFriendsController:(id)controller didLoadUsers:(id)users;
- (void)findFriendsController:(id)controller didFailToLoadUsersWithError:(id)error;
- (void)findFriendsControllerDidTakePrimaryAction:(id)action entryPoint:(long long)point;
@end

#endif /* IGNUXFindFriendsStepController_h */
