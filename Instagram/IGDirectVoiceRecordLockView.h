//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVoiceRecordLockView_h
#define IGDirectVoiceRecordLockView_h
@import Foundation;

#include "UIView.h"
#include "IGDirectVoiceRecordLockViewAppearance.h"

@class UIImageView;

@interface IGDirectVoiceRecordLockView : UIView {
  /* instance variables */
  IGDirectVoiceRecordLockViewAppearance *_unlockedAppearance;
  IGDirectVoiceRecordLockViewAppearance *_lockedAppearance;
  UIImageView *_lockImageView;
  long long _animationState;
}

@property (nonatomic) long long state;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
@end

#endif /* IGDirectVoiceRecordLockView_h */
