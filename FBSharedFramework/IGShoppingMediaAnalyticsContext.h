//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingMediaAnalyticsContext_h
#define IGShoppingMediaAnalyticsContext_h
@import Foundation;

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IGShoppingMediaAnalyticsContext : NSObject

@property (readonly, nonatomic) long long mediaAuthorId;
@property (readonly, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) NSArray *taggedProductIds;
@property (readonly, nonatomic) NSArray *taggedUserIds;
@property (readonly, nonatomic) long long merchantId;
@property (readonly, nonatomic) BOOL checkoutEnabled;
@property (readonly, nonatomic) NSArray *stickerStyles;
@property (readonly, nonatomic) NSArray *taggedDropsProductIds;
@property (readonly, nonatomic) NSDictionary *swipeUpLink;
@property (readonly, nonatomic) NSDictionary *productMerchantIds;
@property (readonly, nonatomic) NSArray *sharedProductIds;
@property (readonly, nonatomic) NSString *productStickerId;
@property (readonly, nonatomic) NSString *productCollectionId;
@property (readonly, nonatomic) NSString *productCollectionType;
@property (readonly, nonatomic) NSNumber *discountId;

/* instance methods */
- (id)initWithMediaAuthorId:(long long)id mediaId:(id)id mediaType:(long long)type taggedProductIds:(id)ids taggedUserIds:(id)ids merchantId:(long long)id checkoutEnabled:(BOOL)enabled stickerStyles:(id)styles taggedDropsProductIds:(id)ids swipeUpLink:(id)link productMerchantIds:(id)ids sharedProductIds:(id)ids productStickerId:(id)id productCollectionId:(id)id productCollectionType:(id)type discountId:(id)id;
@end

#endif /* IGShoppingMediaAnalyticsContext_h */
