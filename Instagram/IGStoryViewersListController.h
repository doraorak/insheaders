//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewersListController_h
#define IGStoryViewersListController_h
@import Foundation;

#include "IGStoryItemType-Protocol.h"
#include "IGStoryViewersDataSource.h"
#include "IGStoryViewersListControllerContext.h"
#include "IGUserBlockingActionListener-Protocol.h"

@class IGAPIRequestToken, IGUserSession, NSString, NSTimer;
@protocol IGStoryViewersListControllerDelegate;

@interface IGStoryViewersListController : NSObject<IGUserBlockingActionListener> {
  /* instance variables */
  NSObject<IGStoryItemType> *_item;
  IGUserSession *_userSession;
  IGStoryViewersDataSource *_instagramStoryViewersDatasource;
  IGStoryViewersDataSource *_facebookStoryViewersDatasource;
  IGStoryViewersDataSource *_spamStoryViewersDatasource;
  IGAPIRequestToken *_instagramFetchToken;
  IGAPIRequestToken *_facebookFetchToken;
  NSString *_currentInstagramViewerID;
  NSString *_currentFacebookViewerID;
  NSString *_maxInstagramViewerID;
  NSString *_maxFacebookViewerID;
  NSString *_viewerSourceString;
  IGStoryViewersListControllerContext *_context;
  NSTimer *_requestThrottleTimer;
  BOOL _hasNextPage;
  NSString *_endCursor;
  NSString *_reelID;
  BOOL _facebookSectionCollapsed;
  BOOL _spamSectionCollapsed;
  long long _instagramViewersFetchStatus;
  long long _facebookViewersFetchStatus;
  unsigned long long _feedbackTypeOptions;
}

@property (weak, nonatomic) NSObject<IGStoryViewersListControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItem:(id)item feedbackTypeOptions:(unsigned long long)options reelID:(id)id viewerSourceString:(id)string userSession:(id)session context:(id)context;
- (void)dealloc;
- (BOOL)isLoading;
- (BOOL)isLoaded;
- (BOOL)isFBStoryArchived;
- (void)user:(id)user blocked:(BOOL)blocked messagingOnlyBlocked:(BOOL)blocked;
@end

#endif /* IGStoryViewersListController_h */
