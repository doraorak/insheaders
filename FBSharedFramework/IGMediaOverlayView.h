//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaOverlayView_h
#define IGMediaOverlayView_h
@import Foundation;

#include "UIView.h"
#include "IGAPIMediaOverlayPayloadSchema.h"
#include "IGContentGateableMediaItem-Protocol.h"
#include "IGMediaOverlayActionableInsightsTipBannerView.h"
#include "IGMediaOverlayBannerView.h"
#include "IGMediaOverlayDarkBannerView.h"
#include "IGMediaOverlayFullView.h"
#include "IGMediaOverlayFullscreenBannerView.h"
#include "IGMediaOverlayIconAndTextView.h"
#include "IGMediaOverlayIconOnlyView.h"
#include "IGMediaOverlayImmersiveFullView.h"
#include "IGMediaOverlayRendering-Protocol.h"

@class NSString;
@protocol IGMediaOverlayDelegate;

@interface IGMediaOverlayView : UIView<IGMediaOverlayRendering> {
  /* instance variables */
  IGAPIMediaOverlayPayloadSchema *_commentInformMediaOverlayModel;
  BOOL _shouldUseCommentInformModel;
  double _cornerRadius;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _insets;
  IGMediaOverlayBannerView *_bannerView;
  IGMediaOverlayDarkBannerView *_darkBannerView;
  IGMediaOverlayFullView *_fullView;
  IGMediaOverlayImmersiveFullView *_immersiveFullView;
  IGMediaOverlayFullscreenBannerView *_fullscreenBannerView;
  IGMediaOverlayIconAndTextView *_iconAndTextView;
  IGMediaOverlayIconOnlyView *_iconOnlyView;
}

@property (readonly, nonatomic) IGMediaOverlayActionableInsightsTipBannerView *actionableInsightsTipBannerView;
@property (readonly, nonatomic) NSObject<IGContentGateableMediaItem> *mediaItem;
@property (nonatomic) unsigned long long layoutDisposition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGMediaOverlayDelegate> *delegate;
@property (nonatomic) BOOL highlighted;

/* class methods */
+ (double)bannerHeightForMediaItem:(id)item width:(double)width;

/* instance methods */
- (void)configureWithMediaItem:(id)item renderType:(unsigned long long)type accessibilityLabel:(id)label accessibilityTraits:(unsigned long long)traits;
- (void)configureWithMediaItem:(id)item renderType:(unsigned long long)type;
- (void)configureWithMediaItem:(id)item renderType:(unsigned long long)type cornerRadius:(double)radius;
- (void)configureWithMediaItem:(id)item renderType:(unsigned long long)type cornerRadius:(double)radius insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)configureWithCommentInformModel:(id)model mediaItem:(id)item analyticsModule:(id)module userSession:(id)session;
- (void)configureWithText:(id)text analyticsModule:(id)module userSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didTapButtonWithType:(unsigned long long)type;
- (void)didTapActionableInsightsTipWithModel:(id)model;
- (void)didDismissActionableInsightsTipWithModel:(id)model;
- (BOOL)isHighlighted;
@end

#endif /* IGMediaOverlayView_h */
