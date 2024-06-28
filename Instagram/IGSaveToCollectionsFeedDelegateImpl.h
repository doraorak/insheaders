//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSaveToCollectionsFeedDelegateImpl_h
#define IGSaveToCollectionsFeedDelegateImpl_h
@import Foundation;

#include "IGFeedConfigurationType-Protocol.h"
#include "IGFeedItemPageCellState.h"
#include "IGFeedSectionControllerActionDelegate-Protocol.h"
#include "IGFeedSectionPerformUpdateAnnouncer-Protocol.h"
#include "IGFeedShoppingSessionTrackerProvider.h"
#include "IGSaveToCollectionsFeedDelegate-Protocol.h"

@class IGActionableConfirmationToastController, IGMedia, IGUserSession, NSString;

@interface IGSaveToCollectionsFeedDelegateImpl : NSObject<IGSaveToCollectionsFeedDelegate> {
  /* instance variables */
  NSObject<IGFeedSectionControllerActionDelegate> *_actionDelegate;
  NSObject<IGFeedSectionPerformUpdateAnnouncer> *_feedSectionUpdateAnnouncer;
  IGFeedShoppingSessionTrackerProvider *_shoppingSessionTrackerProvider;
  IGFeedItemPageCellState *_pageCellState;
  IGMedia *_media;
  NSObject<IGFeedConfigurationType> *_feedConfiguration;
  IGUserSession *_userSession;
  IGActionableConfirmationToastController *_toastController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initSaveToCollectionFeedDelegateImplWithMedia:(id)media feedConfiguration:(id)configuration userSession:(id)session actionDelegate:(id)delegate feedSectionUpdateAnnouncer:(id)announcer shoppingSessionTrackerProvider:(id)provider pageCellState:(id)state toastController:(id)controller;
- (void)saveCollectionsViewController:(id)controller willUpdateCollection:(id)collection withRemoveFromCollection:(BOOL)collection;
- (void)saveCollectionsViewController:(id)controller didUpdateCollection:(id)collection withRemoveFromCollection:(BOOL)collection;
- (void)saveCollectionsViewController:(id)controller updateFailedWithCollection:(id)collection;
- (BOOL)saveCollectionsViewController:(id)controller shouldPauseForCollectionWithTitle:(id)title continueHandler:(id /* block */)handler;
- (void)saveCollectionsViewControllerDidDismiss:(id)dismiss;
@end

#endif /* IGSaveToCollectionsFeedDelegateImpl_h */