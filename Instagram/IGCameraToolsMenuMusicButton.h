//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraToolsMenuMusicButton_h
#define IGCameraToolsMenuMusicButton_h
@import Foundation;

#include "IGCameraToolsMenuTapButton.h"

@interface IGCameraToolsMenuMusicButton : IGCameraToolsMenuTapButton
/* class methods */
+ (id)new;
+ (id)newWithTitle:(id)title;

/* instance methods */
- (BOOL)isSelected;
- (void)setSelected:(BOOL)selected;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setEDR:(BOOL)edr;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
@end

#endif /* IGCameraToolsMenuMusicButton_h */