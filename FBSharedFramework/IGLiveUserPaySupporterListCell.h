//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveUserPaySupporterListCell_h
#define IGLiveUserPaySupporterListCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGLiveUserPayBadgeCountView.h"
#include "IGLiveUserPaySupporterBadgeView.h"
#include "IGProfilePictureImageView.h"
#include "IGStackLayout.h"

@class UIImageView, UILabel;

@interface IGLiveUserPaySupporterListCell : UICollectionViewCell {
  /* instance variables */
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  UIImageView *_verifiedBadgeView;
  IGLiveUserPaySupporterBadgeView *_supporterBadgeView;
  IGLiveUserPayBadgeCountView *_supporterBadgeCountView;
  IGProfilePictureImageView *_profileImageView;
  IGStackLayout *_supporterTitleLayout;
  IGStackLayout *_textLayout;
  IGStackLayout *_leftContentLayout;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGLiveUserPaySupporterListCell_h */