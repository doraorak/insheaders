//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTextToolPickerView_h
#define IGStoryTextToolPickerView_h
@import Foundation;

#include "UIView.h"
#include "IGStoryTextAlignmentToggleButton.h"
#include "IGStoryTextEmphasisToggleButton.h"
#include "IGTapButton.h"

@class UIVisualEffectView;
@protocol IGStoryTextToolPickerViewDelegate;

@interface IGStoryTextToolPickerView : UIView {
  /* instance variables */
  UIVisualEffectView *_toolPickerBlurEffectView;
  IGTapButton *_textFontPickerButton;
  IGTapButton *_textColorPickerButton;
  IGTapButton *_effectPickerButton;
  IGTapButton *_lastSelectedButton;
  unsigned long long _stackedToolSelectorMenuConfiguration;
  BOOL _isEffectsPickerSelected;
  IGStoryTextAlignmentToggleButton *_alignmentPickerButton;
}

@property (weak, nonatomic) NSObject<IGStoryTextToolPickerViewDelegate> *delegate;
@property (readonly, nonatomic) IGTapButton *animationPickerButton;
@property (readonly, nonatomic) double numberOfAvailableTools;
@property (readonly, nonatomic) IGStoryTextEmphasisToggleButton *textEmphasisToggleButton;

/* instance methods */
- (id)initWithMenuConfiguration:(unsigned long long)configuration;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)_buttonForTextPickerViewMode:(long long)mode;
- (void)_didTapFontPicker;
- (void)_didTapColorPicker;
- (void)_didTapAnimationPicker;
- (void)_didTapEffectsPicker;
@end

#endif /* IGStoryTextToolPickerView_h */
