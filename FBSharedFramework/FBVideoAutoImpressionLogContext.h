//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoAutoImpressionLogContext_h
#define FBVideoAutoImpressionLogContext_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBVideoAutoImpressionLogContext : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *imp_token;
@property (readonly, copy, nonatomic) NSArray *trackings;
@property (readonly, copy, nonatomic) NSString *module;
@property (readonly, nonatomic) BOOL isSponsored;
@property (readonly, copy, nonatomic) NSArray *classNames;
@property (readonly, copy, nonatomic) NSString *attributionID;
@property (readonly, copy, nonatomic) NSString *correlationID;

/* instance methods */
- (id)initWithImp_token:(id)imp_token trackings:(id)trackings module:(id)module isSponsored:(BOOL)sponsored classNames:(id)names attributionID:(id)id correlationID:(id)id;
@end

#endif /* FBVideoAutoImpressionLogContext_h */
