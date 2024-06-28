//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInterceptingSwitch_h
#define IGInterceptingSwitch_h
@import Foundation;

#include "IGDSSwitch.h"

@class UIButton;
@protocol IGInterceptingSwitchDelegate;

@interface IGInterceptingSwitch : IGDSSwitch {
  /* instance variables */
  UIButton *_interceptingButton;
  NSObject<IGInterceptingSwitchDelegate> *_delegate;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)onChange;
- (void)_onIntercept;
@end

#endif /* IGInterceptingSwitch_h */