//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingUnifiedProductFeedResponse_h
#define IGShoppingUnifiedProductFeedResponse_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGShoppingUnifiedProductFeedResponse : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) BOOL moreAvailable;
@property (readonly, copy, nonatomic) NSString *maxID;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary objectStores:(id)stores error:(id *)error;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithItems:(id)items moreAvailable:(BOOL)available maxID:(id)id;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGShoppingUnifiedProductFeedResponse_h */