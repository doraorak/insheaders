//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPModuleHeaderAction_h
#define IGShoppingPDPModuleHeaderAction_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGShoppingDestinationFeedChainingResponse.h"
#include "IGShoppingMediaCollectionModel.h"

@class IGShoppingIGFundedIncentive, IGShoppingProductFeedResponse, NSString;

@interface IGShoppingPDPModuleHeaderAction : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_mediaCollectionSeeAll_title;
  long long _mediaCollectionSeeAll_collectionType;
  IGShoppingMediaCollectionModel *_mediaCollectionSeeAll_mediaCollection;
  NSString *_seeAllFromMerchant_title;
  NSString *_seeAllFromMerchant_requestSource;
  IGShoppingProductFeedResponse *_seeAllFromMerchant_productFeed;
  NSString *_seeAllFromReconsiderationSurface_title;
  NSString *_seeAllFromReconsiderationSurface_navigationBarTitle;
  NSString *_mediaPivotsCollectionSeeAll_title;
  IGShoppingDestinationFeedChainingResponse *_mediaPivotsCollectionSeeAll_mediaPivotsCollection;
  NSString *_mediaPivotsCollectionSeeAll_fetchPath;
  NSString *_seeDetailsForIGFundedIncentive_title;
  IGShoppingIGFundedIncentive *_seeDetailsForIGFundedIncentive_igFundedIncentive;
  NSString *_seeAllFromBuyOnInstagram_title;
}

/* class methods */
+ (id)mediaCollectionSeeAllWithTitle:(id)title collectionType:(long long)type mediaCollection:(id)collection;
+ (id)mediaPivotsCollectionSeeAllWithTitle:(id)title mediaPivotsCollection:(id)collection fetchPath:(id)path;
+ (id)none;
+ (id)seeAllFromBuyOnInstagramWithTitle:(id)title;
+ (id)seeAllFromMerchantWithTitle:(id)title requestSource:(id)source productFeed:(id)feed;
+ (id)seeAllFromReconsiderationSurfaceWithTitle:(id)title navigationBarTitle:(id)title;
+ (id)seeDetailsForIGFundedIncentiveWithTitle:(id)title igFundedIncentive:(id)incentive;

/* instance methods */
@end

#endif /* IGShoppingPDPModuleHeaderAction_h */