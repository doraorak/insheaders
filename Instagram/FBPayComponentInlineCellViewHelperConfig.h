//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentInlineCellViewHelperConfig_h
#define FBPayComponentInlineCellViewHelperConfig_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class UIColor, UIFont;

@interface FBPayComponentInlineCellViewHelperConfig : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) UIColor *nullStateTextColor;
@property (readonly, copy, nonatomic) UIColor *firstLineTextColor;
@property (readonly, copy, nonatomic) UIFont *nullStateLabelFont;
@property (readonly, nonatomic) BOOL shouldUseRegularFontForSecondLineLabel;
@property (readonly, nonatomic) BOOL shouldUseBoldFontForFirstLineText;
@property (readonly, nonatomic) BOOL shouldUseRegularFontForThirdLineLabel;
@property (readonly, nonatomic) BOOL shouldUseMediumSizeForRightAccessory;
@property (readonly, nonatomic) BOOL shouldUseLargePadding;
@property (readonly, nonatomic) long long contextViewImageSize;
@property (readonly, nonatomic) BOOL leftAccessoryLabelShouldAlignTopWithContextViewFirstLineLabel;
@property (readonly, nonatomic) BOOL shouldUseButtonColorForThirdLineText;
@property (readonly, nonatomic) BOOL shouldUseSecondaryFontForErrorText;

/* instance methods */
- (id)initWithNullStateTextColor:(id)color firstLineTextColor:(id)color nullStateLabelFont:(id)font shouldUseRegularFontForSecondLineLabel:(BOOL)label shouldUseBoldFontForFirstLineText:(BOOL)text shouldUseRegularFontForThirdLineLabel:(BOOL)label shouldUseMediumSizeForRightAccessory:(BOOL)accessory shouldUseLargePadding:(BOOL)padding contextViewImageSize:(long long)size leftAccessoryLabelShouldAlignTopWithContextViewFirstLineLabel:(BOOL)label shouldUseButtonColorForThirdLineText:(BOOL)text shouldUseSecondaryFontForErrorText:(BOOL)text;
@end

#endif /* FBPayComponentInlineCellViewHelperConfig_h */
