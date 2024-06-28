//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMessageGiftPowerupCoordinator_h
#define FBMessageGiftPowerupCoordinator_h
@import Foundation;

#include "FBParticleLayer.h"
#include "NSObject-Protocol.h"

@class NSString, UIImpactFeedbackGenerator, UIView;
@protocol FBMessagePowerupDelegate;

@interface FBMessageGiftPowerupCoordinator : NSObject<NSObject> {
  /* instance variables */
  UIView *_messageForegroundView;
  UIView *_messageGiftBoxBackgroundView;
  UIView *_messageGiftBoxForegroundView;
  UIView *_messageGiftBoxForegroundLidDepthView;
  UIView *_messageGiftBoxForegroundLidTopView;
  FBParticleLayer *_bowKnot;
  FBParticleLayer *_bowLeft;
  FBParticleLayer *_bowRight;
  FBParticleLayer *_horizontalRibbon;
  FBParticleLayer *_verticalRibbon;
  BOOL _giftBoxCoverHasBeenRemoved;
  UIImpactFeedbackGenerator *_feedbackGenerator;
  NSObject<FBMessagePowerupDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessagePowerupDelegate:(id)delegate horizontalRibbonImage:(id)image bowLeftImage:(id)image bowKnotImage:(id)image giftBoxCoverHasBeenRemoved:(BOOL)removed isBackgroundHidden:(BOOL)hidden;
- (void)layoutEffect;
- (void)resetAnimation;
- (void)playAnimationWithThreadForegroundView:(id)view threadBackgroundView:(id)view composerMinY:(double)y keyframesDelegate:(id)delegate useHapticFeedback:(BOOL)feedback;
- (BOOL)shouldBringMessageCellToFrontOfMessageList;
- (void)configureWithViewModel:(struct { double x0; id x1; BOOL x2; })model;
- (void)_cleanUpGiftBoxLid;
- (void)runRemoveLidAnimation;
- (id)_addParticleLayerForImage:(id)image;
- (void)_applicationWillEnterForeground:(id)foreground;
@end

#endif /* FBMessageGiftPowerupCoordinator_h */