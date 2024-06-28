//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryFullscreenSectionControllerProviding_Protocol_h
#define IGStoryFullscreenSectionControllerProviding_Protocol_h
@import Foundation;

@protocol IGStoryFullscreenSectionControllerProviding <IGStoryFullscreenControllerType>

@property (readonly, nonatomic) NSObject<IGStoryItemType><IGUnitItemInformationProviding> *currentStoryItem;
@property (readonly, nonatomic) IGStoryAdsManager *storyAdsManager;
@property (readonly, nonatomic) NSObject<IGStoryAdsCellControllerImplProtocol> *adsCellController;
@property (readonly, nonatomic) IGStoryCTAController *ctaController;
@property (retain, nonatomic) NSObject<IGStoryOverviewPresentationControllerProtocol> *storyOverviewPresentationController;
@property (nonatomic) BOOL bloksAppIsShowing;
@property (retain, nonatomic) NSDictionary *prefetchedLispyActionKeyToAsyncTask;
@property (readonly, nonatomic) long long currentItemIndex;
@property (readonly, nonatomic) long long totalNumberOfItems;
@property (retain, nonatomic) IGRapidFeedbackController *rapidFeedbackController;

/* instance methods */
- (void)advanceToNextItemWithNavigationAction:(long long)action;
- (void)rewindToPreviousItemWithNavigationAction:(long long)action;
- (id)viewerSessionId;
- (void)tryPrecheckFBEligibilities;
- (void)storyItemForceOpenReshare;
- (void)rewindIfCurrentSegmentIsHalfwayComplete;
- (void)didTapOnMoreButton;
- (void)tryReplayStoryItem;
@end

#endif /* IGStoryFullscreenSectionControllerProviding_Protocol_h */
