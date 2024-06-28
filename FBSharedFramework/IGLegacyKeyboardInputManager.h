//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLegacyKeyboardInputManager_h
#define IGLegacyKeyboardInputManager_h
@import Foundation;

#include "IGKeyboardInputManager-Protocol.h"
#include "IGKeyboardObserver.h"
#include "IGKeyboardObserverFrameChangeDelegate-Protocol.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"

@class NSSet, NSString, UIScrollView, UIView;
@protocol IGKeyboardInputManagerAnnouncer;

@interface IGLegacyKeyboardInputManager : NSObject<IGKeyboardObserverShowDelegate, IGKeyboardObserverHideDelegate, IGKeyboardObserverFrameChangeDelegate, IGKeyboardInputManager> {
  /* instance variables */
  UIView *_containerView;
  UIScrollView *_scrollView;
  UIView *_accessoryView;
  UIView *_tabBarView;
  UIView *_keyboardView;
  IGKeyboardObserver *_keyboardObserver;
  UIView *_safeAreaBottomInsetOverlayView;
  NSObject<IGKeyboardInputManagerAnnouncer> *_announcer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double bottomInsetY;
@property (copy, nonatomic) NSSet *additionalViewsToMoveWithKeyboard;
@property (nonatomic) double accessoryViewAdditionalMinBottomInset;
@property (nonatomic) double additionalBottomInset;
@property (nonatomic) BOOL disableOffset;
@property (nonatomic) BOOL disableInset;
@property (nonatomic) BOOL shouldPlaceAccessoryViewAboveTabBarView;
@property (nonatomic) BOOL hideAccessoryViewWhenKeyboardIsDisappearing;
@property (nonatomic) BOOL disableAnimationForAdjustments;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL pauseInsetOffsetAdjustments;

/* instance methods */
- (void)dealloc;
- (id)initWithContainerView:(id)view scrollView:(id)view accessoryView:(id)view tabBarView:(id)view shouldAddSafeAreaOverlayView:(BOOL)view shouldHideKeyboardOnPan:(BOOL)pan;
- (void)setSafeAreaOverlayViewBackgroundColor:(id)color;
- (void)updateKeyboard;
- (void)layoutAccessoryView;
- (void)optimisticallyUpdateBottomInsetForKeyboard;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (double)currentKeyboardPercentPresented;
- (void)_onScrollViewPan:(id)pan;
- (void)keyboardObserver:(id)observer keyboardFrameWillChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardFrameDidChangeWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
@end

#endif /* IGLegacyKeyboardInputManager_h */
