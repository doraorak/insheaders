//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeftAlignedPrimaryCTAButton_h
#define IGLeftAlignedPrimaryCTAButton_h
@import Foundation;

#include "UIView.h"
#include "IGImmersiveLeftAlignedCTAButton.h"
#include "NSObject-Protocol.h"

@class IGAPICTABarInfo, IGShoppingDropsTimer, NSString, UIColor;
@protocol IGSundialCTAButtonDelegate;

@interface IGLeftAlignedPrimaryCTAButton : UIView<NSObject> {
  /* instance variables */
  IGImmersiveLeftAlignedCTAButton *_ctaButton;
  IGShoppingDropsTimer *_launchTimeEventTimer;
  IGShoppingDropsTimer *_fifteenMinutesEventTimer;
  IGAPICTABarInfo *_organicCTAViewModel;
  double _pushedDownScale;
}

@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGSundialCTAButtonDelegate> *delegate;
@property (nonatomic) BOOL enableAutomatedLogging;
@property (nonatomic) unsigned long long buttonState;
@property (copy, nonatomic) UIColor *filledInStateBackgroundColor;

/* class methods */
+ (double)preferredButtonHeight;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setButtonState:(unsigned long long)state animated:(BOOL)animated;
- (void)configureWithOrganicViewModel:(id)model isCarouselDefault:(BOOL)default carouselDefaultHighlightColor:(id)color;
- (void)configureWithAdsViewModel:(id)model;
- (void)setCTAButtonToTitle:(id)title toSubtitle:(id)subtitle;
- (void)setHighlightColorForIndex:(id)index;
- (void)configureInterfaceStyle:(long long)style;
- (void)setSecondaryTextActionListAndHighlightedFromColor:(id)color textList:(id)list toColor:(id)color fromTextColor:(id)color toTextColor:(id)color percent:(double)percent animated:(BOOL)animated;
- (void)setFilledInStateBackgroundFromColor:(id)color toColor:(id)color percent:(double)percent animated:(BOOL)animated;
- (void)setFilledInStateBackgroundColor:(id)color animated:(BOOL)animated;
- (void)_didTapCTAButton;
- (void)shoppingDropsTimerDidFire:(id)fire;
- (void)clearEventCTATimers;
@end

#endif /* IGLeftAlignedPrimaryCTAButton_h */
