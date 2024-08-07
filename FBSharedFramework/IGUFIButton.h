//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUFIButton_h
#define IGUFIButton_h
@import Foundation;

#include "UIButton.h"
#include "IGFeedViewGesturePriorityProviding-Protocol.h"

@class CALayer, NSString, UIColor;

@interface IGUFIButton : UIButton<IGFeedViewGesturePriorityProviding> {
  /* instance variables */
  UIColor *_selectedFillColor;
  CALayer *_hitTestVisualizer;
  long long _colorType;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _tapPadding;
}

@property (readonly, nonatomic) long long type;
@property (nonatomic) BOOL edr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithType:(long long)type colorType:(long long)type;
- (id)initWithType:(long long)type colorType:(long long)type selectedFillColor:(id)color;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSelected:(BOOL)selected;
- (void)setEDR:(BOOL)edr;
- (long long)gesturePriorityIndex;
@end

#endif /* IGUFIButton_h */
