//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksFlexboxView_h
#define BKBloksFlexboxView_h
@import Foundation;

#include "UIView.h"
#include "BKBloksFlexboxDecorationConfig.h"
#include "BKBloksFlexboxTouchDownGestureRecognizer.h"
#include "BKFlexboxStyleTouchExpansionWrapper.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class BKBloksColorConfig, BKBloksPressedConfig, CAShapeLayer, NSArray, NSString, UIImageView, UITapGestureRecognizer, UIView;
@protocol BKBloksFlexboxViewMountDelegate, CALayer<FBDarkModeAwareObject;

@interface BKBloksFlexboxView : UIView<UIGestureRecognizerDelegate> {
  /* instance variables */
  BOOL _onMountCalled;
  UIImageView *_overlayCornersView;
  CALayer<FBDarkModeAwareObject> *_backgroundLayer;
  BKBloksColorConfig *_defaultBackgroundDrawable;
  BKBloksColorConfig *_pressedBackgroundDrawable;
  BKBloksColorConfig *_disabledBackgroundDrawable;
  UIView *_foregroundView;
  UIView *_backgroundView;
  NSArray *_foregroundGradientLayers;
  NSArray *_backgroundGradientLayers;
  BKBloksColorConfig *_defaultForegroundDrawable;
  BKBloksColorConfig *_pressedForegroundDrawable;
  BKBloksColorConfig *_disabledForegroundDrawable;
  BKBloksPressedConfig *_pressedForegroundConfig;
  BKBloksPressedConfig *_pressedBackgroundConfig;
  CAShapeLayer *_dashedBorderLayer;
  UITapGestureRecognizer *_onTapGestureRecognizer;
  BKBloksFlexboxTouchDownGestureRecognizer *_pressedStateTouchDownGestureRecognizer;
  BKBloksFlexboxDecorationConfig *_decoration;
  id /* block */ _onTapBlock;
  BKFlexboxStyleTouchExpansionWrapper *_touchExpansion;
  NSObject<BKBloksFlexboxViewMountDelegate> *_mountDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (void)setOnTapBlock:(id /* block */)block;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)_handleGestureRecognizer:(id)recognizer;
- (void)layoutSubviews;
- (void)setDecoration:(id)decoration;
- (void)setBackgroundLayer:(id)layer;
- (void)setDefaultBackgroundDrawable:(id)drawable;
- (void)setPressedBackgroundDrawable:(id)drawable;
- (void)setDisabledBackgroundDrawable:(id)drawable;
- (void)setDefaultForegroundDrawable:(id)drawable;
- (void)setPressedForegroundDrawable:(id)drawable;
- (void)setDisabledForegroundDrawable:(id)drawable;
- (void)setPressedBackgroundConfig:(id)config;
- (void)setPressedForegroundConfig:(id)config;
- (void)setTouchExpansion:(id)expansion;
- (BOOL)isDarkMode;
- (void)traitCollectionDidChange:(id)change;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
@end

#endif /* BKBloksFlexboxView_h */