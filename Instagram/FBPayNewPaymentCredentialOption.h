//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayNewPaymentCredentialOption_h
#define FBPayNewPaymentCredentialOption_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface FBPayNewPaymentCredentialOption : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *credentialType;
@property (readonly, copy, nonatomic) NSArray *availableCardTypes;
@property (readonly, copy, nonatomic) NSDictionary *availableCardIconUris;
@property (readonly, copy, nonatomic) NSArray *availableCardCategories;
@property (readonly, copy, nonatomic) NSString *iconUri;
@property (readonly, copy, nonatomic) NSString *loginRefId;
@property (readonly, copy, nonatomic) NSString *readablePaymentOptionName;
@property (readonly, copy, nonatomic) NSString *url;

/* instance methods */
- (id)initWithTitle:(id)title credentialType:(id)type availableCardTypes:(id)types availableCardIconUris:(id)uris availableCardCategories:(id)categories iconUri:(id)uri loginRefId:(id)id readablePaymentOptionName:(id)name url:(id)url;
@end

#endif /* FBPayNewPaymentCredentialOption_h */