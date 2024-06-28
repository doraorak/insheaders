//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTView_h
#define RCTView_h
@import Foundation;

#include "UIView.h"

@class NSMutableDictionary, UIColor;

@interface RCTView : UIView {
  /* instance variables */
  UIColor *_backgroundColor;
  NSMutableDictionary *accessibilityActionsNameMap;
  NSMutableDictionary *accessibilityActionsLabelMap;
}

@property (copy, nonatomic) id /* block */ onAccessibilityAction;
@property (copy, nonatomic) id /* block */ onAccessibilityTap;
@property (copy, nonatomic) id /* block */ onMagicTap;
@property (copy, nonatomic) id /* block */ onAccessibilityEscape;
@property (nonatomic) long long pointerEvents;
@property (nonatomic) long long reactLayoutDirection;
@property (nonatomic) BOOL removeClippedSubviews;
@property (nonatomic) double borderRadius;
@property (nonatomic) double borderTopLeftRadius;
@property (nonatomic) double borderTopRightRadius;
@property (nonatomic) double borderTopStartRadius;
@property (nonatomic) double borderTopEndRadius;
@property (nonatomic) double borderBottomLeftRadius;
@property (nonatomic) double borderBottomRightRadius;
@property (nonatomic) double borderBottomStartRadius;
@property (nonatomic) double borderBottomEndRadius;
@property (nonatomic) double borderEndEndRadius;
@property (nonatomic) double borderEndStartRadius;
@property (nonatomic) double borderStartEndRadius;
@property (nonatomic) double borderStartStartRadius;
@property (retain, nonatomic) UIColor *borderTopColor;
@property (retain, nonatomic) UIColor *borderRightColor;
@property (retain, nonatomic) UIColor *borderBottomColor;
@property (retain, nonatomic) UIColor *borderLeftColor;
@property (retain, nonatomic) UIColor *borderStartColor;
@property (retain, nonatomic) UIColor *borderEndColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *borderBlockColor;
@property (retain, nonatomic) UIColor *borderBlockEndColor;
@property (retain, nonatomic) UIColor *borderBlockStartColor;
@property (nonatomic) double borderTopWidth;
@property (nonatomic) double borderRightWidth;
@property (nonatomic) double borderBottomWidth;
@property (nonatomic) double borderLeftWidth;
@property (nonatomic) double borderStartWidth;
@property (nonatomic) double borderEndWidth;
@property (nonatomic) double borderWidth;
@property (nonatomic) double borderBlockWidth;
@property (nonatomic) double borderBlockEndWidth;
@property (nonatomic) double borderBlockStartWidth;
@property (nonatomic) long long borderCurve;
@property (nonatomic) long long borderStyle;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestEdgeInsets;
@property (nonatomic) long long cursor;
@property (nonatomic) id /* block */ onClick;
@property (nonatomic) id /* block */ onPointerCancel;
@property (nonatomic) id /* block */ onPointerDown;
@property (nonatomic) id /* block */ onPointerMove;
@property (nonatomic) id /* block */ onPointerUp;
@property (nonatomic) id /* block */ onPointerEnter;
@property (nonatomic) id /* block */ onPointerLeave;
@property (nonatomic) id /* block */ onPointerOver;
@property (nonatomic) id /* block */ onPointerOut;
@property (nonatomic) id /* block */ onGotPointerCapture;
@property (nonatomic) id /* block */ onLostPointerCapture;

/* class methods */
+ (void)autoAdjustInsetsForView:(id)view withScrollView:(id)view updateOffset:(BOOL)offset;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)didActivateAccessibilityCustomAction:(id)action;
- (id)accessibilityValue;
- (id)reactAccessibilityElement;
- (BOOL)isAccessibilityElement;
- (BOOL)performAccessibilityAction:(id)action;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)accessibilityPerformEscape;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)description;
- (void)react_remountAllSubviews;
- (void)react_updateClippedSubviewsWithClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect relativeToView:(id)view;
- (void)didUpdateReactSubviews;
- (void)updateClippedSubviews;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)color;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bordersAsInsets;
- (struct { double x0; double x1; double x2; double x3; })cornerRadii;
- (struct { struct CGColor * x0; struct CGColor * x1; struct CGColor * x2; struct CGColor * x3; })borderColorsWithTraitCollection:(id)collection;
- (void)reactSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)displayLayer:(id)layer;
- (void)updateClippingForLayer:(id)layer;
@end

#endif /* RCTView_h */
