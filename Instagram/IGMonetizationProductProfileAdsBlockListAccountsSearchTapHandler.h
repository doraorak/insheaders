//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductProfileAdsBlockListAccountsSearchTapHandler_h
#define IGMonetizationProductProfileAdsBlockListAccountsSearchTapHandler_h
@import Foundation;

#include "IGMonetizationProductAdControlsBlockListDataSource.h"
#include "IGSearchClickHandler-Protocol.h"
#include "IGSearchClickHandlerUIUpdater-Protocol.h"

@class IGUserSession, NSString;

@interface IGMonetizationProductProfileAdsBlockListAccountsSearchTapHandler : NSObject<IGSearchClickHandler> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMonetizationProductAdControlsBlockListDataSource *_dataSource;
}

@property (weak, nonatomic) NSObject<IGSearchClickHandlerUIUpdater> *updateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session dataSource:(id)source;
- (BOOL)shouldAllowClickForSearchableItem:(id)item;
- (void)handleClickForSearchableItem:(id)item query:(id)query searchSessionID:(id)id serpSessionId:(id)id navigationController:(id)controller navigationExtras:(id)extras logger:(id)logger completionDelegate:(id)delegate;
- (void)handleTapOnActionButtonForSearchableItem:(id)item navigationController:(id)controller;
- (void)handleTapOnDestructiveButtonForSearchableItem:(id)item navigationController:(id)controller;
- (void)handleTapOnTextViewString:(id)string URL:(id)url;
- (void)handleTouchEvent:(unsigned long long)event forSearchableItem:(id)item;
- (void)handleClickForEchoSearchWithQuery:(id)query searchSessionID:(id)id navigationController:(id)controller navigationExtras:(id)extras;
@end

#endif /* IGMonetizationProductProfileAdsBlockListAccountsSearchTapHandler_h */
