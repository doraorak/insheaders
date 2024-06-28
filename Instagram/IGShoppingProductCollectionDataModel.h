//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductCollectionDataModel_h
#define IGShoppingProductCollectionDataModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class IGShoppingProductCollectionAdFooterDataModel, IGShoppingProductCollectionHeaderDataModel, IGShoppingProductCollectionPivotDataModel, IGShoppingProductFeedResponse;

@interface IGShoppingProductCollectionDataModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGShoppingProductCollectionHeaderDataModel *headerDataModel;
@property (readonly, copy, nonatomic) IGShoppingProductFeedResponse *productFeedResponse;
@property (readonly, copy, nonatomic) IGShoppingProductCollectionPivotDataModel *pivotDataModel;
@property (readonly, nonatomic) BOOL isFromContentTile;
@property (readonly, copy, nonatomic) IGShoppingProductCollectionAdFooterDataModel *footerDataModel;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithHeaderDataModel:(id)model productFeedResponse:(id)response pivotDataModel:(id)model isFromContentTile:(BOOL)tile footerDataModel:(id)model;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGShoppingProductCollectionDataModel_h */
