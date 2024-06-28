//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductItemAnalyticsContext_h
#define IGShoppingProductItemAnalyticsContext_h
@import Foundation;

@class NSNumber, NSString;

@interface IGShoppingProductItemAnalyticsContext : NSObject

@property (readonly, nonatomic) long long productId;
@property (readonly, nonatomic) BOOL isCheckoutEnabled;
@property (readonly, nonatomic) NSString *merchantId;
@property (readonly, nonatomic) NSNumber *productInventory;
@property (readonly, nonatomic) NSNumber *hasDropsLaunched;
@property (readonly, nonatomic) NSNumber *dropsLaunchDate;

/* instance methods */
- (id)initWithProductId:(long long)id isCheckoutEnabled:(BOOL)enabled merchantId:(id)id productInventory:(id)inventory hasDropsLaunched:(id)launched dropsLaunchDate:(id)date;
@end

#endif /* IGShoppingProductItemAnalyticsContext_h */
