//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemInvalidation_h
#define IGFeedItemInvalidation_h
@import Foundation;

@interface IGFeedItemInvalidation : NSObject
/* class methods */
+ (void)dismissFeedItemWithPK:(id)pk withReason:(id)reason;
+ (void)dismissFeedItemWithPK:(id)pk;
+ (BOOL)isDismissFeedItemForPK:(id)pk;
+ (id)selectedReasonForDismissedFeedItemWithPK:(id)pk;
+ (BOOL)shouldSponsoredFeedItemDisplay:(id)display;
+ (BOOL)isFeedItemInvalid:(id)invalid sponsoredInfoProvider:(id)provider;
+ (BOOL)shouldFeedItemDisplayWithPK:(id)pk sponsoredInfoProvider:(id)provider;
+ (void)hideSpamFeedItemWithPK:(id)pk;
+ (void)hideInappropriateFeedItemWithPK:(id)pk;
+ (void)hideFalseInformationFeedItemWithPK:(id)pk;
+ (BOOL)isSpamReportedFeedItemForPK:(id)pk;
+ (BOOL)isInappropriateReportedFeedItemForPK:(id)pk;
+ (BOOL)isFalseInformationReportedFeedItemForPK:(id)pk;
+ (void)markFeedItemPKAsNotVisibleIfInvalid:(id)invalid;
+ (void)markFeedItemPKAsNotVisibleIfReported:(id)reported;
+ (void)undoFeedItemWithPK:(id)pk;
+ (void)undoAllFeedItems;
+ (BOOL)isReportedFeedItemForPk:(id)pk;
+ (void)markAllDismissedFeedItemsAsNotVisible;
+ (id)_dictionaryForDismissFeedItems;
+ (BOOL)isSponsoredFeedItemWaitingForHideReason:(id)reason sponsoredInfoProvider:(id)provider;
+ (id)reasonForInvalidSponsoredFeedItem:(id)item sponsoredInfoProvider:(id)provider;
+ (BOOL)_isAlreadyInstalledAppAds:(id)ads;
+ (BOOL)hasSelectedReasonForInvalidSponsoredFeedItem:(id)item sponsoredInfoProvider:(id)provider;
+ (id)_reasonForUserHidingSponsoredFeedItem:(id)item sponsoredInfoProvider:(id)provider;
+ (void)markSponsoredFeedItemAsNotVisibleIfInvalid:(id)invalid;
@end

#endif /* IGFeedItemInvalidation_h */
