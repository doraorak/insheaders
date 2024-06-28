//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTraySectionHeaderConfiguration_h
#define IGStoryTraySectionHeaderConfiguration_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class IGStyledString, NSAttributedString, NSString, UIColor;

@interface IGStoryTraySectionHeaderConfiguration : NSObject<IGListDiffable> {
  /* instance variables */
  BOOL _grayActionButtonEnabled;
  BOOL _alwaysShowActionButton;
  NSAttributedString *_actionButtonAttributedTitle;
  NSAttributedString *_secondaryActionButtonTitle;
  long long _showType;
  long long _actionButtonAlignment;
}

@property (copy, nonatomic) NSAttributedString *title;
@property (readonly, copy, nonatomic) IGStyledString *subtitle;
@property (readonly, nonatomic) long long buttonAction;
@property (readonly, nonatomic) BOOL hasTopBorder;
@property (readonly, nonatomic) NSString *diffIdentifier;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *labelColor;
@property (readonly, nonatomic) long long titleAlignment;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } buttonPadding;
@property (readonly, nonatomic) unsigned long long appearance;
@property (readonly, nonatomic) BOOL isAccessibilityElement;

/* instance methods */
- (id)initWithTitle:(id)title titleAlignment:(long long)alignment subtitle:(id)subtitle actionButtonAttributedTitle:(id)title buttonAction:(long long)action secondaryActionButtonTitle:(id)title alwaysShowActionButton:(BOOL)button hasTopBorder:(BOOL)border backgroundColor:(id)color labelColor:(id)color showType:(long long)type padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding buttonPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding actionButtonAlignment:(long long)alignment appearance:(unsigned long long)appearance isAccessibilityElement:(BOOL)element;
- (id)initWithTitle:(id)title subtitle:(id)subtitle actionButtonAttributedTitle:(id)title buttonAction:(long long)action hasTopBorder:(BOOL)border backgroundColor:(id)color;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGStoryTraySectionHeaderConfiguration_h */
