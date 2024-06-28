//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectHscrollXMASingleItemView_h
#define IGDirectHscrollXMASingleItemView_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectHorizontalScrollPreviewIconView.h"
#include "IGDirectHscrollXMACTAButton.h"
#include "IGDirectHscrollXMAMessageSingleItemViewModel.h"
#include "IGDirectXMADefaultPreviewView.h"
#include "IGImageProgressViewDelegate-Protocol.h"
#include "IGVideoIndicatorView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGAnimatedImageView, IGBlurredImageView, IGDirectMessageBubbleView, IGDirectReshareMessageFooterView, IGDirectReshareMessageHeaderView, IGDirectReshareMessageMediaView, IGDirectXMAPrivateMediaOverlayView, IGImageProgressView, IGMediaOverlayIconAndTextView, IGStackLayout, IGStoryFacepileView, NSString, UIImageView, UITapGestureRecognizer, UIView;
@protocol IGDirectHscrollXMASingleItemViewDelegate;

@interface IGDirectHscrollXMASingleItemView : UICollectionViewCell<IGImageProgressViewDelegate, UIGestureRecognizerDelegate> {
  /* instance variables */
  IGDirectHscrollXMAMessageSingleItemViewModel *_itemViewModel;
  UIView *_messageContentWrapperView;
  IGImageProgressView *_previewImageView;
  IGDirectReshareMessageHeaderView *_headerView;
  IGAnimatedImageView *_animatedImageView;
  IGStoryFacepileView *_previewImageViewOverlayFacepile;
  IGDirectXMADefaultPreviewView *_defaultPreviewView;
  IGBlurredImageView *_blurredImageView;
  IGMediaOverlayIconAndTextView *_overlayView;
  IGDirectXMAPrivateMediaOverlayView *_privateMediaOverlayView;
  UIImageView *_contentIndicatorView;
  IGDirectHorizontalScrollPreviewIconView *_previewIconView;
  IGVideoIndicatorView *_videoIndicatorView;
  IGDirectReshareMessageMediaView *_gridView;
  IGDirectReshareMessageFooterView *_xmaFooterView;
  IGDirectHscrollXMACTAButton *_firstCTAButtonView;
  IGDirectHscrollXMACTAButton *_secondCTAButtonView;
  IGDirectHscrollXMACTAButton *_thirdCTAButtonView;
  IGStackLayout *_ctaButtonsStackLayout;
  UIView *_fadeForegroundView;
  UITapGestureRecognizer *_tapGesture;
  UITapGestureRecognizer *_firstCTATapGesture;
  UITapGestureRecognizer *_secondCTATapGesture;
  UITapGestureRecognizer *_thirdCTATapGesture;
  UITapGestureRecognizer *_playPauseButtonTapGesture;
  IGDirectMessageBubbleView *_messageContentView;
}

@property (weak, nonatomic) NSObject<IGDirectHscrollXMASingleItemViewDelegate> *delegate;
@property (nonatomic) double playPauseButtonProgress;
@property (nonatomic) BOOL playPauseButtonIsPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_didTapOnView;
- (void)_didTapCTAButton:(id)ctabutton;
- (void)_didTapPlayPauseButton:(id)button;
- (void)progressImageView:(id)view didUpdateLoadingState:(id)state;
- (void)progressImageView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)progressImageView:(id)view didFailLoadWithError:(id)error networkRequestSummary:(id)summary;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
@end

#endif /* IGDirectHscrollXMASingleItemView_h */
