//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBPayMerchantServicesViewConfig_h
#define IGFBPayMerchantServicesViewConfig_h
@import Foundation;

#include "FBPayBusinessViewConfiguring-Protocol.h"

@class IGUserSession, NSString;

@interface IGFBPayMerchantServicesViewConfig : NSObject<FBPayBusinessViewConfiguring> {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)defaultRowHeight;
- (double)summaryAndTotalFooterViewInsetRight;
- (BOOL)showDividerLineAboveTotalRow;
- (id)backgroundColor;
- (id)headerBackgroundColor;
- (id)feSelectorBackgroundColor;
- (id)iconErrorColor;
- (id)separatorColor;
- (id)radioButtonSelectedColor;
- (id)defaultTextColor;
- (id)errorTextColor;
- (id)warningsTextColor;
- (id)postitiveTextColor;
- (id)linkColor;
- (id)buttonFontWithSize:(double)size;
- (id)subtitleFontWithSize:(double)size;
- (id)titleFontWithSize:(double)size;
- (id)linkFontWithSize:(double)size;
- (id)navigationBackgroundColor;
- (id)navigationHeaderTitleTextColor;
- (id)navigationRightBarButtonBackground;
- (id)navigationSelectedBackgroundColor;
- (id)navigationTextSelectedColor;
- (id)secondaryTextColor;
- (id)disabledTextColor;
- (id)navigationBackComponentWithBack:(id /* block */)back;
- (id)businessCenterCellTitleTextColor;
- (id)businessCenterCellSubtitleTextColor;
- (id)mediumFontWithSize:(double)size;
- (id)payoutStatusSuccessColor;
- (id)payoutStatusFailedColor;
- (id)payoutStatusWarningColor;
- (id)payoutStatusWarningTextColor;
- (id)payoutStatusDefaultColor;
- (id)payoutStatusDefaultTextColor;
- (id)payoutStatusFailedTextColor;
- (id)payoutStatusSuccessTextColor;
- (id)headerInfoViewTitleFont;
- (id)headerInfoViewSubtitleFont;
- (id)headerInfoViewShortDescriptionFont;
- (id)headerInfoViewLongDescriptionFont;
- (double)sectionTitleFontSize;
- (double)summaryRowTextSize;
- (double)transactionInfoFontSize;
- (BOOL)showDisclosureIndicatorOnEarningsCellForPayoutDetails;
- (BOOL)shouldNotificationUseFlatStyle;
- (id)notificationCTADefaultBackgroundColor;
- (id)notificationCTADefaultTextColor;
- (id)notificationCTAUrgentBackgroundColor;
- (id)notificationCTAUrgentTextColor;
- (double)linkFontSize;
- (id)transactionFilterApplyButtonBackground;
- (id)settingsButtonBackgroundColor;
- (id)settingsButtonTextColor;
- (id)settingsDescriptionTextColor;
- (id)settingsTipsBackgroundColor;
- (id)dialogActionButtonBackgroundColor;
- (id)dialogActionButtonTextColor;
- (id)dialogCancelButtonBackgroundColor;
- (id)dialogCancelButtonTextColor;
- (id)radioButtonBorderColor;
- (id)timelineEventSuccessColor;
- (id)timelineEventUnknownColor;
- (id)timelineEventWarningColor;
- (id)timelineEventErrorColor;
- (id)loadingView;
- (id)createNetworkImageViewWithShouldBackgroundDecode:(BOOL)decode shouldUseProgressiveJPEG:(BOOL)jpeg;
- (void)fetchNetworkImageForView:(id)view urlString:(id)string;
- (void)fetchFBPayBusinessIcon:(long long)icon successCallback:(id /* block */)callback;
- (id)urlForRemoteAsset:(long long)asset;
- (BOOL)isDarkMode;
@end

#endif /* IGFBPayMerchantServicesViewConfig_h */