//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGARBrandAdsCameraCallToActionView_h
#define IGARBrandAdsCameraCallToActionView_h
@import Foundation;

#include "UIView.h"
#include "IGDialTitleView.h"

@class UIButton;

@interface IGARBrandAdsCameraCallToActionView : UIView {
  /* instance variables */
  UIButton *_ctaButton;
  IGDialTitleView *_ctaSubtitleView;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)layoutSubviews;
@end

#endif /* IGARBrandAdsCameraCallToActionView_h */
