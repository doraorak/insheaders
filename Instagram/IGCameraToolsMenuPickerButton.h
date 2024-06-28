//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraToolsMenuPickerButton_h
#define IGCameraToolsMenuPickerButton_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGCameraToolsMenuPicker.h"
#include "IGCameraToolsMenuPresentationViewController.h"
#include "IGCameraToolsMenuTool-Protocol.h"
#include "IGCameraToolsMenuToolLabel.h"

@class IGBouncyButton, IGGradientView, NSArray, NSString, UIImpactFeedbackGenerator;
@protocol IGCameraToolsMenuPickerButtonDelegate;

@interface IGCameraToolsMenuPickerButton : IGPassthroughView<IGCameraToolsMenuTool> {
  /* instance variables */
  IGBouncyButton *_bouncyButton;
  IGCameraToolsMenuToolLabel *_label;
  IGCameraToolsMenuPicker *_picker;
  IGCameraToolsMenuPresentationViewController *_expandedViewController;
  IGGradientView *_protectionGradient;
  BOOL _expanded;
  double _titleAlpha;
  double _pickerExpansionPercentage;
  UIImpactFeedbackGenerator *_impactGenerator;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSString *title;
@property (weak, nonatomic) NSObject<IGCameraToolsMenuPickerButtonDelegate> *delegate;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly, nonatomic) BOOL isDefaultSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL titleVisible;
@property (nonatomic) long long loggingKey;

/* instance methods */
- (id)initWithItems:(id)items title:(id)title;
- (id)initWithItems:(id)items title:(id)title identifier:(id)identifier;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)attribute;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)_didTapBouncyButton:(id)button;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setTitleVisible:(BOOL)visible animated:(BOOL)animated;
- (void)setEDR:(BOOL)edr;
- (id)accessibilityElementsForCameraToolsMenuPresentationViewController:(id)controller;
- (void)cameraToolsMenuPresentationViewControllerDidTapBackground:(id)background;
- (void)cameraToolsMenuPresentationViewControllerWillDismiss:(id)dismiss;
- (void)picker:(id)picker didSelectItemAtIndex:(unsigned long long)index;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (BOOL)isSelected;
- (BOOL)isTitleVisible;
@end

#endif /* IGCameraToolsMenuPickerButton_h */