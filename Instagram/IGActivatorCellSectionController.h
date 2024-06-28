//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActivatorCellSectionController_h
#define IGActivatorCellSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGActivatorCell.h"
#include "IGActivatorCellViewModel.h"
#include "IGActivatorMegaphoneLogger.h"
#include "IGContactsFriendsHelper.h"
#include "IGFindFriendsHelperDelegate-Protocol.h"
#include "IGFriendCenterViewControllerDelegate-Protocol.h"
#include "IGListScrollDelegate-Protocol.h"
#include "IGProfilePictureHelperDelegate-Protocol.h"
#include "IGProfilePictureHelping-Protocol.h"

@class IGUserSession, NSString;
@protocol IGActivatorCellSectionControllerDelegate;

@interface IGActivatorCellSectionController : IGListSectionController<IGListScrollDelegate, IGFriendCenterViewControllerDelegate, IGProfilePictureHelperDelegate, IGFindFriendsHelperDelegate> {
  /* instance variables */
  NSString *_module;
  IGContactsFriendsHelper *_contactsHelper;
  IGActivatorCell *_activatorCell;
}

@property (readonly, nonatomic) IGActivatorCellViewModel *item;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, weak, nonatomic) NSObject<IGActivatorCellSectionControllerDelegate> *delegate;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) IGActivatorMegaphoneLogger *logger;
@property (retain, nonatomic) NSObject<IGProfilePictureHelping> *profilePictureHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate logger:(id)logger module:(id)module;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)listAdapter:(id)adapter didScrollSectionController:(id)controller;
- (void)listAdapter:(id)adapter willBeginDraggingSectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDraggingSectionController:(id)controller willDecelerate:(BOOL)decelerate;
- (void)didTapActivatorCell:(id)cell withType:(long long)type;
- (void)findFriendsHelper:(id)helper didAuthorizeWithDataRequest:(id)request;
- (void)findFriendsHelper:(id)helper didFailToAuthorizeWithMessage:(id)message;
- (void)findUsersViewControllerDidAuthorizeWithSuccess:(BOOL)success;
- (void)changePhoneNumberViewController:(id)controller doneEditingWithCountryNumber:(id)number phoneNumber:(id)number contactPreference:(unsigned long long)preference;
- (void)changePhonenumberViewController:(id)controller willPresentCountryCodeViewController:(id)controller;
- (void)changePhonenumberViewController:(id)controller didSelectCountryCode:(id)code;
- (void)changePhoneNumberViewController:(id)controller didChangeTwoFactorPhoneNumber:(id)number;
- (void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)number withResponse:(id)response;
- (void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)resent;
- (void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)number;
- (BOOL)profilePictureHelperShouldShowRemovePicture:(id)picture;
- (void)profilePictureHelper:(id)helper didFinishDownloadingProfilePicture:(id)picture fromOption:(long long)option;
- (void)profilePhotoAdded;
- (void)fullNameAndBioUpdated;
@end

#endif /* IGActivatorCellSectionController_h */