//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayFormField_h
#define FBPayFormField_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FBPayFormField : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSString *errorMessage;
@property (readonly, copy, nonatomic) NSString *fieldId;
@property (readonly, copy, nonatomic) NSString *fieldType;
@property (readonly, nonatomic) BOOL isOptional;
@property (readonly, copy, nonatomic) NSArray *validationRules;
@property (readonly, copy, nonatomic) NSString *valueType;

/* instance methods */
- (id)initWithLabel:(id)label placeholder:(id)placeholder descriptionText:(id)text errorMessage:(id)message fieldId:(id)id fieldType:(id)type isOptional:(BOOL)optional validationRules:(id)rules valueType:(id)type;
@end

#endif /* FBPayFormField_h */
