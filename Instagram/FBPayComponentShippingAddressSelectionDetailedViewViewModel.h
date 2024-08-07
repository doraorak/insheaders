//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentShippingAddressSelectionDetailedViewViewModel_h
#define FBPayComponentShippingAddressSelectionDetailedViewViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayFormFieldsForCountry.h"
#include "FBPayUPLLoggingAPI-Protocol.h"
#include "FBPaymentsShippingAddress.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray;

@interface FBPayComponentShippingAddressSelectionDetailedViewViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSArray *shippingAddressForSelection;
@property (readonly, copy, nonatomic) FBPaymentsShippingAddress *currentlySelectedShippingAddress;
@property (readonly, copy, nonatomic) FBPayFormFieldsForCountry *formFields;
@property (readonly, nonatomic) NSObject<FBPayUPLLoggingAPI> *logger;
@property (readonly, nonatomic) BOOL shouldEnableOSAutoFill;

/* instance methods */
- (id)initWithShippingAddressForSelection:(id)selection currentlySelectedShippingAddress:(id)address formFields:(id)fields logger:(id)logger shouldEnableOSAutoFill:(BOOL)fill;
@end

#endif /* FBPayComponentShippingAddressSelectionDetailedViewViewModel_h */
