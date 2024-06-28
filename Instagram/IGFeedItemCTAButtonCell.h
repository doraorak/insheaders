//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemCTAButtonCell_h
#define IGFeedItemCTAButtonCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "FBGNVGenericClickMetadataProvider-Protocol.h"
#include "IGFeedItemCTAActionTitleView.h"
#include "IGFeedItemCTAButtonCellConfigurable-Protocol.h"
#include "IGFeedItemCTAButtonCellConfigurableDelegate-Protocol.h"
#include "IGFeedItemGestureReceiving-Protocol.h"
#include "IGFeedItemLoggingProviderDelegate-Protocol.h"
#include "IGFeedItemPageCellState.h"
#include "IGFeedViewGesturePriorityProviding-Protocol.h"
#include "IGPCMEventAttributionConforming-Protocol.h"
#include "IGRenderingLoggingProviding-Protocol.h"
#include "IGSponsoredInfoProviding-Protocol.h"

@class IGLeftAlignedFullWidthCTAButton, IGMedia, IGUserSession, NSArray, NSNumber, NSString, UIColor, UITapGestureRecognizer, UIView;

@interface IGFeedItemCTAButtonCell : UICollectionViewCell<FBGNVGenericClickMetadataProvider, IGFeedItemGestureReceiving, IGFeedItemCTAButtonCellConfigurable, IGRenderingLoggingProviding, IGPCMEventAttributionConforming, IGFeedViewGesturePriorityProviding> {
  /* instance variables */
  BOOL _enableAutomatedLogging;
  UIView *_eventAttributionViewOverlay;
  NSObject<IGSponsoredInfoProviding> *_sponsoredInfo;
  IGFeedItemCTAActionTitleView *_ctaActionTitleView;
  unsigned long long _ctaState;
  NSString *_mediaPK;
  BOOL _isOrganicCTACell;
  BOOL _hasIGBioProduct;
  BOOL _isSponsored;
  BOOL _isOpenCarouselCTACell;
  BOOL _isBwpAd;
  IGUserSession *_userSession;
  IGFeedItemPageCellState *_pageCellState;
  UITapGestureRecognizer *_tapGestureRecognizer;
  UIView *_ctaExpansionDebugOverlay;
  struct CGPoint { double x; double y; } _ctaTapPoint;
  BOOL _ctaVisible;
  BOOL _shouldShowMessagingAppIcon;
  UIView *_customizableButtonContainer;
  IGLeftAlignedFullWidthCTAButton *_customizableButton;
  unsigned long long _customizableButtonCTAState;
}

@property (copy, nonatomic) NSArray *accessibilityElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IGMedia *media;
@property (nonatomic) unsigned long long accessoryViewType;
@property (weak, nonatomic) NSObject<IGFeedItemCTAButtonCellConfigurableDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGFeedItemLoggingProviderDelegate> *loggingDelegate;
@property (retain, nonatomic) UIColor *customizableBackgroundColor;
@property (nonatomic) BOOL isShownInDarkTheme;
@property (retain, nonatomic) NSNumber *darkModePreHighlightColorScheme;
@property (retain, nonatomic) NSNumber *lightModePreHighlightColorScheme;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *destinationText;
@property (nonatomic) BOOL showSpinner;

/* class methods */
+ (double)heightWithUserSession:(id)session;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithNumOfLines:(long long)lines;
- (void)configureWithAttributedTitle:(id)title backgroundColor:(id)color cellDelegate:(id)delegate;
- (void)configureWithTitleColor:(id)color rightAccessoryButtonColor:(id)color;
- (void)configureWithTitle:(id)title backgroundColor:(id)color cellDelegate:(id)delegate;
- (void)configureWithMedia:(id)media cellViewModel:(id)model feedConfiguration:(id)configuration cellDelegate:(id)delegate loggingDelegate:(id)delegate actionCellState:(id)state pageCellState:(id)state enableLeftAccessory:(BOOL)accessory rightAccessoryPosition:(unsigned long long)position tappableAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets enableAutomatedLogging:(BOOL)logging navigationController:(id)controller session:(id)session;
- (void)updateButtonWithPostItem:(id)item media:(id)media;
- (void)insertEventAttributionViewOverlay:(id)overlay;
- (void)updateDestinationAdText:(id)text accessoryColor:(id)color;
- (void)progressivelyUpdateButtonStyleFromPostItem:(id)item toPostItem:(id)item progressPercentage:(double)percentage;
- (void)setCustomizableButtonPrimaryTitle:(id)title;
- (void)setCustomizableButtonAttributedTitle:(id)title;
- (void)progressCustomizableButtonCTAStateWithIntent:(id)intent;
- (void)updateCustomizableButtonToCTAState:(unsigned long long)ctastate withIntent:(id)intent animated:(BOOL)animated;
- (void)setCustomizableButtonHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)updateForVisibleDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)prepareForReuse;
- (void)_onCellPressed:(id)pressed;
- (void)_onCustomizableButtonPressed:(id)pressed event:(id)event;
- (void)_handleCTATap:(id)ctatap;
- (void)feedItemCTAActionTitleViewDidTapView:(id)view;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (id)renderedComponentLoggingInfo;
- (id)mediaPK;
- (BOOL)isViewSweepMemberPartOfAds;
- (id)contentMetadata;
- (void)updateCTAShouldShowSpinner:(BOOL)spinner withMediaId:(id)id;
- (void)refreshShoppingCTAWithMediaId:(id)id;
- (void)updateCellCTAState:(unsigned long long)ctastate withIntent:(id)intent animated:(BOOL)animated withMediaId:(id)id;
- (void)updateCTAButtonStateWithIntent:(id)intent withMediaId:(id)id;
- (void)updateCTAButtonVisibility:(BOOL)visibility animated:(BOOL)animated withMediaId:(id)id;
- (void)progressivelyUpdateButtonStyleFromPostItem:(id)item toPostItem:(id)item progressPercentage:(double)percentage withMediaId:(id)id;
- (void)mediaCollectionCellDidTapCustomizableButtonWithMediaId:(id)id;
- (void)didUpdateWithPostItem:(id)item andMedia:(id)media;
- (void)forwardTouchActionFrom:(id)from;
- (long long)gesturePriorityIndex;
- (BOOL)_isHorizonWorldIconicEntryPoint:(id)point;
@end

#endif /* IGFeedItemCTAButtonCell_h */