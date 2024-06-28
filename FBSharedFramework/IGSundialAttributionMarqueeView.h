//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAttributionMarqueeView_h
#define IGSundialAttributionMarqueeView_h
@import Foundation;

#include "UIView.h"
#include "IGMarquee.h"

@class UIImageView, UILabel;

@interface IGSundialAttributionMarqueeView : UIView {
  /* instance variables */
  UILabel *_label;
  UILabel *_animatingLabel;
  IGMarquee *_marquee;
  UIImageView *_iconView;
}

@property (readonly, nonatomic) long long attributionType;
@property (nonatomic) BOOL edr;

/* instance methods */
- (id)initWithAttributionType:(long long)type image:(id)image text:(id)text;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)text;
@end

#endif /* IGSundialAttributionMarqueeView_h */
