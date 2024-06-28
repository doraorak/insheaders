//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedAdsPostAdEngagementHandler_h
#define IGFeedAdsPostAdEngagementHandler_h
@import Foundation;

#include "IGFeedConfigurationType-Protocol.h"
#include "IGFeedItemAdsFeedbackInterfaceCellController.h"
#include "IGFeedItemAdsFeedbackInterfaceDataFetcher.h"
#include "IGFeedItemAdsInterestsPickerCellController.h"
#include "IGFeedItemLogger.h"
#include "IGFeedSectionControllerIntentAwareAdsDelegate-Protocol.h"
#include "IGFeedSectionControllerIntentAwareAdsState.h"
#include "IGFeedSectionPerformUpdateAnnouncer-Protocol.h"
#include "IGListSectionContext-Protocol.h"
#include "IGShoppingBloksInjectedFeedUnitHandler.h"

@class FBTimer, IGAdItem, IGUserSession, NSArray, NSString;
@protocol IGFeedItemAdsFeedbackInterfaceCellControllerDelegate, IGFeedItemAdsInterestsPickerCellControllerDelegate, IGFeedItemSectionContext;

@interface IGFeedAdsPostAdEngagementHandler : NSObject {
  /* instance variables */
  IGAdItem *_adItem;
  NSString *_analyticsModule;
  IGUserSession *_userSession;
  IGFeedItemLogger *_feedItemLogger;
  NSObject<IGFeedConfigurationType> *_feedConfiguration;
  IGShoppingBloksInjectedFeedUnitHandler *_shoppingBloksInjectedFeedUnitHandler;
  NSObject<IGFeedSectionPerformUpdateAnnouncer> *_feedSectionUpdateAnnouncer;
  long long _itemPositionInFeed;
  IGFeedItemAdsFeedbackInterfaceDataFetcher *_adsFeedbackInterfaceDataFetcher;
  FBTimer *_feedAFIDwellTimer;
  NSObject<IGListSectionContext> *_listSectionContext;
  NSObject<IGFeedItemSectionContext> *_feedItemSectionContext;
  NSObject<IGFeedItemAdsFeedbackInterfaceCellControllerDelegate> *_afiCellControllerDelegate;
  NSObject<IGFeedItemAdsInterestsPickerCellControllerDelegate> *_adsInterestsPickerCellControllerDelegate;
  FBTimer *_adRepetitionSurveyDwellTimer;
  double _adRepetitionSurveyDwellTimerStartedAt;
  FBTimer *_searchFeedSurveyDwellTimer;
  FBTimer *_showSearchFeedSurveyOnClickTimer;
  FBTimer *_adOopsSurveyDwellTimer;
  double _adOopsSurveyDwellTimerStartedAt;
  NSArray *_mediaIds;
  NSObject<IGFeedSectionControllerIntentAwareAdsDelegate> *_intentAwareAdsDelegate;
  IGFeedSectionControllerIntentAwareAdsState *_intentAwareAdsState;
  IGFeedItemAdsFeedbackInterfaceCellController *_adsFeedbackInterfaceController;
  IGFeedItemAdsInterestsPickerCellController *_adsInterestsPickerController;
}

/* instance methods */
- (id)initWithAdItem:(id)item analyticsModule:(id)module userSession:(id)session feedItemLogger:(id)logger feedConfiguration:(id)configuration listSectionContext:(id)context feedItemSectionContext:(id)context itemPositionInFeed:(long long)feed shoppingBloksInjectedFeedUnitHandler:(id)handler feedSectionUpdateAnnouncer:(id)announcer intentAwareAdsDelegate:(id)delegate afiCellControllerDelegate:(id)delegate adsInterestsPickerCellControllerDelegate:(id)delegate;
@end

#endif /* IGFeedAdsPostAdEngagementHandler_h */
