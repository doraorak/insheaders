//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryRichTextEntryModel_h
#define IGStoryRichTextEntryModel_h
@import Foundation;

#include "IGCustomTextLayoutManager.h"
#include "IGRichTextFormat.h"
#include "IGUserSession.h"
#include "NSSecureCoding-Protocol.h"

@class NSAttributedString, NSMutableArray, UIColor, UIFont;

@interface IGStoryRichTextEntryModel : NSObject<NSSecureCoding>

@property (readonly, nonatomic) IGCustomTextLayoutManager *layoutManager;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) double lineFragmentPadding;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textContainerInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textContainerSize;
@property (readonly, nonatomic) unsigned long long richTextAlignment;
@property (readonly, nonatomic) IGRichTextFormat *richTextFormat;
@property (readonly, nonatomic) NSMutableArray *emphasizedRanges;
@property (readonly, nonatomic) NSMutableArray *invertedRanges;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) long long selectedAnimationType;
@property (readonly, nonatomic) long long selectedEffectType;
@property (readonly, nonatomic) BOOL isOutlineEmphasisApplied;
@property (readonly, nonatomic) IGUserSession *userSession;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLayoutManager:(id)manager attributedString:(id)string lineFragmentPadding:(double)padding textContainerInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets richTextAlignment:(unsigned long long)alignment richTextFormat:(id)format emphasizedRanges:(id)ranges invertedRanges:(id)ranges textContainerSize:(struct CGSize { double x0; double x1; })size textColor:(id)color font:(id)font selectedAnimationType:(long long)type selectedEffectType:(long long)type isOutlineEmphasisApplied:(BOOL)applied userSession:(id)session;
- (BOOL)deepEqualityCheck:(id)check;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGStoryRichTextEntryModel_h */
