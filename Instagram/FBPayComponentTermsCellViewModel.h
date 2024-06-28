//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentTermsCellViewModel_h
#define FBPayComponentTermsCellViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSAttributedString, NSString;

@interface FBPayComponentTermsCellViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSAttributedString *bodyText;
@property (readonly, copy, nonatomic) NSAttributedString *ctaText;
@property (readonly, copy, nonatomic) NSString *sheetHeaderText;
@property (readonly, copy, nonatomic) NSArray *sheetBodyText;
@property (readonly, copy, nonatomic) NSAttributedString *sheetPaymentsTerms;
@property (readonly, copy, nonatomic) NSAttributedString *sheetPrivacyTerms;

/* instance methods */
- (id)initWithBodyText:(id)text ctaText:(id)text sheetHeaderText:(id)text sheetBodyText:(id)text sheetPaymentsTerms:(id)terms sheetPrivacyTerms:(id)terms;
@end

#endif /* FBPayComponentTermsCellViewModel_h */