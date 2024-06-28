//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFanClubGuidanceFullScreenViewerViewController_h
#define IGFanClubGuidanceFullScreenViewerViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAssetPlayerViewDelegate-Protocol.h"
#include "IGFanClubCreatorSettingsRecommendationNavigationManager-Protocol.h"
#include "IGFanClubCreatorSettingsRecommendationNavigationManagerDelegate-Protocol.h"

@class IGAssetPlayerView, IGBottomButtonsView, IGFanClubNextStepsRecommendation, IGImageView, IGTapButton, IGUserSession, NSString, UILabel;

@interface IGFanClubGuidanceFullScreenViewerViewController : IGViewController<IGAssetPlayerViewDelegate, IGFanClubCreatorSettingsRecommendationNavigationManagerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_origin;
  IGFanClubNextStepsRecommendation *_recommendation;
  IGAssetPlayerView *_videoPlayerView;
  UILabel *_titleLabel;
  UILabel *_descriptionLabel;
  IGBottomButtonsView *_ctaButton;
  IGTapButton *_dismissButton;
  IGImageView *_videoPlaceholder;
  NSObject<IGFanClubCreatorSettingsRecommendationNavigationManager> *_fanClubRecommendationNavigationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session origin:(id)origin analyticsModule:(id)module recommendation:(id)recommendation videoURL:(id)url;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (void)_didTapDismissButton;
- (void)assetPlayerViewAssetLoaded:(id)loaded;
- (void)assetPlayerViewPlayStateDidChange:(id)change;
- (void)assetPlayerView:(id)view didPlayToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)assetPlayerViewDidPlayToEnd:(id)end;
- (void)assetPlayerView:(id)view effectivePlaybackRateDidChange:(double)change;
- (void)assetPlayerView:(id)view readyToSyncAndPlay:(BOOL)play;
- (void)recommendationNavigationManagerDidCompleteForRecommendationType:(long long)type;
- (void)recommendationNavigationManagerDidDismissStoryCreation:(BOOL)creation;
@end

#endif /* IGFanClubGuidanceFullScreenViewerViewController_h */
