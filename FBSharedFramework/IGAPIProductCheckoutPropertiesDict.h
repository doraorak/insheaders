//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIProductCheckoutPropertiesDict_h
#define IGAPIProductCheckoutPropertiesDict_h
@import Foundation;

#include "IGAPIValueObject.h"

@interface IGAPIProductCheckoutPropertiesDict : IGAPIValueObject
/* class methods */
+ (const struct IGAPIValueObjectSchema *)APIValueObjectSchema;
+ (id)valueWithCanAddToBag:(id)bag canEnableRestockReminder:(id)reminder canShowInventoryQuantity:(id)quantity currencyAmount:(id)amount fullInventoryQuantity:(id)quantity hasFreeShipping:(id)shipping hasFreeTwoDayShipping:(id)shipping igReferrerFbid:(id)fbid inventoryQuantity:(id)quantity isPurchaseProtected:(id)protected isShopifyMerchant:(id)merchant preOrderEstimateFulfillDate:(id)date productGroupHasInventory:(id)inventory receiverId:(id)id shippingAndReturn:(id)return twoDayShippingMetadata:(id)metadata viewerPurchaseLimit:(id)limit;
@end

#endif /* IGAPIProductCheckoutPropertiesDict_h */
