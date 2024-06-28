//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCountdownStickerView_h
#define IGCountdownStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGConstrainedZPositionStickerViewType-Protocol.h"
#include "IGCountdownStickerAttributionView.h"
#include "IGCountdownStickerTimeView.h"
#include "IGEditableStickerViewType-Protocol.h"
#include "IGGradientView.h"
#include "IGImageView.h"
#include "IGSingleStickerInstanceEnforcedViewType-Protocol.h"
#include "IGSpecialBurnedInContentStickerViewType-Protocol.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryStickerDeletable-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGTapButton.h"
#include "IGTextView.h"
#include "IGUser.h"
#include "IGValidatableStickerViewType-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSArray, NSDate, NSString, UIColor, UITapGestureRecognizer, UIView;
@protocol IGCountdownStickerViewConsumptionDelegate, IGCountdownStickerViewDelegate;

@interface IGCountdownStickerView : UIView<UITextViewDelegate, IGConstrainedSizeStickerViewType, IGStoryStickerDeletable, IGStickerViewType, IGSpecialBurnedInContentStickerViewType, IGEditableStickerViewType, IGValidatableStickerViewType, IGSingleStickerInstanceEnforcedViewType, IGConstrainedZPositionStickerViewType> {
  /* instance variables */
  IGGradientView *_gradientView;
  IGTextView *_nameTextView;
  IGCountdownStickerTimeView *_countdownTimeView;
  IGCountdownStickerAttributionView *_attributionView;
  UITapGestureRecognizer *_countdownTapGesture;
  IGTapButton *_rightArrowButton;
  BOOL _hasInputAccessoryView;
  BOOL _isViewerCountdownOwner;
  BOOL _isViewerFollowing;
  IGImageView *_backgroundImageView;
  BOOL _useBrandRefreshForGlobalScripts;
  UITapGestureRecognizer *_tapProtector;
  BOOL _usePrismColors;
  NSObject<IGCountdownStickerViewConsumptionDelegate> *_consumptionDelegate;
  unsigned long long _backgroundColor_creation_only;
  UIColor *_numberColor;
  UIColor *_legibleColor;
  UIColor *_timeDigitCardColor;
}

@property (weak, nonatomic) NSObject<IGCountdownStickerViewDelegate> *delegate;
@property (copy, nonatomic) NSString *pk;
@property (retain, nonatomic) NSDate *countdownDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) IGUser *attributionUser;
@property (retain, nonatomic) NSArray *backgroundColors;
@property (nonatomic) BOOL editable;
@property (readonly, nonatomic) BOOL isPublished;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) BOOL followingEnabled;
@property (retain, nonatomic) NSString *backgroundImageUrl;
@property (retain, nonatomic) NSString *suggestionId;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } tooltipPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (nonatomic) BOOL isNonDeletable;
@property (readonly, nonatomic) unsigned long long editableStickerType;
@property (readonly, nonatomic) long long zIndexConstraint;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initCreationViewUsingBrandRefreshForGlobalScripts:(BOOL)scripts usePrismColors:(BOOL)colors;
- (id)initCreationViewWithConsumptionModelTemplate:(id)template useBrandRefreshForGlobalScripts:(BOOL)scripts usePrismColors:(BOOL)colors;
- (id)initConsumptionViewWithConsumptionModel:(id)model useBrandRefreshForGlobalScripts:(BOOL)scripts usePrismColors:(BOOL)colors;
- (void)layoutSubviews;
- (void)paste:(id)paste;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)textViewShouldBeginEditing:(id)editing;
- (void)textViewDidChange:(id)change;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidEndEditing:(id)editing;
- (void)_didTapCountdown;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)stickerPinningDisabled;
- (BOOL)isDraftSupported;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (BOOL)isCurrentlyEditableAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)updateContentForBurnIn:(BOOL)in;
- (void)restoreContentFromBurnIn;
- (BOOL)isValidSticker;
- (unsigned long long)stickerSingleInstanceEnforcementType;
- (void)countdownStickerTimeViewDidReachEndDate:(id)date;
- (id)outlinePath;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (BOOL)isEditable;
@end

#endif /* IGCountdownStickerView_h */
