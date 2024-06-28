//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPollStickerSummaryView_h
#define IGPollStickerSummaryView_h
@import Foundation;

#include "UIView.h"
#include "IGPollStickerSummaryVoteOptionView.h"

@class CALayer, UIButton, UITapGestureRecognizer;
@protocol IGPollStickerSummaryViewDelegate;

@interface IGPollStickerSummaryView : UIView {
  /* instance variables */
  UITapGestureRecognizer *_tapGesture;
  BOOL _isShareButtonHidden;
  IGPollStickerSummaryVoteOptionView *_leftOptionView;
  IGPollStickerSummaryVoteOptionView *_rightOptionView;
  CALayer *_dividerLine;
}

@property (readonly, nonatomic) UIButton *shareButton;
@property (weak, nonatomic) NSObject<IGPollStickerSummaryViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)configureWithModel:(id)model;
- (void)_didTap:(id)tap;
- (void)_didTapShareButton:(id)button;
@end

#endif /* IGPollStickerSummaryView_h */