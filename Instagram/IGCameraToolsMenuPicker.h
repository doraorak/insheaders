//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraToolsMenuPicker_h
#define IGCameraToolsMenuPicker_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGCameraToolsMenuPickerItem.h"
#include "IGEDRViewType-Protocol.h"

@class NSArray, NSString, UIView, UIVisualEffectView;
@protocol IGCameraToolsMenuPickerDelegate;

@interface IGCameraToolsMenuPicker : IGPassthroughView<IGEDRViewType> {
  /* instance variables */
  NSArray *_itemButtons;
  unsigned long long _defaultIndex;
  UIVisualEffectView *_blurView;
  UIView *_whiteCircleSelectorView;
  IGCameraToolsMenuPickerItem *_defaultItem;
  double _expansionPercentage;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (weak, nonatomic) NSObject<IGCameraToolsMenuPickerDelegate> *delegate;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItems:(id)items;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (void)_didTapItemButton:(id)button;
- (void)setEDR:(BOOL)edr;
@end

#endif /* IGCameraToolsMenuPicker_h */
