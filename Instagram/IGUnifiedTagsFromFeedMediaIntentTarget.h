//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnifiedTagsFromFeedMediaIntentTarget_h
#define IGUnifiedTagsFromFeedMediaIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGFeedItemLoggingProviderDelegate-Protocol.h"
#include "IGFeedItemPageCellState.h"
#include "IGFeedTagsProvider-Protocol.h"
#include "IGSponsoredInfoProviding-Protocol.h"

@class IGMedia, IGSessionTracker, IGSponsoredSupportConfiguration, NSDictionary, NSString;
@protocol IGFeedUpcomingEventViewControllerDelegate><IGPartialModalSheetListener><IGSegmentedTabPageViewControllerDelegate><IGUnifiedTagsListUpcomingEventViewControllerDelegate;

@interface IGUnifiedTagsFromFeedMediaIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) NSObject<IGFeedTagsProvider> *feedTagsProvider;
@property (readonly, nonatomic) NSObject<IGFeedItemLoggingProviderDelegate> *feedItemLoggingProvider;
@property (readonly, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property (readonly, nonatomic) IGFeedItemPageCellState *pageCellState;
@property (readonly, nonatomic) NSString *priorModule;
@property (readonly, nonatomic) NSString *priorSubmodule;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (readonly, nonatomic) NSDictionary *loggingExtras;
@property (readonly, nonatomic) NSObject<IGSponsoredInfoProviding> *sponsoredPostInfo;
@property (readonly, nonatomic) NSObject<IGFeedUpcomingEventViewControllerDelegate><IGPartialModalSheetListener><IGSegmentedTabPageViewControllerDelegate><IGUnifiedTagsListUpcomingEventViewControllerDelegate> *feedSectionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedia:(id)media mediaType:(long long)type feedTagsProvider:(id)provider feedItemLoggingProvider:(id)provider sponsoredSupportConfiguration:(id)configuration pageCellState:(id)state priorModule:(id)module priorSubmodule:(id)submodule entryPoint:(long long)point shoppingSessionTracker:(id)tracker loggingExtras:(id)extras sponsoredPostInfo:(id)info feedSectionController:(id)controller;
@end

#endif /* IGUnifiedTagsFromFeedMediaIntentTarget_h */
