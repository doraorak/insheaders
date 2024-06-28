//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPostItemProtocol_Protocol_h
#define IGPostItemProtocol_Protocol_h
@import Foundation;

@protocol IGPostItemProtocol <NSObject, NSCoding, NSCopying, IGContentGateableMediaItem, IGFeedTagsProvider, IGMediaIdentityProvider, IGListDiffable, IGPhotosRenderedTracking>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) IGPhoto *photo;
@property (readonly, nonatomic) IGVideo *video;
@property (readonly, nonatomic) IGAPINativeInfoCard *infoCardModel;
@property (readonly, nonatomic) IGAPIShowreelPayload *urpDataModel;
@property (readonly, nonatomic) IGAPIUrpCardTransformation *urpCardTransformation;
@property (readonly, nonatomic) IGAudioMusicTrack *audio;
@property (readonly, nonatomic) IGUser *user;
@property (readonly, nonatomic) IGFBUserTagGroup *fbUserTags;
@property (readonly, nonatomic) IGUsertagGroup *userTags;
@property (readonly, nonatomic) IGProductItemTagGroup *productItemTags;
@property (readonly, nonatomic) NSArray *productSuggestions;
@property (readonly, nonatomic) IGAPIProductDetailsProductItemDict *prefetchedProductItem;
@property (readonly, nonatomic) NSArray *featuredProducts;
@property (readonly, copy, nonatomic) NSString *actionText;
@property (readonly, copy, nonatomic) NSArray *secondaryActionTextList;
@property (readonly, nonatomic) BOOL isMarqueeEnabledForSecondaryText;
@property (readonly, nonatomic) IGAPICommentDict *headline;
@property (readonly, nonatomic) IGDate *takenAtDate;
@property (readonly, copy, nonatomic) NSString *dynamicItemId;
@property (readonly, nonatomic) IGUser *dynamicCreator;
@property (readonly, copy, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) IGPhoto *igtvFirstFramePhoto;
@property (readonly, nonatomic) NSString *shopRoutingUserId;
@property (readonly, nonatomic) UIColor *dominantColor;
@property (readonly, nonatomic) UIColor *originalDominantColor;
@property (readonly, nonatomic) IGAPIFeedProductCollectionTagDict *productCollectionTag;
@property (readonly, copy) IGAPICTABarInfo *ctaButtonInfo;
@property (nonatomic) BOOL isPillHidden;
@property (nonatomic) BOOL isTagHidden;
@property (readonly, nonatomic) IGAdTag *adTag;
@property (readonly) IGAPIReelsTappableTooltip *sundialTappableTooltipInfo;
@property (readonly) NSObject<FBBoxedInteger> *adProductDestination;
@property (readonly) IGAPIHighlightsAttributionDict *highlightsInfoModel;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) IGUser *previousSubmitter;
@property (readonly, nonatomic) IGAPICopyrightAttributionInfo *copyrightAttribution;
@property (nonatomic) BOOL hasLiked;
@property (nonatomic) unsigned long long likeCount;
@property (retain, nonatomic) IGGating *gating;
@property (nonatomic) BOOL hasSensitiveMediaRevealed;
@property (readonly, nonatomic) NSString *mediaId;
@property (retain, nonatomic) IGAPIMediaOverlayPayloadSchema *mediaOverlayInfo;
@property (retain, nonatomic) IGAPISharingFrictionInfo *sharingFrictionInfo;
@property (retain, nonatomic) IGAPISeeMoreCardDict *seeMoreCardInfo;
@property (nonatomic) double mediaLoadingProgress;
@property (retain, nonatomic) IGAPIIGTVSeriesInfo *igtvSeriesInfo;
@property (readonly, nonatomic) IGDirectResponseInfo *directResponseInfo;
@property (readonly, nonatomic) IGMediaCollectionInfo *mediaCollectionInfo;
@property (readonly, nonatomic) IGUpcomingEvent *upcomingEvent;
@property (readonly, nonatomic) IGFundraiserTagGroup *fundraiserTags;
@property (readonly, nonatomic) IGAPIStandaloneFundraiserTag *fundraiserTag;
@property (readonly, nonatomic) IGAPIReelMediaBackground *reelMediaBackground;
@property (readonly, nonatomic) IGAPIReelMediaBackground *mediaBackground;
@property (readonly, nonatomic) IGAPIFeedShowcaseMedia *feedShowcaseMedia;

/* instance methods */
- (BOOL)hasTags;
- (long long)tagCount;
- (id)taggedDropsProductIds;
- (id)taggedProductIds;
- (id)taggedUserIds;
- (BOOL)isCheckoutEnabled;
- (id)merchantFromTaggedProducts;
- (BOOL)isShoppingItemFromInfluencer:(id)influencer;
- (id)productMerchantIds;
@end

#endif /* IGPostItemProtocol_Protocol_h */