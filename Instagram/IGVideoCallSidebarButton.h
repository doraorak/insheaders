//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallSidebarButton_h
#define IGVideoCallSidebarButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGCameraToolsMenuToolLabel.h"
#include "NSObject-Protocol.h"

@class CHHapticEngine, NSString, UIImageView, UILongPressGestureRecognizer, UIView;
@protocol IGVideoCallSidebarButtonDelegate;

@interface IGVideoCallSidebarButton : IGBouncyButton<NSObject> {
  /* instance variables */
  UIView *_iconView;
  IGCameraToolsMenuToolLabel *_label;
  UIImageView *_closeButtonIcon;
  UIView *_closeButton;
  UILongPressGestureRecognizer *_longPressGestureRecognizer;
  CHHapticEngine *_hapticEngine;
  BOOL _showCloseButtonUponSelect;
}

@property (weak, nonatomic) NSObject<IGVideoCallSidebarButtonDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImage:(id)image title:(id)title;
- (id)initWithSliderWithImage:(id)image title:(id)title;
- (id)initImageViewWithTitle:(id)title;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setImageURL:(id)url;
- (void)setSelected:(BOOL)selected;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)slider:(id)slider didChangeValue:(double)value;
- (void)sliderDidBeginChangingValue:(id)value;
- (void)sliderDidEndChangingValue:(id)value;
- (void)sliderDidTapIcon:(id)icon;
- (void)_sliderButtonLongPressReceived:(id)received;
@end

#endif /* IGVideoCallSidebarButton_h */
