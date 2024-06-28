//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCameraAREffectNativeUIDelegateCoordinator_h
#define IGStoryCameraAREffectNativeUIDelegateCoordinator_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIView;
@protocol IGStoryCameraAREffectNativeUIDelegateCoordinatorContext;

@interface IGStoryCameraAREffectNativeUIDelegateCoordinator : NSObject<NSObject> {
  /* instance variables */
  UIView *_contentView;
  NSObject<IGStoryCameraAREffectNativeUIDelegateCoordinatorContext> *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentView:(id)view context:(id)context;
- (void)cameraViewController:(id)controller shouldConfigurePickerWithConfiguration:(id)configuration;
- (void)cameraViewControllerShouldShowPicker:(id)picker;
- (void)cameraViewControllerShouldHidePicker:(id)picker;
- (void)cameraViewController:(id)controller shouldSelectPickerIndex:(unsigned long long)index;
- (void)cameraViewController:(id)controller didSelectPickerItem:(id)item atIndex:(unsigned long long)index;
- (void)cameraViewControllerShouldShowSlider:(id)slider;
- (void)cameraViewControllerShouldHideSlider:(id)slider;
- (void)cameraViewControllerSliderConfigure:(id)configure sliderConfig:(id)config;
- (void)cameraViewController:(id)controller shouldChangeSliderValue:(double)value;
- (void)cameraViewControllerShouldShowEditableTextInput:(id)input currentText:(id)text;
- (void)cameraViewControllerShouldShowTextInput:(id)input currentText:(id)text;
- (void)cameraViewControllerShouldHideTextInput:(id)input;
@end

#endif /* IGStoryCameraAREffectNativeUIDelegateCoordinator_h */