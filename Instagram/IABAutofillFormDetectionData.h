//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAutofillFormDetectionData_h
#define IABAutofillFormDetectionData_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IABAutofillFormDetectionData : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *inputName;
@property (readonly, copy, nonatomic) NSString *inputId;
@property (readonly, copy, nonatomic) NSString *inputValue;
@property (readonly, copy, nonatomic) NSString *inputType;
@property (readonly, copy, nonatomic) NSString *inputPlaceholder;
@property (readonly, copy, nonatomic) NSString *inputLabel;
@property (readonly, copy, nonatomic) NSString *autocompleteDetectedResult;
@property (readonly, copy, nonatomic) NSString *autocompleteAttribute;

/* instance methods */
- (id)initWithInputName:(id)name inputId:(id)id inputValue:(id)value inputType:(id)type inputPlaceholder:(id)placeholder inputLabel:(id)label autocompleteDetectedResult:(id)result autocompleteAttribute:(id)attribute;
@end

#endif /* IABAutofillFormDetectionData_h */