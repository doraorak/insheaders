//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingMerchantSectionController_h
#define IGShoppingMerchantSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGShoppingMerchantLogger.h"
#include "IGShoppingMerchantViewModel.h"
#include "IGStorySeenStateStoreListener-Protocol.h"
#include "IGStoryViewerPresentationController.h"

@class IGShoppingConsumptionFeedItemLogger, IGUserSession, NSString;

@interface IGShoppingMerchantSectionController : IGListSectionController<IGStorySeenStateStoreListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGShoppingMerchantViewModel *_viewModel;
  IGShoppingMerchantLogger *_merchantLogger;
  IGShoppingConsumptionFeedItemLogger *_consumptionLogger;
  IGStoryViewerPresentationController *_storyViewerPresentationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session merchantLogger:(id)logger consumptionLogger:(id)logger;
- (void)dealloc;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)shoppingMerchantCellDidTapShopButton:(id)button;
- (void)shoppingMerchantCellWasTapped:(id)tapped;
- (void)shoppingMerchantCellDidTapAvatar:(id)avatar;
- (void)shoppingMerchantCellDidTapStoryRing:(id)ring;
- (void)storySeenStateStoreDidUpdateReelPK:(id)pk;
@end

#endif /* IGShoppingMerchantSectionController_h */