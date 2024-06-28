//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPLinkDestination_h
#define IGShoppingPDPLinkDestination_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGShoppingPDPDescriptionModel.h"
#include "IGShoppingPDPDetailsSectionDataModel.h"

@class IGShoppingCheckoutShippingAndReturnsModel, NSString;

@interface IGShoppingPDPLinkDestination : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_description_title;
  IGShoppingPDPDescriptionModel *_description_descriptionModel;
  NSString *_shippingAndReturns_title;
  IGShoppingCheckoutShippingAndReturnsModel *_shippingAndReturns_shippingAndReturnsModel;
  NSString *_details_title;
  IGShoppingPDPDetailsSectionDataModel *_details_detailsModel;
}

/* class methods */
+ (id)descriptionWithTitle:(id)title descriptionModel:(id)model;
+ (id)detailsWithTitle:(id)title detailsModel:(id)model;
+ (id)shippingAndReturnsWithTitle:(id)title shippingAndReturnsModel:(id)model;

/* instance methods */
@end

#endif /* IGShoppingPDPLinkDestination_h */
