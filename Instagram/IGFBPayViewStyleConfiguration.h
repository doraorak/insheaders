//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPayViewStyleConfiguration_h
#define IGFBPayViewStyleConfiguration_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGFBPayViewStyleConfiguration : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)identifier;
- (id)borderPersistentUIColor;
- (id)borderResponsiveUIColor;
- (id)appBrandingColor;
- (id)metaPayBrandingLogo;
- (id)metaPayBrandingLogoMed;
- (id)fbpayBrandingLogo;
- (id)fbpayLockLogo;
- (id)metaPayButtonLogo;
- (id)metaBrandingLogo;
- (id)photoSquareImage;
- (id)metaBrandingFooter;
- (id)oneTimeCheckoutBackButtonIcon;
- (id)fbpayLogoButtonBackgroundColor;
- (id)fbpayBrandingCTABackgroundColor;
- (id)fbpayBrandingCTATextColor;
- (id)elevatedBackgroundColor;
- (id)backgroundColor;
- (id)secondaryBackgroundColor;
- (id)accentColor;
- (id)accentDeemphasizedColor;
- (id)errorColor;
- (id)separatorColor;
- (id)linkColor;
- (id)primaryTextColor;
- (id)secondaryTextColor;
- (id)highlightTextColor;
- (id)disabledTextColor;
- (id)placeholderTextColor;
- (id)placeholderTextOnMediaColor;
- (id)deemphasizedButtonTextColor;
- (id)destructiveButtonTextColor;
- (id)primaryButtonColor;
- (id)secondaryButtonColor;
- (id)secondaryButtonPressedColor;
- (id)deemphasizedButtonBackgroundColor;
- (id)disabledButtonBackgroundColor;
- (id)primaryTextOnMedia;
- (id)primaryIconColor;
- (id)secondaryIconColor;
- (id)placeholderIconColor;
- (id)nullLabelColor;
- (id)footerButtonBackgroundColor;
- (id)footerButtonSeparatorColor;
- (id)footerButtonTextColor;
- (id)cardBackgroundColor;
- (id)mediaBorderColor;
- (id)emphasizedAction;
- (id)buttonTextOnColor;
- (id)successColor;
- (id)failureColor;
- (id)transparentOverlayColor;
- (id)glimmerBaseColor;
- (id)accordionPressedColor;
- (id)accordionBackgroundColor;
- (id)cellSelectionColor;
- (id)chevronColor;
- (id)buttonPressedColor;
- (id)buttonDisabledColor;
- (id)navigationBarItemColor;
- (id)learnMoreDescriptionColor;
- (id)productSummaryViewShadowColor;
- (BOOL)isDarkModeCurrentlyEnabled;
- (id)decorativeIconGreen;
- (id)regularFontWithSize:(double)size;
- (id)mediumFontWithSize:(double)size;
- (id)boldFontWithSize:(double)size;
- (id)semiboldFontWithSize:(double)size;
- (id)lightFontWithSize:(double)size;
- (id)inlineCellPrimaryLabelTitleFont;
- (id)inlineCellPrimaryLabelFont;
- (id)inlineCellPrimaryLabelFontEmphasized;
- (id)inlineCellSecondaryLabelFont;
- (id)inlineCellSecondaryLabelFontEmphasized;
- (id)inlineCellNullLabelFont;
- (id)headerFont;
- (id)learnMoreDescriptionFont;
- (id)rightBarButtonSaveFont;
- (double)primaryFontSize;
- (double)secondaryFontSize;
- (double)formHeaderFontSize;
- (double)secondaryFormHeaderFontSize;
- (id)shimmeringConfiguration;
- (id)webViewControllerWithURL:(id)url session:(id)session;
- (id)webControllerWithURLRequest:(id)urlrequest;
- (id)webControllerWithURL:(id)url;
- (void)openUrl:(id)url presentingVC:(id)vc;
- (id)bottomSheetControllerWithHostingVC:(id)vc;
- (void)configureNavigationBarWithIcon:(id)icon iconView:(id)view title:(id)title subtitle:(id)subtitle viewController:(id)controller;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeInsets;
- (double)editRemoveButtonTopPadding;
- (double)leftAccessoryViewLeftMarginWithZeroLeadingAndTrailingEdge;
- (double)leftAccessoryViewLeftMargin;
- (double)contextViewLeftMarginWithZeroLeadingAndTrailingEdge;
- (double)contextViewLeftMarginWithNoLeftAccessory;
- (double)contextViewLeftMargin;
- (double)formCellHeight;
- (double)formButtonHeight;
- (double)formLineSpacing;
- (id)formToggleCellFont;
- (id)formButtonCellFont;
- (double)formCellAccessorySize;
- (double)formCellAccessorySpacing;
- (double)inlineCellRightAccessoryMediumSize;
- (double)inlineCellRightAccessoryLargeSize;
- (double)radioButtonSize;
- (double)loadingAnimationButtonCornerRadius;
- (double)loadingAnimationButtonHeight;
- (double)learnMoreIconSize;
- (double)nuxBannerIconDimension;
- (id)loadingIndicatorView;
- (id)richTextView:(id)view horizontalAlignment:(long long)alignment;
- (void)showAlertViewFromController:(id)controller title:(id)title description:(id)description actions:(id)actions;
- (long long)alertViewSecondaryActionStyle;
- (id)proactiveCheckoutBannerViewWithViewModel:(id)model;
- (void)presentToastWithMessage:(id)message leftIcon:(long long)icon viewController:(id)controller;
- (id)createNetworkImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shouldBackgroundDecode:(BOOL)decode shouldUseProgressiveJPEG:(BOOL)jpeg;
- (id)createAndFetchNetworkImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shouldBackgroundDecode:(BOOL)decode shouldUseProgressiveJPEG:(BOOL)jpeg request:(id)request;
- (void)fetchNetworkImageForView:(id)view request:(id)request;
- (id)createWebImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)fetchWebImageForView:(id)view request:(id)request;
- (id)bannerViewWithViewModel:(id)model;
- (id)createRadioButtonWithSelectionState:(BOOL)state isDisabled:(BOOL)disabled;
- (double)checkboxSize;
- (id)checkboxLabelFont;
- (id)checkboxSubtitleLabelFont;
- (id)checkboxFilledColor;
- (id)checkboxBorderColor;
- (id)selectionsTableBorderColor;
- (void)playPaymentSuccessSound;
- (void)showLoadingViewInView:(id)view isPlatformSpecific:(BOOL)specific completion:(id /* block */)completion;
- (void)dismissLoadingViewInView:(id)view completion:(id /* block */)completion;
- (void)showLoadingErrorViewInView:(id)view retryBlock:(id /* block */)block dismissCompletion:(id /* block */)completion;
- (void)presentUserFacingError:(id)error hostingViewController:(id)controller primaryCTACompletion:(id /* block */)ctacompletion secondaryCTACompletion:(id /* block */)ctacompletion;
- (id)FBPayPopupDialogControllingWithTitle:(id)title subtitle:(id)subtitle;
- (void)registerSession:(id)session;
- (id)session;
- (BOOL)shouldUsePayPalAuth2;
- (void)loadIcon:(long long)icon variant:(long long)variant tintColor:(id)color size:(long long)size completion:(id /* block */)completion;
- (id)checkoutLearnMoreIcons;
- (void)registerImageDownloader:(id)downloader;
- (id)requestAccessToLocationServicesFromVC:(id)vc;
@end

#endif /* IGFBPayViewStyleConfiguration_h */
