//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreationPostCaptureHeaderView_h
#define IGCreationPostCaptureHeaderView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGCreationActionBar.h"
#include "IGCreationPostCaptureHeaderSpec.h"
#include "IGCreationPostCaptureHeaderViewProtocol-Protocol.h"
#include "IGGradientColorToggleButton.h"
#include "IGUserLauncherSet-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface IGCreationPostCaptureHeaderView : IGPassthroughView<IGCreationPostCaptureHeaderViewProtocol> {
  /* instance variables */
  NSObject<IGUserLauncherSet> *_launcherSet;
  IGCreationActionBar *_toolbar;
  NSArray *_buttonTypeOrder;
  NSMutableDictionary *_buttonItems;
  NSMutableDictionary *_registeredActions;
  NSArray *_overflowButtonTypes;
  BOOL _edr;
  BOOL _showDoodleButtonFirst;
  BOOL _downRankBrandedContentOrAdsButton;
  long long _overflowForcedItemCount;
}

@property (retain, nonatomic) IGCreationPostCaptureHeaderSpec *headerSpec;
@property (readonly, nonatomic) IGGradientColorToggleButton *gradientButton;
@property (retain, nonatomic) NSObject<IGAnalyticsEventLoggingProtocol> *analyticsLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (BOOL)isButtonInOverflow:(unsigned long long)overflow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapMoreButton;
- (void)setEDR:(BOOL)edr;
- (void)setMusicButtonArtwork:(id)artwork;
- (void)setButtonsEnabled:(BOOL)enabled cancelButtonEnabled:(BOOL)enabled;
- (id)buttonWithType:(unsigned long long)type;
- (id)firstButton;
- (void)addTarget:(id)target action:(SEL)action forButton:(unsigned long long)button;
- (void)removeTarget:(id)target action:(SEL)action forButton:(unsigned long long)button;
- (void)setOverlayImageOnStickerButton:(id)button;
@end

#endif /* IGCreationPostCaptureHeaderView_h */
