//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallEndOverlayView_h
#define IGVideoCallEndOverlayView_h
@import Foundation;

#include "UIView.h"
#include "FOAPostCallRatingView.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGVideoCallEndViewModel.h"

@class IGCoreTextView, IGImageView, IGTextButton, NSArray, NSString, UIButton, UILabel, UIView, UIVisualEffectView;
@protocol IGVideoCallEndOverlayViewDelegate;

@interface IGVideoCallEndOverlayView : UIView<IGCoreTextLinkHandler> {
  /* instance variables */
  NSObject<IGVideoCallEndOverlayViewDelegate> *_delegate;
  IGVideoCallEndViewModel *_callEndViewModel;
  UIView *_darkOverlay;
  UIVisualEffectView *_blurOverlay;
  UILabel *_endLabel;
  UILabel *_privacyStatementLabel;
  IGCoreTextView *_privacyPolicyText;
  UILabel *_durationLabel;
  UIButton *_closeButton;
  BOOL _useBinaryRating;
  BOOL _eCFUIUnificationEnabled;
  UIView *_feedbackView;
  UILabel *_feedbackLabel;
  NSArray *_starButtons;
  UIView *_starRatingView;
  FOAPostCallRatingView *_foaPostCallRatingView;
  UIView *_promoView;
  IGImageView *_avatarMimicryPromoImageView;
  UILabel *_promoTitle;
  UILabel *_promoBody;
  IGTextButton *_promoButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate callEndViewModel:(id)model useBinaryRating:(BOOL)rating eCFUIUnificationEnabled:(BOOL)enabled;
- (void)layoutSubviews;
- (void)_closeButtonTapped:(id)tapped;
- (void)_starButtonTapped:(id)tapped;
- (void)_avatarMimicryPromoButtonTapped:(id)tapped;
- (void)postCallRatingView:(id)view didSubmitRating:(unsigned long long)rating;
- (void)postCallRatingViewDidHaveUserInteraction;
- (void)dismissPostCallRatingView;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGVideoCallEndOverlayView_h */