//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageTitleCell_h
#define IGImageTitleCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGBadgeNewView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGCoreTextView.h"
#include "IGImageTitleViewModel.h"
#include "IGImageView.h"
#include "IGRadioButton.h"
#include "IGStoryGradientRingView.h"

@class NSString, UIImageView, UILabel, UIView;
@protocol IGImageTitleCellDelegate;

@interface IGImageTitleCell : UICollectionViewCell<IGCoreTextLinkHandler> {
  /* instance variables */
  UILabel *_titleLabel;
  IGCoreTextView *_subtitleTextView;
  IGImageView *_imageView;
  IGImageTitleViewModel *_viewModel;
  UIImageView *_chevronView;
  IGStoryGradientRingView *_ringView;
  UIView *_bottomSeparatorView;
  IGRadioButton *_accessoryRadioButton;
  UIView *_badgeView;
  IGBadgeNewView *_newBadgeView;
}

@property (weak, nonatomic) NSObject<IGImageTitleCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_didTapAccessoryButton;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGImageTitleCell_h */
