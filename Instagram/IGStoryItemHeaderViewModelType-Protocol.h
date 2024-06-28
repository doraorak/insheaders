//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryItemHeaderViewModelType_Protocol_h
#define IGStoryItemHeaderViewModelType_Protocol_h
@import Foundation;

@protocol IGStoryItemHeaderViewModelType <NSObject>

@property (nonatomic, readonly) NSObject<IGStoryOwnerType> *owner;
@property (nonatomic, readonly) IGUser *user;
@property (nonatomic, readonly) unsigned long long ownerAttributionSize;
@property (nonatomic, readonly) IGStoryItemHeaderBadgeSpec *badgeSpec;
@property (nonatomic, readonly) BOOL enableTapOnOwnerImage;
@property (nonatomic, readonly) BOOL hideHeaderAvatar;
@property (nonatomic, readonly) BOOL disableTapAnimation;
@property (nonatomic, readonly) NSString *topLineText;
@property (nonatomic, readonly) NSAttributedString *attributedTopLineText;
@property (nonatomic, readonly) BOOL displayTopLineVerifiedBadge;
@property (nonatomic, readonly) BOOL enableTapOnTopLine;
@property (nonatomic, readonly) IGStoryViewerCoverItemModel *reelCoverModel;
@property (nonatomic, readonly) NSString *expandedTitleText;
@property (nonatomic, readonly) IGStoryFullscreenDualHeaderTitleViewModel *dualHeaderTitleViewModel;
@property (nonatomic, readonly) BOOL displayBottomLineVerifiedBadge;
@property (nonatomic, readonly) NSString *timeText;
@property (nonatomic, readonly) NSString *timeAccessibilityText;
@property (nonatomic, readonly) NSArray *brandedContentSponsors;
@property (nonatomic, readonly) IGCreativeConfig *creativeConfig;
@property (nonatomic, readonly) IGStoryCreateModeAttributionModel *createModeAttribution;
@property (nonatomic, readonly) NSArray *tapModels;
@property (nonatomic, readonly) BOOL showEmptyStoryBadge;
@property (nonatomic, readonly) BOOL showActiveIndicator;
@property (nonatomic, readonly) BOOL showAudienceButton;
@property (nonatomic, readonly) unsigned long long audienceButtonStyle;
@property (nonatomic, readonly) NSString *audienceButtonString;
@property (nonatomic, readonly) UIColor *audienceButtonColor;
@property (nonatomic, readonly) BOOL showMoreOptionsButton;
@property (nonatomic, readonly) BOOL showCloseButton;
@property (nonatomic, readonly) BOOL showFanClubAnimation;
@property (nonatomic, readonly) BOOL enlargeTitleTapTarget;
@property (nonatomic, readonly) BOOL canShowFanClubAnimationAgain;
@property (nonatomic, readonly) BOOL canShowOpalInfo;
@property (nonatomic, readonly) IGUser *resharedStoryMentionAuthor;
@property (nonatomic, readonly) BOOL isRollCallStory;
@property (nonatomic, readonly) NSArray *rollCallFacepileUsers;
@property (nonatomic, readonly) BOOL isPartnershipAdUsingDualHeaderAnd;
@property (nonatomic, readonly) IGShoppingConsumptionFeedItemLogger *shoppingFeedItemLogger;
@property (nonatomic, readonly) NSString *mediaId;
@property (nonatomic, readonly) NSString *finalDestinationModuleForNavigation;
@property (nonatomic, readonly) IGStoryItemHeaderMultiAuthorCarouselAdConfig *multiAuthorCarouselAdConfig;
@property (nonatomic, readonly) BOOL isSuggestedFriendInTray;
@property (nonatomic, readonly) BOOL isSuggestedAddYours;
@property (nonatomic, readonly) BOOL edr;
@property (nonatomic, readonly) BOOL edr;
@property (nonatomic, readonly) BOOL showProfileAsCoverImage;

/* instance methods */
- (BOOL)isEDR;
- (BOOL)isEDR;
@end

#endif /* IGStoryItemHeaderViewModelType_Protocol_h */
