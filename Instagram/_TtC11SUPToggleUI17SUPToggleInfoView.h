//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11SUPToggleUI17SUPToggleInfoView_h
#define _TtC11SUPToggleUI17SUPToggleInfoView_h
@import Foundation;

#include "UIView.h"

@interface _TtC11SUPToggleUI17SUPToggleInfoView : UIView { // (Swift)
  /* instance variables */
   theme;
   stackView;
   $__lazy_storage_$_backgroundView;
   $__lazy_storage_$_batteryLabel;
   $__lazy_storage_$_networkView;
   $__lazy_storage_$_capturePromptLabel;
   $__lazy_storage_$_separatorView;
   $__lazy_storage_$_supportPromptButton;
   $__lazy_storage_$_errorPromptButton;
   $__lazy_storage_$_batteryView;
   $__lazy_storage_$_notchView;
   state;
   health;
   isLeftAligned;
   connectionPromptEnabled;
   supportPromptAction;
   errorPromptButtonAction;
   capturePromptEnabled;
   assetsProvider;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC11SUPToggleUI17SUPToggleInfoView_h */