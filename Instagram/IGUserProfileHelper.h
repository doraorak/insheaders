//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserProfileHelper_h
#define IGUserProfileHelper_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGUserProfileHelper : NSObject<NSObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)getDirectionsToUser:(id)user userSession:(id)session address:(id)address analyticsModule:(id)module mediaAttribution:(id)attribution trackingToken:(id)token fromNavigationController:(id)controller locationId:(id)id;
+ (void)openFBEForUser:(id)user fromNavigationController:(id)controller userSession:(id)session mediaAttribution:(id)attribution;
+ (void)_pushThreadOptionsActionSheetForUser:(id)user fromNavigationController:(id)controller presentingController:(id)controller userSession:(id)session clickPoint:(id)point entryPoint:(id)point monetizationGatingDecisions:(id)decisions;
+ (void)pushThreadVCForUser:(id)user fromNavigationController:(id)controller presentingController:(id)controller userSession:(id)session clickPoint:(id)point entryPoint:(id)point withEphemeralDraftMessage:(id)message sendMessageReferralContext:(id)context automatedTrigger:(id)trigger;
+ (void)pushThreadVCForUser:(id)user fromNavigationController:(id)controller userSession:(id)session clickPoint:(id)point entryPoint:(id)point withEphemeralDraftMessage:(id)message sendMessageReferralContext:(id)context automatedTrigger:(id)trigger;
+ (void)pushPartnershipThreadVCForUser:(id)user userSession:(id)session clickPoint:(id)point entryPoint:(id)point;
+ (void)pushCreatorMarketplaceOnboardingForCurrentUser:(id)user fromNavigationController:(id)controller userSession:(id)session;
+ (void)pushThreadVCForUser:(id)user entryPoint:(id)point userSession:(id)session animated:(BOOL)animated;
+ (void)pushShoppingFeedForProfile:(id)profile shoppableFeedType:(long long)type fromNavigationController:(id)controller userSession:(id)session adMetadata:(id)metadata priorModule:(id)module priorSubmodule:(id)submodule shoppingSessionTracker:(id)tracker attributedUsername:(id)username profileEntryId:(id)id pinnedProductIds:(id)ids mPk:(id)pk marketerId:(id)id;
+ (void)pushShoppingOnboardingForCurrentUser:(id)user fromNavigationController:(id)controller userSession:(id)session priorModule:(id)module;
+ (void)showMoreContactOptionsForUser:(id)user fromNavigationController:(id)controller userSession:(id)session actions:(id)actions clickPoint:(id)point analyticsModule:(id)module mediaAttribution:(id)attribution trackingToken:(id)token;
+ (void)_logProfileAction:(id)action clickPoint:(id)point navigationController:(id)controller user:(id)user isCurrentUser:(BOOL)user analyticsModule:(id)module mediaAttribution:(id)attribution trackingToken:(id)token userSession:(id)session;
+ (void)logBirthdayScreenImpression:(BOOL)impression userSession:(id)session;
+ (void)logBirthdayScreenUpdate:(id)update;
@end

#endif /* IGUserProfileHelper_h */