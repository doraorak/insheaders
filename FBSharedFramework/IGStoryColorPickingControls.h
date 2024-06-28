//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryColorPickingControls_h
#define IGStoryColorPickingControls_h
@import Foundation;

#include "UIView.h"
#include "IGStoryColorPaletteView.h"
#include "IGStoryEyedropperToggleButton.h"
#include "IGStoryHuePickerView.h"

@interface IGStoryColorPickingControls : UIView {
  /* instance variables */
  BOOL _redesignedColorCellEnabled;
  BOOL _huePickerVisible;
  IGStoryColorPaletteView *_colorPaletteView;
  IGStoryEyedropperToggleButton *_eyedropperToggleButton;
  IGStoryHuePickerView *_huePickerView;
}

/* instance methods */
- (id)initWithColorPalettes:(id)palettes eyedropperColorPickerEnabled:(BOOL)enabled pagingEnabled:(BOOL)enabled redesignedColorCellEnabled:(BOOL)enabled;
- (id)initWithColorPalettes:(id)palettes eyedropperColorPickerEnabled:(BOOL)enabled pagingEnabled:(BOOL)enabled redesignedColorCellEnabled:(BOOL)enabled edrMultiplier:(double)multiplier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGStoryColorPickingControls_h */
