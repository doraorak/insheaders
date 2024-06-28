//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingCartIndexIntentTarget_h
#define IGShoppingCartIndexIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGShoppingCartIndexEntryPointData.h"
#include "IGSponsoredInfoProviding-Protocol.h"

@class IGSessionTracker, IGShoppingConsumptionAnalyticsContext, NSString;

@interface IGShoppingCartIndexIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGShoppingCartIndexEntryPointData *entryPointData;
@property (readonly, nonatomic) NSObject<IGSponsoredInfoProviding> *sponsoredInfoProvider;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;
@property (readonly, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) NSString *pinnedMerchantPk;
@property (readonly, nonatomic) IGShoppingConsumptionAnalyticsContext *consumptionLoggingInfo;
@property (readonly, nonatomic) BOOL isRenderedInWishlist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEntryPointData:(id)data sponsoredInfoProvider:(id)provider shoppingSessionTracker:(id)tracker mediaId:(id)id pinnedMerchantPk:(id)pk consumptionLoggingInfo:(id)info isRenderedInWishlist:(BOOL)wishlist;
@end

#endif /* IGShoppingCartIndexIntentTarget_h */
