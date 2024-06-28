//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTrayHighlightsMyWeekSeparatorCell_h
#define IGStoryTrayHighlightsMyWeekSeparatorCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGStoryTrayBaseCell-Protocol.h"

@class NSString, UIView;
@protocol IGStoryTrayBaseCellDelegate, UIView<IGStoryTrayAvatarViewProtocol;

@interface IGStoryTrayHighlightsMyWeekSeparatorCell : UICollectionViewCell<IGStoryTrayBaseCell> {
  /* instance variables */
  UIView *_separatorView;
  BOOL _isCardStyle;
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
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory;
- (void)layoutSubviews;
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
@end

#endif /* IGStoryTrayHighlightsMyWeekSeparatorCell_h */
