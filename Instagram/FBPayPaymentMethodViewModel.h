//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPaymentMethodViewModel_h
#define FBPayPaymentMethodViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "FBPayDefaultCardInfo.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface FBPayPaymentMethodViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long paymentType;
@property (readonly, copy, nonatomic) NSString *paymentLogoImageURL;
@property (readonly, copy, nonatomic) NSString *mainLabelText;
@property (readonly, copy, nonatomic) NSString *secondaryLabelText;
@property (readonly, copy, nonatomic) NSArray *availableCardCategories;
@property (readonly, copy, nonatomic) NSArray *availableCardTypes;
@property (readonly, copy, nonatomic) NSArray *additionalFieldsInfo;
@property (readonly, copy, nonatomic) NSDictionary *cardDetailsInfo;
@property (readonly, copy, nonatomic) NSDictionary *payPalAccountData;
@property (readonly, copy, nonatomic) NSDictionary *shopPayAccountDetails;
@property (readonly, copy, nonatomic) FBPayDefaultCardInfo *defaultInfo;
@property (readonly, copy, nonatomic) NSString *optionalWebLinkURL;
@property (readonly, nonatomic) BOOL isExpired;

/* instance methods */
- (id)initWithPaymentType:(long long)type paymentLogoImageURL:(id)url mainLabelText:(id)text secondaryLabelText:(id)text availableCardCategories:(id)categories availableCardTypes:(id)types additionalFieldsInfo:(id)info cardDetailsInfo:(id)info payPalAccountData:(id)data shopPayAccountDetails:(id)details defaultInfo:(id)info optionalWebLinkURL:(id)url isExpired:(BOOL)expired;
@end

#endif /* FBPayPaymentMethodViewModel_h */
