//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDSFormField_h
#define IGDSFormField_h
@import Foundation;

#include "UIView.h"
#include "IGFormField.h"

@class NSString, UILabel;
@protocol IGFormFieldDelegate;

@interface IGDSFormField : UIView {
  /* instance variables */
  UILabel *_errorOrSubtextLabel;
  NSString *_subtext;
  BOOL _enablePrism;
}

@property (readonly, nonatomic) IGFormField *formField;
@property (weak, nonatomic) NSObject<IGFormFieldDelegate> *delegate;
@property (nonatomic) BOOL enabled;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeThatFitsWithSubtext:(id)subtext width:(double)width;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame enablePrism:(BOOL)prism;
- (id)initComboModeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame enablePrism:(BOOL)prism;
- (id)initFullWidthDropdownWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame enablePrism:(BOOL)prism;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setSubtext:(id)subtext;
- (void)wiggleAnimationWithCompletion:(id /* block */)completion;
- (void)didSetEditing:(BOOL)editing;
- (void)didTapDropdownView:(id)view;
- (void)formFieldNeedsSizeUpdate:(id)update;
- (void)didSetErrorMessage;
- (void)_layoutErrorLabel;
- (void)_setupErrorLabel;
- (void)_layoutFormField;
@end

#endif /* IGDSFormField_h */
