//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedEmptyFavoritesSectionController_h
#define IGFeedEmptyFavoritesSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGFeedEmptyFavoritesModel.h"
#include "NSObject-Protocol.h"

@class IGUserSession, NSString;
@protocol IGMainFeedPerformUpdateAnnouncer;

@interface IGFeedEmptyFavoritesSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGFeedEmptyFavoritesModel *_model;
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  NSString *_sessionId;
  NSObject<IGMainFeedPerformUpdateAnnouncer> *_announcer;
}

@property (nonatomic) BOOL isImmersive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module sessionId:(id)id feedAnnouncer:(id)announcer;
- (void)didUpdateToObject:(id)object;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)emptyFavoritesCellDidTapButton:(id)button;
@end

#endif /* IGFeedEmptyFavoritesSectionController_h */
