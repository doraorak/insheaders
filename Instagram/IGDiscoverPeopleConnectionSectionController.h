//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoverPeopleConnectionSectionController_h
#define IGDiscoverPeopleConnectionSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGContactsFriendsHelper.h"
#include "IGDiscoverPeopleConnectionItemConfiguration.h"
#include "IGFXBloksIdentitySyncCompletionHandlerDelegate-Protocol.h"
#include "IGFindFriendsHelperDelegate-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"

@class IGContactsUserStore, IGUserSession, NSString;
@protocol IGDiscoverPeopleConnectionSectionControllerDelegate;

@interface IGDiscoverPeopleConnectionSectionController : IGListBindingSingleSectionController<IGFindFriendsHelperDelegate, IGListDisplayDelegate, IGFXBloksIdentitySyncCompletionHandlerDelegate> {
  /* instance variables */
  long long _connectionType;
  IGContactsFriendsHelper *_contactsHelper;
  IGDiscoverPeopleConnectionItemConfiguration *_itemConfig;
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGContactsUserStore *_contactsUserStore;
  BOOL _isInNUXFlow;
  NSString *_customContactImportToastText;
  long long _viewSourceType;
}

@property (weak, nonatomic) NSObject<IGDiscoverPeopleConnectionSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnectionType:(long long)type userSession:(id)session analyticsModule:(id)module isInNUXFlow:(BOOL)nuxflow customContactImportToastText:(id)text viewSourceType:(long long)type;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (id)_titleSringInCIUpsellRedesignCell;
- (id)_subtitleStringInCIUpsellRedesignCell;
- (void)discoverPeopleConnectionCellDidPressActionButton:(id)button;
- (void)discoverPeopleConnectionCellDidTapDismissButton:(id)button;
- (void)discoverPeopleConnectionMegaphoneCellDidPressActionButton;
- (void)findFriendsHelper:(id)helper didAuthorizeWithDataRequest:(id)request;
- (void)findFriendsHelper:(id)helper didFailToAuthorizeWithMessage:(id)message;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)identitySyncFlowDidComplete:(BOOL)complete;
- (void)_onFacebookHardLinked:(id)linked;
@end

#endif /* IGDiscoverPeopleConnectionSectionController_h */
