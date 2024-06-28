//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAdsGridProfileHeaderView_h
#define IGSundialAdsGridProfileHeaderView_h
@import Foundation;

#include "UIView.h"

@class IGStackView, IGUnifiedVideoUFIButton, UIAccessibilityElement, UIImageView, UILabel, UIView;
@protocol IGSundialAdsGridProfileHeaderDelegate, UIView<IGProfilePhotoViewProtocol><IGStoryViewerEntryView;

@interface IGSundialAdsGridProfileHeaderView : UIView {
  /* instance variables */
  UIView<IGProfilePhotoViewProtocol><IGStoryViewerEntryView> *_profilePhotoView;
  UILabel *_titleLabel;
  UIImageView *_verifiedBadgeImageView;
  UIView *_titleLabelContainerView;
  UILabel *_sponsoredLabel;
  IGUnifiedVideoUFIButton *_moreOptionsButton;
  IGStackView *_stackView;
  UIAccessibilityElement *_accessibilityElement;
  BOOL _shouldShowSponsoredLabel;
}

@property (weak, nonatomic) NSObject<IGSundialAdsGridProfileHeaderDelegate> *delegate;

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_didTapMoreOptionsButton:(id)button;
- (void)_handleSingleTap:(id)tap;
@end

#endif /* IGSundialAdsGridProfileHeaderView_h */