//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDSLauncherConfig_h
#define IGDSLauncherConfig_h
@import Foundation;

#include "IGUserLauncherSet-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGDSLauncherConfig : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGUserLauncherSet> *_launcherSet;
  BOOL _isPrismDesignEnabled;
  BOOL _isPrismFontAvailable;
  BOOL _isPrismLocalFontAvailable;
  BOOL _isPrismEmojiHandlingEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isPrismDesignEnabled;
- (BOOL)shouldDownloadPrismFont;
- (void)setPrismFontAvailable;
- (BOOL)isPrismFontEnabled;
- (BOOL)isPrismFontAsyncRegisterEnabled;
- (BOOL)isPrismFontRegisterBarrierEnabled;
- (BOOL)isPrismLocalFontEnabled;
- (BOOL)isPrismLocalFontCacheEnabled;
- (BOOL)shouldRegsterPrismFont;
- (BOOL)isPrismFontEmojiCacheEnabled;
- (BOOL)isPrismColorsEnabled;
- (BOOL)isPrismLinksEnabled;
- (BOOL)isPrismNewBadgeEnabled;
- (BOOL)isPrismControlsEnabled;
- (BOOL)isPrismActivityTooltipEnabled;
- (BOOL)isPrismDefaultTooltipEnabled;
- (BOOL)isPrismMediaTagsEnabled;
- (BOOL)isPrismToastsEnabled;
- (BOOL)isPrismStepperEnabled;
- (BOOL)isPrismAlertDialogEnabled;
- (BOOL)isPrismAvatarRingEnabled;
- (BOOL)isPrismFormFieldEnabled;
- (BOOL)isPrismInAppNotificationEnabled;
- (BOOL)isPrismContextMenuEnabled;
- (int)isPrismButtonEnabledWithDesignType;
- (int)isPrismNavButtonEnabledWithDesignType;
- (BOOL)isPrismDirectSharePrimaryButtonWithControlColor;
- (BOOL)isPrismProfileMainFollowButtonEnabled;
- (int)isPrismSegmentedTabsEnabledWithDesignType;
- (int)prismCarouselInactiveDotColorType;
- (int)prismCarouselActiveDotColorType;
- (BOOL)isSearchBarClearButtonFixEnabled;
- (BOOL)isShadowPathEnabled;
- (BOOL)isIGDirectBottomActionDeprecationEnabled;
- (BOOL)isModernFollowButtonEnabled;
- (BOOL)isDesignTokensEnabled;
- (BOOL)isPrismEmojiHandlingEnabled;
- (BOOL)isPrismStorySuggestedUserUnitEnabled;
- (BOOL)isPrismTabBarIconOverrideEnabled;
- (BOOL)isPrismFullscreenMediaCornerRadiusEnabled;
- (BOOL)isPrismDiscoveryMapEnabled;
- (BOOL)isIGBPrismEnabled;
@end

#endif /* IGDSLauncherConfig_h */