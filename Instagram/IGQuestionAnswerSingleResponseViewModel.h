//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuestionAnswerSingleResponseViewModel_h
#define IGQuestionAnswerSingleResponseViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class IGQuestionAnswerStickerResponder;

@interface IGQuestionAnswerSingleResponseViewModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGQuestionAnswerStickerResponder *responder;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (readonly, nonatomic) BOOL isResponderRestricted;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithResponder:(id)responder contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset isResponderRestricted:(BOOL)restricted;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGQuestionAnswerSingleResponseViewModel_h */
