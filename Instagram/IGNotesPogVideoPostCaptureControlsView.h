//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNotesPogVideoPostCaptureControlsView_h
#define IGNotesPogVideoPostCaptureControlsView_h
@import Foundation;

#include "UIView.h"

@class IGBouncyButton, IGStackLayout, IGUser, UIImageView, UILabel;

@interface IGNotesPogVideoPostCaptureControlsView : UIView {
  /* instance variables */
  UIImageView *_confirmIconView;
  UIImageView *_deleteIconView;
  UILabel *_bodyLabel;
  IGStackLayout *_verticalStackLayout;
  double _maxLabelWidth;
  long long _entryPoint;
  IGUser *_targetProfile;
  BOOL _isPhotoCaptureEnabled;
  IGBouncyButton *_deleteButton;
  IGBouncyButton *_confirmButton;
}

/* instance methods */
- (id)initWithEntryPoint:(long long)point targetProfile:(id)profile isPhotoCaptureEnabled:(BOOL)enabled;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGNotesPogVideoPostCaptureControlsView_h */