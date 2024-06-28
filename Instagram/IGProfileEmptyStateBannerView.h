//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileEmptyStateBannerView_h
#define IGProfileEmptyStateBannerView_h
@import Foundation;

#include "UIView.h"

@class IGButton, IGImageView, IGTapButton, NSString, UILabel, UIView;
@protocol IGProfileEmptyStateBannerViewDelegate;

@interface IGProfileEmptyStateBannerView : UIView {
  /* instance variables */
  UIView *_containerView;
  UILabel *_titleLabel;
  IGButton *_addInfoButton;
  IGImageView *_imageView;
  IGTapButton *_dismissButton;
}

@property (weak, nonatomic) NSObject<IGProfileEmptyStateBannerViewDelegate> *delegate;
@property (retain, nonatomic) NSString *titleLabelText;
@property (nonatomic) BOOL isSmallBannerView;
@property (nonatomic) BOOL isTopPaddingNeeded;

/* class methods */
+ (double)preferredHeightForModel:(id)model constrainedWidth:(double)width titleLabelText:(id)text;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_didTapAddInfoBanner;
- (void)_didDismissBanner;
@end

#endif /* IGProfileEmptyStateBannerView_h */