//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenInfoFieldDataViewModel_h
#define IGLeadGenInfoFieldDataViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGLeadGenInfoFieldDataViewModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *fieldKey;
@property (readonly, copy, nonatomic) NSString *fieldType;
@property (readonly, nonatomic) unsigned long long inputType;
@property (readonly, nonatomic) unsigned long long inputDomainType;
@property (readonly, copy, nonatomic) NSArray *dependentQuestionsDynamicInfo;
@property (readonly, copy, nonatomic) NSArray *dependentQuestionsStaticInfo;
@property (readonly, copy, nonatomic) NSArray *blockingQuestionKeys;
@property (readonly, copy, nonatomic) NSArray *dependentQuestionKeys;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) BOOL isRequired;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) NSString *answer;
@property (readonly, nonatomic) unsigned long long errorState;
@property (readonly, copy, nonatomic) NSString *errorText;
@property (readonly, nonatomic) BOOL shouldShowErrorMessage;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFieldKey:(id)key fieldType:(id)type inputType:(unsigned long long)type inputDomainType:(unsigned long long)type dependentQuestionsDynamicInfo:(id)info dependentQuestionsStaticInfo:(id)info blockingQuestionKeys:(id)keys dependentQuestionKeys:(id)keys isEditable:(BOOL)editable isRequired:(BOOL)required name:(id)name placeholder:(id)placeholder values:(id)values answer:(id)answer errorState:(unsigned long long)state errorText:(id)text shouldShowErrorMessage:(BOOL)message;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGLeadGenInfoFieldDataViewModel_h */