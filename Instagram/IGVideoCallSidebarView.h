//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallSidebarView_h
#define IGVideoCallSidebarView_h
@import Foundation;

#include "UIView.h"
#include "IGVideoCallAvatarLoadingIndicatorView.h"
#include "IGVideoCallSidebarButton.h"
#include "IGVideoCallSidebarOpenCloseButton.h"
#include "NSObject-Protocol.h"

@class IGGradientView, IGStackLayout, IGUserSession, NSArray, NSString, UITapGestureRecognizer, UIView;
@protocol IGVideoCallSidebarViewDelegate, IGVideoCallSidebarViewSliderAppearDelegate;

@interface IGVideoCallSidebarView : UIView<NSObject> {
  /* instance variables */
  IGGradientView *_sidebarScrimView;
  IGUserSession *_userSession;
  UIView *_sidebarStackView;
  IGStackLayout *_sidebarStackLayout;
  IGVideoCallSidebarButton *_effectsButton;
  IGVideoCallSidebarButton *_soloBackgroundsButton;
  IGVideoCallSidebarButton *_dualCameraButton;
  IGVideoCallSidebarButton *_filtersButton;
  IGVideoCallSidebarButton *_touchupButton;
  IGVideoCallSidebarButton *_avatarsButton;
  IGVideoCallSidebarButton *_avatarsEffectsButton;
  IGVideoCallSidebarButton *_avatarsBackgroundButton;
  IGVideoCallSidebarButton *_selfViewLayoutButton;
  IGVideoCallAvatarLoadingIndicatorView *_avatarLoadingIndicatorView;
  IGVideoCallSidebarOpenCloseButton *_openCloseButton;
  NSArray *_sidebarEffectButtons;
  NSArray *_sidebarAvatarButtons;
  IGVideoCallSidebarButton *_currentButtonWithSlider;
  UITapGestureRecognizer *_tapGestureRecognizer;
  BOOL _labelsHidden;
  unsigned long long _sidebarType;
  BOOL _avatarsIntegrationEnabled;
  BOOL _avatarBackgroundsEnabled;
  BOOL _sideSliderON;
  BOOL _soloBackgroundsEnabled;
  BOOL _dualCameraEnabled;
  BOOL _expandableMenuEnabled;
  BOOL _isMenuExpanded;
  unsigned long long _showSidebarCount;
  NSObject<IGVideoCallSidebarViewSliderAppearDelegate> *_sliderAppearDelegate;
}

@property (weak, nonatomic) NSObject<IGVideoCallSidebarViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAvatarsEnabled:(BOOL)enabled avatarsIntegrationEnabled:(BOOL)enabled avatarsBackgroundsEnabled:(BOOL)enabled filtersEnabled:(BOOL)enabled soloBackgroundsEnabled:(BOOL)enabled dualCameraEnabled:(BOOL)enabled expandableMenuEnabled:(BOOL)enabled sidebarItemsReorderingEnabled:(BOOL)enabled sparklesEffectIconEnabled:(BOOL)enabled selfViewLayoutEnabled:(BOOL)enabled userSession:(id)session;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)_didTapOpenCloseButton:(id)button;
- (void)_buttonTapped:(id)tapped;
- (void)_didTapOutsideSlider:(id)slider;
- (void)videoCallSidebarButtonSliderDidChangeValue:(id)value value:(double)value;
- (void)videoCallSidebarButtonSliderWillAppear:(id)appear;
- (void)videoCallSidebarButtonSliderWillDisappear;
- (void)videoCallSidebarButtonSliderDidLongPress;
@end

#endif /* IGVideoCallSidebarView_h */
