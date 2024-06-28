//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDialViewCell_h
#define IGDialViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDialCellViewModel.h"
#include "IGDialViewCellViewConfig.h"
#include "IGImageProcessor-Protocol.h"

@class CALayer, IGCustomAvatarStickerTrayItemView, IGImageView, NSURL, UIImage, UIImageView, UIView;

@interface IGDialViewCell : UICollectionViewCell {
  /* instance variables */
  IGImageView *_imageView;
  UIImageView *_moreInfoIconView;
  IGCustomAvatarStickerTrayItemView *_customAvatarView;
  UIView *_customDialContentView;
  UIImageView *_blockedIconView;
  CALayer *_darkenLayer;
  BOOL _cellDisabled;
  BOOL _cellPrivacyIncompatible;
  IGDialViewCellViewConfig *_viewConfig;
  BOOL _moreInfoIconEnabled;
  BOOL _selectionBorderEnabled;
  double _imageViewContentScale;
}

@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSObject<IGImageProcessor> *imageProcessor;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ imageProvider;
@property (retain, nonatomic) IGDialCellViewModel *viewModel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)color;
- (id)backgroundColor;
- (void)setSelected:(BOOL)selected;
- (void)applyLayoutAttributes:(id)attributes;
@end

#endif /* IGDialViewCell_h */