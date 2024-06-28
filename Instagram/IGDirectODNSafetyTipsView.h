//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectODNSafetyTipsView_h
#define IGDirectODNSafetyTipsView_h
@import Foundation;

#include "UIView.h"
#include "IGBulletItemGroupViewDelegate-Protocol.h"

@class IGBulletItemGroupView, IGImageView, IGInsetLayout, IGStackLayout, UILabel;
@protocol IGDirectODNSafetyTipsViewDelegate;

@interface IGDirectODNSafetyTipsView : UIView<IGBulletItemGroupViewDelegate> {
  /* instance variables */
  IGImageView *_headerImageView;
  IGStackLayout *_headerStackLayout;
  UILabel *_titleLabel;
  IGBulletItemGroupView *_bulletItemGroupView;
  UILabel *_detailLabel;
  UILabel *_followUpTitleLabel;
  IGInsetLayout *_insetLayout;
}

@property (weak, nonatomic) NSObject<IGDirectODNSafetyTipsViewDelegate> *delegate;

/* instance methods */
- (id)initWithHeaderImageSpecifier:(id)specifier titleText:(id)text detailText:(id)text bulletItemViewModels:(id)models followUpActionViewModels:(id)models;
- (void)setupViewWithHeader:(id)header titleText:(id)text detailText:(id)text bulletItemViewModels:(id)models followUpActionViewModels:(id)models;
- (void)_didTapFollowUpAction:(id)action;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)bulletItemGroupView:(id)view didTapString:(id)string url:(id)url;
@end

#endif /* IGDirectODNSafetyTipsView_h */