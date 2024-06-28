//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteHECAppealFlowManager_h
#define IGPromoteHECAppealFlowManager_h
@import Foundation;

#include "IGBoostPostLogger.h"
#include "IGNavigationCustomTransitionDelegate-Protocol.h"
#include "IGPromoteDataStore.h"

@class IGNavigationController, IGUserSession, NSString;

@interface IGPromoteHECAppealFlowManager : NSObject<IGNavigationCustomTransitionDelegate> {
  /* instance variables */
  IGBoostPostLogger *_logger;
  IGUserSession *_userSession;
  IGNavigationController *_navigationController;
  IGPromoteDataStore *_dataStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithController:(id)controller userFbId:(id)id mediaId:(id)id mediaUrl:(id)url audienceId:(id)id adAccountId:(id)id userSession:(id)session logger:(id)logger;
- (void)promoteAudienceViewControllerDidTapDoneBarButton:(id)button;
- (void)promoteAudienceViewControllerDidTapBackBarButton:(id)button;
- (void)promoteAudienceViewControllerDidTapSaveBarButton:(id)button;
- (void)promoteAudienceViewControllerDidTapNextBarButton:(id)button;
- (void)promoteAudienceViewController:(id)controller willLaunchCreateAndEditAudienceFlowWithManager:(id)manager;
- (void)promoteAudienceViewController:(id)controller didExitCreateAndEditAudienceFlowWithManager:(id)manager;
- (id)navigationController:(id)controller animationControllerForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (id)navigationController:(id)controller interactionControllerForAnimationController:(id)controller;
@end

#endif /* IGPromoteHECAppealFlowManager_h */
