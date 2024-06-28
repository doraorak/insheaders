//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialPillLabel_h
#define IGSundialPillLabel_h
@import Foundation;

#include "UIView.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class UILabel, UIView;

@interface IGSundialPillLabel : UIView {
  /* instance variables */
  UIView *_contentView;
  BOOL _roundedCorner;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  double _insectHeight;
  double _insectWidth;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double fontSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame roundedCorner:(BOOL)corner launcherSet:(id)set;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setTitle:(id)title;
@end

#endif /* IGSundialPillLabel_h */
