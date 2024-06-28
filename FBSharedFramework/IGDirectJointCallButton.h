//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectJointCallButton_h
#define IGDirectJointCallButton_h
@import Foundation;

#include "UIButton.h"
#include "IGPulsatingShimmeringView.h"
#include "IGTapButton.h"

@interface IGDirectJointCallButton : UIButton {
  /* instance variables */
  long long _callType;
  IGTapButton *_callButton;
  struct CGSize { double width; double height; } _buttonSize;
  IGPulsatingShimmeringView *_pulsatingView;
}

/* instance methods */
- (id)initWithCallType:(long long)type;
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned long long)events;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (struct CGSize { double x0; double x1; })buttonSize;
@end

#endif /* IGDirectJointCallButton_h */