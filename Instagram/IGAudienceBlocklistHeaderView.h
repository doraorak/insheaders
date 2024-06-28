//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudienceBlocklistHeaderView_h
#define IGAudienceBlocklistHeaderView_h
@import Foundation;

#include "UIView.h"

@class IGStackLayout, UILabel;

@interface IGAudienceBlocklistHeaderView : UIView {
  /* instance variables */
  UILabel *_subtitleLabel;
  IGStackLayout *_stackLayout;
}

/* instance methods */
- (id)initForGlobalBlocklist;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGAudienceBlocklistHeaderView_h */