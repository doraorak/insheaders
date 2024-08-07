//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerMusicClipsAttributionView_h
#define IGStoryViewerMusicClipsAttributionView_h
@import Foundation;

#include "UIView.h"

@class UIImageView, UILabel;

@interface IGStoryViewerMusicClipsAttributionView : UIView {
  /* instance variables */
  UILabel *_textLabel;
  UIImageView *_iconView;
  UIImageView *_chevronImageView;
}

/* instance methods */
- (id)initWithTextLabelString:(id)string;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGStoryViewerMusicClipsAttributionView_h */
