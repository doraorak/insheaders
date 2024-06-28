//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNUXFlowCoordinator_h
#define IGNUXFlowCoordinator_h
@import Foundation;

#include "IGNUXFlowContext.h"
#include "IGUserIntentHandlerDelegate-Protocol.h"
#include "_TtC39IGRecommendationFromFriendsDataProvider47IGAccountRecommendationsMultiFollowDataProvider.h"

@class IGNavigationController, NSMutableArray, NSString;
@protocol IGNUXRulesDataProvider, IGNUXStepControllerProtocol;

@interface IGNUXFlowCoordinator : NSObject<IGUserIntentHandlerDelegate> {
  /* instance variables */
  NSObject<IGNUXRulesDataProvider> *_dataProvider;
  IGNUXFlowContext *_context;
  NSObject<IGNUXStepControllerProtocol> *_stepController;
  NSMutableArray *_allSteps;
  _TtC39IGRecommendationFromFriendsDataProvider47IGAccountRecommendationsMultiFollowDataProvider *_suggestedUsersDataProvider;
}

@property (weak, nonatomic) IGNavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataProvider:(id)provider context:(id)context navigationController:(id)controller;
- (void)start;
- (void)rulesDataProvider:(id)provider didFetchRules:(id)rules;
- (void)rulesDataProvider:(id)provider didFetchRemoteRules:(id)rules;
- (void)stepControllerDidSkipStep:(id)step;
- (void)stepController:(id)controller didCompleteWithResult:(id)result;
- (BOOL)isStepInNuxFlow:(id)flow;
- (void)startPrefetchSuggestedUsers;
- (id)quickFriendingDataProvider;
- (id)presentedNavigationController;
@end

#endif /* IGNUXFlowCoordinator_h */
