//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMessageAvatarAngerPowerUpCoordinator_h
#define FBMessageAvatarAngerPowerUpCoordinator_h
@import Foundation;

#include "NSObject-Protocol.h"

@class CAGradientLayer, NSObject, NSString, NSURL, UIImpactFeedbackGenerator, UIView;
@protocol FBMessagePowerupAvatarAnimationViewProvider, FBMessagePowerupDelegate, FBMessagePowerupKeyframesDelegate, UIView<FBMessagePowerupKeyframesProtocol;

@interface FBMessageAvatarAngerPowerUpCoordinator : NSObject<NSObject> {
  /* instance variables */
  unsigned long long _currentBubbleState;
  UIView *_messageForegroundView;
  UIView *_messageBackgroundView;
  UIView *_textViewBackgroundView;
  CAGradientLayer *_backgroundGradientLayer;
  CAGradientLayer *_shakeGradientLayer;
  UIView *_avatarAnimationView;
  UIView<FBMessagePowerupKeyframesProtocol> *_crackLoopAnimationView;
  UIView<FBMessagePowerupKeyframesProtocol> *_crackOnceAnimationView;
  NSURL *_crackLoopKeyframesURL;
  NSURL *_crackOnceKeyframesURL;
  double _cornerRadius;
  BOOL _useHapticFeedback;
  BOOL _playingTapAnimation;
  UIImpactFeedbackGenerator *_feedbackGenerator;
  BOOL _shouldShowAvatarAnimationOnTap;
  BOOL _shouldPlayAnimationWhenAvatarAnimationMediaSet;
  NSObject *_avatarAnimationMedia;
  NSObject<FBMessagePowerupDelegate> *_delegate;
  NSObject<FBMessagePowerupKeyframesDelegate> *_keyframesDelegate;
  NSObject<FBMessagePowerupAvatarAnimationViewProvider> *_avatarAnimationViewProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessagePowerupDelegate:(id)delegate keyframesDelegate:(id)delegate avatarAnimationViewProvider:(id)provider crackIdleKeyframesURL:(id)url crackActiveKeyframesURL:(id)url avatarAnimationMedia:(id)media shouldShowAvatarAnimationOnTap:(BOOL)tap;
- (void)_setupViews;
- (void)_setupViewsIfNeeded;
- (void)layoutEffect;
- (void)resetAnimation;
- (void)_performTapAnimationWithAnimationView:(id)view;
- (void)_playMessageBubbleAnimation;
- (void)playAnimationWithThreadForegroundView:(id)view threadBackgroundView:(id)view composerMinY:(double)y keyframesDelegate:(id)delegate useHapticFeedback:(BOOL)feedback;
- (BOOL)shouldBringMessageCellToFrontOfMessageList;
- (void)configureWithViewModel:(struct { double x0; id x1; BOOL x2; })model;
- (void)setAvatarAnimationMedia:(id)media;
- (void)_layoutAvatarAnimationView;
- (void)setState:(unsigned long long)state;
- (void)_loadCrackLoopAnimationWithCompletionBlock:(id /* block */)block keyframesDelegate:(id)delegate;
- (void)_animateCrackLoopAnimationView:(id)view;
- (void)_loadCrackOnceAnimationWithCompletionBlock:(id /* block */)block keyframesDelegate:(id)delegate;
- (void)_animateCrackOnceAnimationView:(id)view;
- (double)_getCrackAnimationWidth;
- (void)_stopAnimationView:(id)view;
- (void)_restartAnimationView:(id)view;
- (void)_applicationWillEnterForeground:(id)foreground;
@end

#endif /* FBMessageAvatarAngerPowerUpCoordinator_h */