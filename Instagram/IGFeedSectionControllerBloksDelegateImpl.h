//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedSectionControllerBloksDelegateImpl_h
#define IGFeedSectionControllerBloksDelegateImpl_h
@import Foundation;

#include "IGFeedItemPageCellState.h"
#include "IGFeedSectionControllerBloksDelegate-Protocol.h"
#include "IGFeedSectionPerformUpdateAnnouncer-Protocol.h"
#include "IGFeedShareSheetHandler.h"

@class IGUserSession, NSString;

@interface IGFeedSectionControllerBloksDelegateImpl : NSObject<IGFeedSectionControllerBloksDelegate> {
  /* instance variables */
  NSObject<IGFeedSectionPerformUpdateAnnouncer> *_feedSectionUpdateAnnouncer;
  IGUserSession *_userSession;
  IGFeedShareSheetHandler *_shareSheetHandler;
  IGFeedItemPageCellState *_pageCellState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initFeedSectionControllerBloksDelegateWithUserSession:(id)session feedSectionUpdateAnnouncer:(id)announcer;
- (void)forceOpenShareSheet;
- (void)handleUserScopedIntentFromBloks:(id)bloks;
@end

#endif /* IGFeedSectionControllerBloksDelegateImpl_h */
