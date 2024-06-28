//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC19IGSettings2Renderer22SettingScreenViewModel_h
#define _TtC19IGSettings2Renderer22SettingScreenViewModel_h
@import Foundation;

#include "IGSettingsListener-Protocol.h"

@interface _TtC19IGSettings2Renderer22SettingScreenViewModel : NSObject<IGSettingsListener> { // (Swift)
  /* instance variables */
   id;
   dataModelFactory;
   userSession;
   dataModel;
   sharedContext;
   errorHandler;
   cancellables;
   isLoading;
   _screenTitle;
   _showsSearchBar;
   inProgressBooleanSettingUpdate;
   inProgressStringSettingUpdate;
   allSections;
   _sections;
   searchOnlyNavigationRowUiModels;
   accountCenterSearchRowUiModels;
   _searchFilteredNavigationRowUiModels;
   accountCenterSearchTask;
   resolveValuesTask;
   rendererLogger;
   store;
   resolver;
   searchText;
}

/* instance methods */
- (void)accountTypeDidChange;
- (void)accountPrivacyDidChange;
- (void)accountLinkingDidChange;
- (void)favoriteUsersDidChange;
- (void)closeFriendsDidChange;
- (void)blockedUsersDidChange;
- (void)restrictedUsersDidChange;
- (void)mutedUsersDidChange;
- (id)init;
@end

#endif /* _TtC19IGSettings2Renderer22SettingScreenViewModel_h */
