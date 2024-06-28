//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialUpsellRow_h
#define IGSundialUpsellRow_h
@import Foundation;

#include "UIView.h"
#include "IGRadioButton.h"

@class UIImageView, UILabel;
@protocol IGSundialUpsellRowDelegate;

@interface IGSundialUpsellRow : UIView {
  /* instance variables */
  unsigned long long _upsellRowType;
  UIImageView *_imageView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  IGRadioButton *_radioButton;
}

@property (weak, nonatomic) NSObject<IGSundialUpsellRowDelegate> *delegate;
@property (nonatomic) BOOL isSelected;

/* instance methods */
- (id)initWithUpsellRowType:(unsigned long long)type selected:(BOOL)selected isPublicAccount:(BOOL)account;
- (void)layoutSubviews;
- (void)_selectRadioButton;
@end

#endif /* IGSundialUpsellRow_h */