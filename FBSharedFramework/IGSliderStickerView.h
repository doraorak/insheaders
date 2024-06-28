//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSliderStickerView_h
#define IGSliderStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGConstrainedZPositionStickerViewType-Protocol.h"
#include "IGEditableStickerViewType-Protocol.h"
#include "IGEmojiModel.h"
#include "IGEmojiSlider.h"
#include "IGProfilePictureImageView.h"
#include "IGSerializableV2-Protocol.h"
#include "IGStackableStickerViewType-Protocol.h"
#include "IGStickerViewBackendIdentifiableType-Protocol.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGSundialPostcapturePreviewSelectionBorderProtocol-Protocol.h"
#include "IGTextView.h"
#include "IGTooltipView.h"
#include "UITextViewDelegate-Protocol.h"

@class CAShapeLayer, NSNumber, NSString, UIColor, UILabel, UIView;
@protocol IGSliderStickerViewDelegate;

@interface IGSliderStickerView : UIView<UITextViewDelegate, IGSundialPostcapturePreviewSelectionBorderProtocol, IGConstrainedSizeStickerViewType, IGStickerViewType, IGEditableStickerViewType, IGConstrainedZPositionStickerViewType, IGStackableStickerViewType, IGStickerViewBackendIdentifiableType, IGSerializableV2> {
  /* instance variables */
  IGEmojiSlider *_slider;
  UIView *_borderView;
  UIView *_containerCardView;
  IGTextView *_textView;
  IGProfilePictureImageView *_voterProfilePictureView;
  UIView *_averageVoteView;
  long long _mode;
  NSNumber *_viewerVote;
  NSNumber *_averageVote;
  unsigned long long _voteCount;
  IGTooltipView *_averageVoteTooltip;
  BOOL _viewerCanVote;
  NSString *_sliderPk;
  BOOL _constrainStickerWithBoundingBox;
  UILabel *_emojiBalloonView;
  double _emojiBalloonXPosition;
  double _emojiBalloonScale;
  BOOL _usePrismColors;
  double _editingTransitionProgress;
}

@property (weak, nonatomic) NSObject<IGSliderStickerViewDelegate> *delegate;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *placeholderTextColor;
@property (retain, nonatomic) UIColor *cardBackgroundColor;
@property (retain, nonatomic) IGEmojiModel *emojiModel;
@property (nonatomic) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CAShapeLayer *previewSelectionBorder;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly, nonatomic) unsigned long long editableStickerType;
@property (readonly, nonatomic) long long zIndexConstraint;
@property (retain, nonatomic) NSNumber *stackedLayerIndex;
@property (retain, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) BOOL containsAudio;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initCreationViewUsePrismColors:(BOOL)colors;
- (id)initConsumptionViewWithModel:(id)model usePrismColors:(BOOL)colors;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)willMoveToSuperview:(id)superview;
- (void)emojiSliderDidBeginSliding:(id)sliding;
- (void)emojiSliderDidEndSliding:(id)sliding;
- (void)emojiSliderDidReceiveTapOnEmoji:(id)emoji;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidChange:(id)change;
- (void)_sliderValueChanged:(id)changed;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)stickerPinningDisabled;
- (BOOL)isCurrentlyEditableAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (void)showPreviewSelectionBorder;
- (void)hidePreviewSelectionBorder;
- (id)outlinePath;
- (id)copyWithUserSession:(id)session;
- (void)updateWithMetadata:(id)metadata;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (id)xpostingModel;
- (BOOL)isEditing;
@end

#endif /* IGSliderStickerView_h */
