//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromotePromotionViewInsightsView_h
#define IGPromotePromotionViewInsightsView_h
@import Foundation;

#include "UIView.h"

@class NSString, UIImageView, UILabel, UIView;
@protocol IGPromotePromotionViewInsightsViewDelegate;

@interface IGPromotePromotionViewInsightsView : UIView {
  /* instance variables */
  UILabel *_viewInsightsLabel;
  UIImageView *_chevronImageView;
  NSString *_title;
  UIView *_blueDot;
  UILabel *_unreadCountLabel;
}

@property (weak, nonatomic) NSObject<IGPromotePromotionViewInsightsViewDelegate> *delegate;

/* instance methods */
- (id)initWithTitle:(id)title frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithTitle:(id)title;
- (void)layoutSubviews;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

#endif /* IGPromotePromotionViewInsightsView_h */