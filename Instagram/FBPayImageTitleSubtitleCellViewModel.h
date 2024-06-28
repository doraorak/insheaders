//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayImageTitleSubtitleCellViewModel_h
#define FBPayImageTitleSubtitleCellViewModel_h
@import Foundation;

#include "FBPayNetworkImageRequest.h"
#include "NSObject-Protocol.h"

@class NSAttributedString, NSString, UIColor, UIFont, UIView;

@interface FBPayImageTitleSubtitleCellViewModel : NSObject<NSObject>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) double titleFontSize;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSAttributedString *attributedSubtitle;
@property (readonly, nonatomic) UIFont *subtitleFont;
@property (readonly, nonatomic) double subtitleFontSize;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) UIFont *valueFont;
@property (readonly, nonatomic) double valueFontSize;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) UIView *image;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) FBPayNetworkImageRequest *imageRequest;
@property (readonly, nonatomic) long long accessoryType;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (readonly, nonatomic) UIColor *imageViewBorderColor;
@property (readonly, nonatomic) double imageViewBorderWidth;
@property (readonly, nonatomic) double imageViewBorderCornerRadius;
@property (readonly, nonatomic) long long cellType;
@property (nonatomic) double cellHeight;
@property (readonly, nonatomic) BOOL hasSelectAction;
@property (copy, nonatomic) id /* block */ selectAction;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) NSString *accessibilityValue;
@property (readonly, nonatomic) NSString *accessibilityHint;
@property (readonly, nonatomic) unsigned long long accessibilityTrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title titleFontSize:(double)size subtitle:(id)subtitle subtitleFontSize:(double)size image:(id)image imageSize:(struct CGSize { double x0; double x1; })size accessoryType:(long long)type accessoryView:(id)view reuseIdentifier:(id)identifier selectAction:(id /* block */)action;
- (id)initWithTitle:(id)title titleFontSize:(double)size subtitle:(id)subtitle subtitleFontSize:(double)size imageURL:(id)url imageSize:(struct CGSize { double x0; double x1; })size accessoryType:(long long)type accessoryView:(id)view reuseIdentifier:(id)identifier selectAction:(id /* block */)action;
- (id)initWithTitle:(id)title titleFont:(id)font titleFontSize:(double)size subtitle:(id)subtitle attributedSubtitle:(id)subtitle subtitleFont:(id)font subtitleFontSize:(double)size value:(id)value valueFont:(id)font valueFontSize:(double)size image:(id)image imageRequest:(id)request imageSize:(struct CGSize { double x0; double x1; })size accessoryType:(long long)type accessoryView:(id)view reuseIdentifier:(id)identifier selectAction:(id /* block */)action edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets imageViewBorderColor:(id)color imageViewBorderWidth:(double)width imageViewBorderCornerRadius:(double)radius accessibilityLabel:(id)label accessibilityValue:(id)value accessibilityHint:(id)hint accessibilityTrait:(unsigned long long)trait;
- (id)build;
- (id)withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)withImageViewBorderColor:(id)color borderWidth:(double)width cornerRadius:(double)radius;
- (id)attributedSubtitleOrSubtitle;
@end

#endif /* FBPayImageTitleSubtitleCellViewModel_h */
