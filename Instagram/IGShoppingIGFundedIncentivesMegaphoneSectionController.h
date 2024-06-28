//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingIGFundedIncentivesMegaphoneSectionController_h
#define IGShoppingIGFundedIncentivesMegaphoneSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"

@class IGBloksAsyncActionHandler, IGSessionTracker, IGShoppingIncentiveViewModel, IGShoppingNavigationAnalyticsContext, IGShoppingPDPAnalyticsContext, IGUserSession, NSString;
@protocol IGShoppingIGFundedIncentivesMegaphoneSectionControllerDelegate;

@interface IGShoppingIGFundedIncentivesMegaphoneSectionController : IGListSectionController<IGCoreTextLinkHandler, IGListDisplayDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGShoppingNavigationAnalyticsContext *_navigationInfo;
  IGSessionTracker *_shoppingSessionTracker;
  BOOL _isExpanded;
  IGShoppingPDPAnalyticsContext *_pdpInfo;
  IGShoppingIncentiveViewModel *_viewModel;
  IGBloksAsyncActionHandler *_shoppingPDPIncentivesDetailsAsyncActionHandler;
}

@property (weak, nonatomic) NSObject<IGShoppingIGFundedIncentivesMegaphoneSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session navigationInfo:(id)info shoppingSessionTracker:(id)tracker appearanceStyle:(long long)style pdpInfo:(id)info;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)incentivesMegaphoneCell:(id)cell didTapDismissButton:(id)button;
- (void)incentivesMegaphoneOptimizationVariant1Cell:(id)cell didTapDismissButton:(id)button;
- (void)incentivesMegaphoneVariant3Cell:(id)cell didTapDismissButton:(id)button;
- (void)incentivesMegaphoneShopTabBannerVariant1CellDidTapDismissButton:(id)button;
- (void)incentivesMegaphoneShopTabBannerVariant1CellDidTapSecondaryButton;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)_appWillTerminate:(id)terminate;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
@end

#endif /* IGShoppingIGFundedIncentivesMegaphoneSectionController_h */