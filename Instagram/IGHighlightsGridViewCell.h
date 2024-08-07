//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHighlightsGridViewCell_h
#define IGHighlightsGridViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGStoryTrayBaseCell-Protocol.h"
#include "IGStoryTrayCellViewModel.h"
#include "IGStoryTraySelectableCellProtocol-Protocol.h"

@class IGGradientView, IGImageView, IGStoryGradientRingView, NSString, UILabel, UIView;
@protocol IGStoryTrayBaseCellDelegate, UIView<IGStoryTrayAvatarViewProtocol;

@interface IGHighlightsGridViewCell : UICollectionViewCell<IGStoryTrayBaseCell, IGStoryTraySelectableCellProtocol> {
  /* instance variables */
  long long _imageFetchPriority;
  UIView *_containerView;
  IGImageView *_imageView;
  IGGradientView *_legibilityGradientView;
  UILabel *_titleLabel;
  UIView *_dimmingView;
  IGStoryGradientRingView *_loadingView;
  IGStoryTrayCellViewModel *_model;
}

@property (weak, nonatomic) NSObject<IGStoryTrayBaseCellDelegate> *baseCellDelegate;
@property (readonly, nonatomic) UIView<IGStoryTrayAvatarViewProtocol> *avatarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame imagePriority:(long long)priority;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory;
- (void)setShowError:(BOOL)error;
- (void)setLoading:(BOOL)loading;
- (void)setShowPendingUpload:(BOOL)upload;
- (void)hideAnimatableUI:(BOOL)ui;
- (id)profilePictureView;
- (id)cellTitleLabel;
- (id)presentationAnimationFromView;
- (id)presentationAnimationToView;
- (BOOL)presentationAnimationNeedsCrossfade;
- (void)conformsToIGStoryTrayBaseCell;
- (void)showSelectionOverlay:(BOOL)overlay;
- (id)accessibilityLabel;
@end

#endif /* IGHighlightsGridViewCell_h */
