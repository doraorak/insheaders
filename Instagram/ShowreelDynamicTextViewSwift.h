//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ShowreelDynamicTextViewSwift_h
#define ShowreelDynamicTextViewSwift_h
@import Foundation;

#include "UIView.h"
#include "ShowreelDynamicTextAnimator.h"
#include "ShowreelDynamicTextViewSwiftDelegate-Protocol.h"

@class NSAttributedString, NSNumber, UIColor;

@interface ShowreelDynamicTextViewSwift : UIView { // (Swift)
  /* instance variables */
   layoutManager;
   layoutManagerDelegate;
   textView;
   invalidateOnTruncation;
}

@property (nonatomic, retain) UIColor *textBackgroundColor;
@property (nonatomic, retain) NSNumber *textBackgroundCornerRadius;
@property (nonatomic) BOOL textVerticalLineAlignment;
@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic) BOOL hasTruncation;
@property (nonatomic) long long maxNumberOfLines;
@property (nonatomic, retain) ShowreelDynamicTextAnimator *textAnimator;
@property (nonatomic, retain) NSNumber *lineSpacingMultiplier;
@property (nonatomic, weak) NSObject<ShowreelDynamicTextViewSwiftDelegate> *delegate;

/* class methods */
+ (double)lineFragmentPaddingForBackgroundColor:(id)color;
+ (struct CGSize { double x0; double x1; })calculateSizeForAttributedString:(id)string constrainingSize:(struct CGSize { double x0; double x1; })size backgroundColor:(id)color;

/* instance methods */
- (void)setTextBackgroundPaddingWithTop:(double)top bottom:(double)bottom sides:(double)sides;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)adjustTextWithTruncationToken:(id)token;
- (void)textTapped:(id)tapped;
- (id)interactiveRegions;
- (void)invalidateOnTruncation:(BOOL)truncation;
@end

#endif /* ShowreelDynamicTextViewSwift_h */