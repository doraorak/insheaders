//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAREffectUIPresenter_h
#define IGAREffectUIPresenter_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGAREffectNativeUIControlHandler, IGAREffectNativeUIPickerConfiguration, IGEffectSlider, NSString, UIViewController;
@protocol ARAdsNativeUIDelegateProtocol, IGAREffectUILayoutProvider;

@interface IGAREffectUIPresenter : NSObject<NSObject> {
  /* instance variables */
  UIViewController *_vc;
  IGEffectSlider *_effectSliderView;
  BOOL _isEffectSliderActive;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sliderFrame;
  IGAREffectNativeUIPickerConfiguration *_variantPickerConfiguration;
  NSObject<IGAREffectUILayoutProvider> *_layoutProvider;
  IGAREffectNativeUIControlHandler *_nativeUIControlHandler;
}

@property (weak, nonatomic) NSObject<ARAdsNativeUIDelegateProtocol> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewController:(id)controller;
- (id)initWithViewController:(id)controller layoutProvider:(id)provider;
- (void)nativeUICameraTrayDidSelectItemAtIndex:(long long)index;
- (void)effectSliderDidBeginSliding:(id)sliding;
- (void)effectSliderDidFinishSliding:(id)sliding;
- (void)effectSlider:(id)slider didSlide:(double)slide;
- (void)nativeUIControlServiceHandlerShouldShowSlider:(id)slider;
- (void)nativeUIControlServiceHandlerShouldHideSlider:(id)slider;
- (void)nativeUIControlServiceHandler:(id)handler shouldChangeSliderValue:(double)value;
- (void)nativeUIControlServiceHandler:(id)handler configureSlider:(id)slider;
- (void)nativeUIControlServiceHandler:(id)handler shouldConfigurePickerWithConfiguration:(id)configuration;
- (void)nativeUIControlServiceHandlerShouldShowPicker:(id)picker;
- (void)nativeUIControlServiceHandlerShouldHidePicker:(id)picker;
- (void)nativeUIControlServiceHandler:(id)handler shouldSelectPickerIndex:(unsigned long long)index;
- (void)nativeUIControlServiceHandler:(id)handler didSelectPickerItem:(id)item atIndex:(unsigned long long)index;
- (void)nativeUIControlServiceHandlerShouldShowTextInput:(id)input currentText:(id)text;
- (void)nativeUIControlServiceHandlerShouldHideTextInput:(id)input;
- (void)nativeUIControlServiceHandlerShouldShowEditableTextInput:(id)input currentText:(id)text;
@end

#endif /* IGAREffectUIPresenter_h */