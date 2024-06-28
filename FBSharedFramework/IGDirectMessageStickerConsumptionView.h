//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageStickerConsumptionView_h
#define IGDirectMessageStickerConsumptionView_h
@import Foundation;

#include "UIView.h"
#include "IGActionableConfirmationToastPresenter.h"
#include "IGAlertHUDHandling-Protocol.h"
#include "IGDirectOutgoingUpdateListener-Protocol.h"
#include "IGDirectPublishedThread.h"
#include "IGJoinChatStickerBackgroundJoinConsumptionModel.h"
#include "IGJoinChatStickerConsumptionModel.h"
#include "IGPartialModalSheetViewController.h"
#include "IGUserSession.h"

@class NSString, UIActivityIndicatorView, UILabel, UIView;
@protocol IGQPTooltipDisplayDelegate;

@interface IGDirectMessageStickerConsumptionView : UIView<IGDirectOutgoingUpdateListener> {
  /* instance variables */
  UIView *_bottomJoinButtonConsumptionView;
  UIView *_bottomJoinButtonConsumptionLabelBackgroundView;
  UILabel *_bottomJoinButtonConsumptionLabel;
  IGJoinChatStickerConsumptionModel *_consumptionModel;
  IGJoinChatStickerBackgroundJoinConsumptionModel *_joinButtonModel;
  IGUserSession *_userSession;
  IGDirectPublishedThread *_thread;
  NSObject<IGAlertHUDHandling> *_loadingHUD;
  IGDirectPublishedThread *_cachedThread;
  BOOL _shouldRemoveThreadFromMemoryCache;
  IGPartialModalSheetViewController *_partialSheetViewController;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tapOverlayFrame;
  UIActivityIndicatorView *_spinner;
  IGActionableConfirmationToastPresenter *_toastPresenter;
  NSObject<IGQPTooltipDisplayDelegate> *_tooltipDisplayDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initForConsumptionWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame tapInfo:(struct IGOverlayViewTapInfo { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; long long x3; double x4; double x5; struct CGSize { double x0; double x1; } x6; struct CGPoint { double x0; double x1; } x7; double x8; })info consumptionModel:(id)model userSession:(id)session;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)removeFromSuperview;
- (void)directPublicChatJoinNUXVCDidTapJoinNUXButton:(id)nuxbutton;
- (void)directPublicChatJoinNUXVCDidTapBackButton:(id)button;
- (void)directMessageOutgoingUpdateDidSucceed:(id)succeed;
- (void)directThreadOutgoingUpdateDidSucceed:(id)succeed;
- (void)directMessageOutgoingUpdate:(id)update didFailWithError:(id)error;
- (void)directThreadOutgoingUpdate:(id)update didFailWithError:(id)error;
@end

#endif /* IGDirectMessageStickerConsumptionView_h */