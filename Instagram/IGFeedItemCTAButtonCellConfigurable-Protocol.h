//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemCTAButtonCellConfigurable_Protocol_h
#define IGFeedItemCTAButtonCellConfigurable_Protocol_h
@import Foundation;

@protocol IGFeedItemCTAButtonCellConfigurable <NSObject, IGFeedSectionCTAPerformUpdateListener, IGFeedSectionComponentUpdateListener>

@property (nonatomic, retain) IGMedia *media;
@property (nonatomic) unsigned long long accessoryViewType;
@property (nonatomic, weak) NSObject<IGFeedItemCTAButtonCellConfigurableDelegate> *delegate;
@property (nonatomic, weak) NSObject<IGFeedItemLoggingProviderDelegate> *loggingDelegate;
@property (nonatomic, retain) UIColor *customizableBackgroundColor;
@property (nonatomic) BOOL isShownInDarkTheme;
@property (nonatomic, retain) NSNumber *darkModePreHighlightColorScheme;
@property (nonatomic, retain) NSNumber *lightModePreHighlightColorScheme;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *destinationText;
@property (nonatomic) BOOL showSpinner;

/* class methods */
+ (double)heightWithUserSession:(id)session;
+ (double)heightWithUserSession:(id)session;
/* instance methods */
- (void)configureWithMedia:(id)media cellViewModel:(id)model feedConfiguration:(id)configuration cellDelegate:(id)delegate loggingDelegate:(id)delegate actionCellState:(id)state pageCellState:(id)state enableLeftAccessory:(BOOL)accessory rightAccessoryPosition:(unsigned long long)position tappableAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets enableAutomatedLogging:(BOOL)logging navigationController:(id)controller session:(id)session;
- (void)configureWithMedia:(id)media cellViewModel:(id)model feedConfiguration:(id)configuration cellDelegate:(id)delegate loggingDelegate:(id)delegate actionCellState:(id)state pageCellState:(id)state enableLeftAccessory:(BOOL)accessory rightAccessoryPosition:(unsigned long long)position tappableAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets enableAutomatedLogging:(BOOL)logging navigationController:(id)controller session:(id)session;
- (void)configureWithTitle:(id)title backgroundColor:(id)color cellDelegate:(id)delegate;
- (void)configureWithTitle:(id)title backgroundColor:(id)color cellDelegate:(id)delegate;
- (void)configureWithAttributedTitle:(id)title backgroundColor:(id)color cellDelegate:(id)delegate;
- (void)configureWithAttributedTitle:(id)title backgroundColor:(id)color cellDelegate:(id)delegate;
- (void)configureWithNumOfLines:(long long)lines;
- (void)configureWithNumOfLines:(long long)lines;
- (void)setCustomizableButtonPrimaryTitle:(id)title;
- (void)setCustomizableButtonAttributedTitle:(id)title;
- (void)setCustomizableButtonHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)updateCustomizableButtonToCTAState:(unsigned long long)ctastate withIntent:(id)intent animated:(BOOL)animated;
- (void)updateCustomizableButtonToCTAState:(unsigned long long)ctastate withIntent:(id)intent animated:(BOOL)animated;
- (void)updateButtonWithPostItem:(id)item media:(id)media;
- (void)updateButtonWithPostItem:(id)item media:(id)media;
- (void)updateDestinationAdText:(id)text accessoryColor:(id)color;
- (void)progressivelyUpdateButtonStyleFromPostItem:(id)item toPostItem:(id)item progressPercentage:(double)percentage;
- (void)progressivelyUpdateButtonStyleFromPostItem:(id)item toPostItem:(id)item progressPercentage:(double)percentage;
- (void)progressCustomizableButtonCTAStateWithIntent:(id)intent;
- (void)progressCustomizableButtonCTAStateWithIntent:(id)intent;
- (void)updateForVisibleDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)updateForVisibleDisplayRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)configureWithTitleColor:(id)color rightAccessoryButtonColor:(id)color;
- (void)configureWithTitleColor:(id)color rightAccessoryButtonColor:(id)color;
@end

#endif /* IGFeedItemCTAButtonCellConfigurable_Protocol_h */
