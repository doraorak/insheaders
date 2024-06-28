//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTimeStickerTextView_h
#define IGTimeStickerTextView_h
@import Foundation;

#include "UIView.h"

@class NSDictionary, UIBezierPath, UILabel;

@interface IGTimeStickerTextView : UIView {
  /* instance variables */
  UIBezierPath *_cachedOutlinePath;
  BOOL _outlinePathComputationInProgress;
  BOOL _useBrandRefreshForGlobalScripts;
  UILabel *_timeLabel;
  UILabel *_accessoryLabel;
  NSDictionary *_accessoryLabelAttributes;
}

/* instance methods */
- (id)initUsingBrandRefreshForGlobalScripts:(BOOL)scripts;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)outlinePath;
- (BOOL)highQualityOutlinePath;
@end

#endif /* IGTimeStickerTextView_h */