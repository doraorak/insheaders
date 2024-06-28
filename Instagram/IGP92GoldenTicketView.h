//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGP92GoldenTicketView_h
#define IGP92GoldenTicketView_h
@import Foundation;

#include "UIView.h"

@class CALayer, CAShapeLayer, IGImageView, IGStackLayout, NSString, UIImage, UIImageView, UILabel, UIView;

@interface IGP92GoldenTicketView : UIView {
  /* instance variables */
  UILabel *_dateContextLabel;
  UILabel *_dateLabel;
  UILabel *_timeContextLabel;
  UILabel *_timeLabel;
  UILabel *_usernameContextLabel;
  UILabel *_uppercasedUsernameLabel;
  CAShapeLayer *_dottedLineLayer;
  IGStackLayout *_verticalLayout;
  IGImageView *_profilePictureImageView;
  UILabel *_userNameLabel;
  UIImageView *_verifiedBadge;
  UILabel *_ticketNumberLabel;
  IGImageView *_appIcon;
  IGImageView *_qrCode;
  CALayer *_holographicFoilLayer;
  CALayer *_glareLayer;
  IGImageView *_euStampImageView;
  BOOL _isEUInterfaceEnabled;
  UIView *_backgroundView;
  IGImageView *_backgroundAppImageView;
  BOOL _isBackgroundView;
  NSString *_ticketNumber;
  double _rotationProgress;
  UIImage *_foilGradientImage;
  UIImage *_foilMaskImage;
  UIImage *_foilGlareImage;
}

/* instance methods */
- (id)initWithDate:(long long)date user:(id)user disableLayerShadow:(BOOL)shadow isEUInterfaceEnabled:(BOOL)enabled;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setContentScaleFactor:(double)factor;
@end

#endif /* IGP92GoldenTicketView_h */
