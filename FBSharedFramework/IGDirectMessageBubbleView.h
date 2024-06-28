//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageBubbleView_h
#define IGDirectMessageBubbleView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectGradientView.h"
#include "IGDirectMessageBubbleLayoutSpec.h"
#include "IGDirectMessageBubbleStyle.h"
#include "IGTransitionZoomViewCustomizable-Protocol.h"

@class CAShapeLayer, NSString, UIImage;

@interface IGDirectMessageBubbleView : UIView<IGTransitionZoomViewCustomizable> {
  /* instance variables */
  IGDirectGradientView *_gradientBackgroundView;
  IGDirectMessageBubbleStyle *_bubbleStyle;
  IGDirectMessageBubbleLayoutSpec *_bubbleLayoutSpec;
  UIImage *_cornerMaskImage;
  CAShapeLayer *_cornerMaskImagePathBorderLayer;
  double _maxCornerRadius;
}

@property (readonly, nonatomic) IGDirectGradientView *gradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (double)zoomTransitionViewCornerRadius;
- (long long)zoomTransitionViewType;
@end

#endif /* IGDirectMessageBubbleView_h */
