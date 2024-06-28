//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABLoggingEventMatcher_h
#define IABLoggingEventMatcher_h
@import Foundation;

@interface IABLoggingEventMatcher : NSObject
/* class methods */
+ (id)match:(id)match browserLaunch:(id /* block */)launch browserClose:(id /* block */)close landingPageStarted:(id /* block */)started landingPageInteractive:(id /* block */)interactive landingPageFinished:(id /* block */)finished landingPageViewEnded:(id /* block */)ended navigationDidEnd:(id /* block */)end externalAppOpened:(id /* block */)opened appStoreSurfaceOpened:(id /* block */)opened copyLink:(id /* block */)link openMenu:(id /* block */)menu openShare:(id /* block */)share share:(id /* block */)share reportStart:(id /* block */)start reportSubmit:(id /* block */)submit browserRefresh:(id /* block */)refresh browserHistoryUx:(id /* block */)ux saveLink:(id /* block */)link viewSavedLinks:(id /* block */)links reactivatePixels:(id /* block */)pixels dropPixels:(id /* block */)pixels mgToolbarSendAsMessageImpression:(id /* block */)impression mgToolbarSendAsMessageClick:(id /* block */)click bondiInteraction:(id /* block */)interaction pCM:(id /* block */)cm applePCMClick:(id /* block */)pcmclick ratingAndReviewBannerHide:(id /* block */)hide ratingAndReviewBannerImpression:(id /* block */)impression ratingAndReviewBannerTimeSpent:(id /* block */)spent ratingAndReviewBannerClick:(id /* block */)click preferredBusinessesIABInteraction:(id /* block */)iabinteraction cardScannerInteraction:(id /* block */)interaction becomeNonViewable:(id /* block */)viewable becomeViewable:(id /* block */)viewable changeViewMode:(id /* block */)mode iABUnifiedEvent:(id /* block */)event screenshotImpression:(id /* block */)impression;
@end

#endif /* IABLoggingEventMatcher_h */