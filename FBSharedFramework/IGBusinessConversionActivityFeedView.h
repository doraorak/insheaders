//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBusinessConversionActivityFeedView_h
#define IGBusinessConversionActivityFeedView_h
@import Foundation;

#include "UIView.h"
#include "IGImageView.h"

@class UIButton, UILabel;
@protocol IGBusinessConversionActivityFeedViewDelegate;

@interface IGBusinessConversionActivityFeedView : UIView {
  /* instance variables */
  UILabel *_topLabel;
}

@property (weak, nonatomic) NSObject<IGBusinessConversionActivityFeedViewDelegate> *delegate;
@property (readonly, nonatomic) IGImageView *profileImageView;
@property (readonly, nonatomic) UIButton *continueButton;
@property (readonly, nonatomic) UIButton *cancelButton;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGBusinessConversionActivityFeedView_h */