//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayImageTitleSubtitleCellViewModelBuilder_h
#define FBPayImageTitleSubtitleCellViewModelBuilder_h
@import Foundation;

#include "FBPayBaseCellViewModelBuilder.h"
#include "FBPayNetworkImageRequest.h"

@class NSAttributedString, NSString, UIColor, UIFont, UIView;

@interface FBPayImageTitleSubtitleCellViewModelBuilder : FBPayBaseCellViewModelBuilder {
  /* instance variables */
  NSString *_title;
  UIFont *_titleFont;
  double _titleFontSize;
  NSString *_subtitle;
  NSAttributedString *_attributedSubtitle;
  UIFont *_subtitleFont;
  double _subtitleFontSize;
  NSString *_value;
  UIFont *_valueFont;
  double _valueFontSize;
  UIView *_image;
  FBPayNetworkImageRequest *_imageRequest;
  struct CGSize { double width; double height; } _imageSize;
  NSString *_reuseIdentifier;
  id /* block */ _selectAction;
  long long _accessoryType;
  UIView *_accessoryView;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
  UIColor *_imageViewBorderColor;
  double _imageViewBorderWidth;
  double _imageViewBorderCornerRadius;
}

/* class methods */
+ (id)viewModelBuilderFromExistingViewModel:(id)model;

/* instance methods */
- (id)build;
- (id)withTitle:(id)title;
- (id)withTitleFont:(id)font;
- (id)withTitleFontSize:(double)size;
- (id)withSubtitle:(id)subtitle;
- (id)withAttributedSubtitle:(id)subtitle;
- (id)withSubtitleFont:(id)font;
- (id)withSubtitleFontSize:(double)size;
- (id)withValue:(id)value;
- (id)withValueFont:(id)font;
- (id)withValueFontSize:(double)size;
- (id)withImage:(id)image;
- (id)withImageUrl:(id)url;
- (id)withAccessoryType:(long long)type;
- (id)withAccessoryView:(id)view;
- (id)withReuseIdentifier:(id)identifier;
- (id)withSelectAction:(id /* block */)action;
- (id)withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)withImageViewBorderColor:(id)color borderWidth:(double)width borderCornerRadius:(double)radius;
@end

#endif /* FBPayImageTitleSubtitleCellViewModelBuilder_h */
