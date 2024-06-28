//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemAdsFeedbackInterfaceCellControllerDelegateImpl_h
#define IGFeedItemAdsFeedbackInterfaceCellControllerDelegateImpl_h
@import Foundation;

#include "IGFeedConfigurationType-Protocol.h"
#include "IGFeedItemLogger.h"
#include "IGFeedSectionControllerIntentAwareAdsDelegate-Protocol.h"
#include "IGFeedSectionControllerIntentAwareAdsState.h"
#include "IGFeedSectionPerformUpdateAnnouncer-Protocol.h"
#include "NSObject-Protocol.h"

@class IGAdItem, IGUserSession, NSString;

@interface IGFeedItemAdsFeedbackInterfaceCellControllerDelegateImpl : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGFeedSectionPerformUpdateAnnouncer> *_feedSectionUpdateAnnouncer;
  IGAdItem *_adItem;
  NSString *_analyticsModule;
  IGUserSession *_userSession;
  IGFeedItemLogger *_feedItemLogger;
  NSObject<IGFeedConfigurationType> *_feedConfiguration;
  long long _itemPositionInFeed;
  NSObject<IGFeedSectionControllerIntentAwareAdsDelegate> *_intentAwareAdsDelegate;
  IGFeedSectionControllerIntentAwareAdsState *_intentAwareAdsState;
}

@property (nonatomic) BOOL shouldShowAdsFeedbackInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeedSectionUpdateAnnouncer:(id)announcer adItem:(id)item analyticsModule:(id)module userSession:(id)session feedItemLogger:(id)logger feedConfiguration:(id)configuration itemPositionInFeed:(long long)feed intentAwareAdsDelegate:(id)delegate;
- (void)afiDidTapDismissButton:(id)button;
- (void)afiDidSubmitResponse:(id)response answer:(unsigned long long)answer afiTriggerType:(unsigned long long)type;
@end

#endif /* IGFeedItemAdsFeedbackInterfaceCellControllerDelegateImpl_h */
