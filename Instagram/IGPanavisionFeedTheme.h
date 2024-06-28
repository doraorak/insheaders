//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPanavisionFeedTheme_h
#define IGPanavisionFeedTheme_h
@import Foundation;

#include "IGFeedTheme-Protocol.h"

@class NSString;

@interface IGPanavisionFeedTheme : NSObject<IGFeedTheme> {
  /* instance variables */
  BOOL _edr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)containerBackgroundColor;
- (id)backgroundColorForMedia:(id)media;
- (id)separatorColor;
- (long long)ufiButtonColorTypeForMedia:(id)media;
- (id)commentStyleConfigurationForMedia:(id)media;
- (id)likersStringStyleForMedia:(id)media;
- (id)viewCountStringStyleForMedia:(id)media;
- (id)socialContextStringStyleForMedia:(id)media;
- (id)primaryBoldLinkStringStyle:(long long)style;
- (id)secondaryBoldStringStyle:(long long)style;
- (id)bylineStringStyle:(long long)style;
- (id)brandedContentStringStyle;
- (id)coauthorStringStyle;
- (id)actionIconColor;
- (id)primaryTextColor;
- (id)primaryHighlightedTextColor;
- (id)secondaryTextColor;
- (id)internalOnlyColor;
- (id)dotSeparatorColor;
- (id)placeholderColor;
- (id)followButtonColorNotFollowing;
- (id)followButtonColorFollowing;
- (id)userBadgeColor;
- (id)sponsoredTextColorOverride;
- (id)hiddenReasonCellBackgroundColor;
- (id)hiddenReasonCellHeaderTextColor;
- (long long)activityIndicatorStyle;
- (id)activityIndicatorColor;
- (BOOL)useDarkBackgroundLoadingStyle;
- (double)feedItemBottomSpacing;
- (id)tombstoneBackgroundColor;
- (id)tombstoneButtonBackgroundColorForReportType:(long long)type;
- (id)ctaCustomizableBackgroundColor;
- (BOOL)supportCTAHighlight;
- (id)withEDR:(BOOL)edr;
@end

#endif /* IGPanavisionFeedTheme_h */
