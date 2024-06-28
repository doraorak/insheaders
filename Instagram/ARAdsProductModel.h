//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ARAdsProductModel_h
#define ARAdsProductModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface ARAdsProductModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *retailerId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *sellerName;
@property (readonly, copy, nonatomic) NSString *variantName;
@property (readonly, copy, nonatomic) NSString *price;
@property (readonly, copy, nonatomic) NSURL *externalURL;
@property (readonly, copy, nonatomic) NSURL *imageURL;

/* instance methods */
- (id)initWithRetailerId:(id)id name:(id)name sellerName:(id)name variantName:(id)name price:(id)price externalURL:(id)url imageURL:(id)url;
@end

#endif /* ARAdsProductModel_h */
