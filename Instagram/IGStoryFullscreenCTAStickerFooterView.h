//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenCTAStickerFooterView_h
#define IGStoryFullscreenCTAStickerFooterView_h
@import Foundation;

#include "UIView.h"

@class IGLinkStickerView, IGTapButton;
@protocol IGStoryFullscreenCTAStickerFooterViewDelegate;

@interface IGStoryFullscreenCTAStickerFooterView : UIView {
  /* instance variables */
  IGLinkStickerView *_ctaSticker;
  IGTapButton *_reshareButton;
}

@property (weak, nonatomic) NSObject<IGStoryFullscreenCTAStickerFooterViewDelegate> *delegate;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (void)_handleCTAStickerTap:(id)tap;
- (void)_handleReshareButtonTap;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* IGStoryFullscreenCTAStickerFooterView_h */
