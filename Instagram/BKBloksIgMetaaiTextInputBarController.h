//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksIgMetaaiTextInputBarController_h
#define BKBloksIgMetaaiTextInputBarController_h
@import Foundation;

#include "BKBloksComponentController.h"
#include "IGSearchBarDelegate-Protocol.h"

@class IGSearchBarWithCancel, IGSearchSession, IGUserSession, NSString;
@protocol IGSearchKeywordTypeaheadDataProvider;

@interface BKBloksIgMetaaiTextInputBarController : BKBloksComponentController<IGSearchBarDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGSearchBarWithCancel *_searchBarWithCancel;
  NSObject<IGSearchKeywordTypeaheadDataProvider> *_keywordTypeaheadDataProvider;
  IGSearchSession *_searchSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)didAcquireView:(id)view;
- (void)didMount:(id)mount;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)searchBarMetaAIButtonTappedOnSearchBar:(id)bar;
- (void)searchBarDirectSendButtonTappedOnSearchBar:(id)bar;
- (void)searchBarRightAccessoryButtonTappedOnSearchBar:(id)bar;
- (void)searchKeywordTypeaheadDataProviderDidUpdateItems:(id)items;
- (void)searchKeywordTypeaheadDataProvider:(id)provider didFailToLoadSearchQuery:(id)query;
- (void)searchKeywordTypeaheadDataProviderDidFinishLoading:(id)loading;
- (id)currentSearchTextForSearchKeywordTypeaheadDataProvider:(id)provider;
- (id)searchSessionIDForSearchKeywordTypeaheadDataProvider:(id)provider;
- (void)_presentMetaAIThreadWithPrompt:(id)prompt;
@end

#endif /* BKBloksIgMetaaiTextInputBarController_h */
