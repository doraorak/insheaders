//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingProductFeedDestination_h
#define IGShoppingProductFeedDestination_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGShoppingProductFeedDestination : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) long long destinationType;
@property (readonly, copy, nonatomic) NSString *destinationId;
@property (readonly, copy, nonatomic) NSString *destinationTitle;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithButtonText:(id)text destinationType:(long long)type destinationId:(id)id destinationTitle:(id)title;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGShoppingProductFeedDestination_h */