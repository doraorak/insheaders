//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationPlatformProductPayoutManagementViewModel_h
#define IGMonetizationPlatformProductPayoutManagementViewModel_h
@import Foundation;

@class IGRadioCellListModel, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IGMonetizationPlatformProductPayoutManagementViewModel : NSObject {
  /* instance variables */
  long long _productType;
  NSArray *_payoutInfoDataModelCollection;
  NSString *_savedCredentialId;
  long long _savedCredentialIdIndex;
  NSMutableSet *_monetizationProductsWithSameOnboardingType;
  IGRadioCellListModel *_radioCellListModel;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSMutableArray *listObjects;
@property (nonatomic) long long selectedIndex;

/* instance methods */
- (id)initWithProductType:(long long)type savedCredentialId:(id)id payoutInfoDataModelCollection:(id)collection;
@end

#endif /* IGMonetizationPlatformProductPayoutManagementViewModel_h */
