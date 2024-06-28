//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSMBSupportStickerView_h
#define IGSMBSupportStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGAPISMBSupportStickerDict.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGConstrainedZPositionStickerViewType-Protocol.h"
#include "IGEditableStickerViewType-Protocol.h"
#include "IGGradientView.h"
#include "IGImageView.h"
#include "IGSMBSupportStickerBuyNowButtonView.h"
#include "IGSerializable-Protocol.h"
#include "IGSingleStickerInstanceEnforcedViewType-Protocol.h"
#include "IGStickerBundleContentViewLoadingDelegate-Protocol.h"
#include "IGStickerBundleContentViewType-Protocol.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryColorPaletteGradientWheel.h"
#include "IGStoryStickerExportModel.h"
#include "IGTextView.h"
#include "IGUserSession.h"
#include "UITextViewDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, UIColor, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol IGSMBSupportStickerViewDelegate;

@interface IGSMBSupportStickerView : UIView<UITextViewDelegate, IGConstrainedSizeStickerViewType, IGStickerViewType, IGStickerBundleContentViewType, IGSerializable, IGEditableStickerViewType, IGSingleStickerInstanceEnforcedViewType, IGConstrainedZPositionStickerViewType> {
  /* instance variables */
  IGGradientView *_gradientView;
  IGTextView *_titleTextView;
  IGImageView *_profilePictureImageView;
  UIView *_profilePictureBorderView;
  UIImageView *_serviceTypeImageView;
  UIView *_serviceTypeBorderView;
  IGGradientView *_gradientViewForImageView;
  UILabel *_subtitleLabel;
  IGSMBSupportStickerBuyNowButtonView *_buyNowButton;
  UILabel *_footerLabel;
  IGUserSession *_userSession;
  long long _stickerModelServiceType;
  BOOL _hasEditedTitle;
  BOOL _hasInputAccessoryView;
  BOOL _shouldHideTitleView;
  BOOL _useBrandRefreshColors;
  BOOL _useBrandRefreshForGlobalScripts;
  NSNumber *_originalSubtitleHeight;
  UITapGestureRecognizer *_tapProtector;
  NSString *_stickerPk;
  IGStoryColorPaletteGradientWheel *_colorWheel;
}

@property (weak, nonatomic) NSObject<IGSMBSupportStickerViewDelegate> *delegate;
@property (nonatomic) BOOL editable;
@property (retain, nonatomic) NSArray *backgroundColors;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (readonly, nonatomic) IGAPISMBSupportStickerDict *stickerDict;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (weak, nonatomic) NSObject<IGStickerBundleContentViewLoadingDelegate> *loadingDelegate;
@property (nonatomic) double playbackTime;
@property (readonly, nonatomic) unsigned long long editableStickerType;
@property (readonly, nonatomic) long long zIndexConstraint;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initCreationViewWithUserSession:(id)session stickerDict:(id)dict;
- (id)initCreationWithStickerDict:(id)dict useBrandRefreshForGlobalScripts:(BOOL)scripts;
- (id)initConsumptionWithStickerDict:(id)dict useBrandRefreshForGlobalScripts:(BOOL)scripts;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)willMoveToSuperview:(id)superview;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textViewDidChange:(id)change;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidEndEditing:(id)editing;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)numberOfStickers;
- (long long)selectedIndex;
- (void)selectStickerViewAtIndex:(long long)index;
- (id)currentStickerId;
- (BOOL)isUpsideDownableInteractiveSticker;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)stickerPinningDisabled;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (BOOL)isCurrentlyEditableAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (unsigned long long)stickerSingleInstanceEnforcementType;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (BOOL)isEditable;
@end

#endif /* IGSMBSupportStickerView_h */