//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryOverlayTapModelObject_h
#define IGStoryOverlayTapModelObject_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGAPIExploreShareableGridTappableData.h"
#include "IGAPIIGBioProductDict.h"
#include "IGAPILocationDict.h"
#include "IGAPIMediaVCRTappableData.h"
#include "IGAPIPollSticker.h"
#include "IGAPISMBSupportStickerDict.h"
#include "IGAPIStoryCountdownTappableData.h"
#include "IGAPIStoryGroupMentionTappableData.h"
#include "IGAPIStoryQuizDict.h"
#include "IGAPIStoryReactionStickerTappableData.h"
#include "IGAPIStorySliderStickerDict.h"
#include "IGAdCollectionProductOverlayTapModel.h"
#include "IGAdsAppStickerModel.h"
#include "IGAdsLeadGenCardStickerModel.h"
#include "IGAdsProfileCardLinkStickerModel.h"
#include "IGAppStickerConsumptionModel.h"
#include "IGAstrologyStickerModelType-Protocol.h"
#include "IGAvatarStickerTapModel.h"
#include "IGBadgesSupporterThankYouStickerModel.h"
#include "IGBarcelonaStoryReshareStickerModel.h"
#include "IGBeforeAndAfterStickerConsumptionModel.h"
#include "IGChannelChallengeStickerConsumptionModelType-Protocol.h"
#include "IGChannelPromptV2StickerModelType-Protocol.h"
#include "IGClickToMessagingFAQsStickerModel.h"
#include "IGElectionStickerModel.h"
#include "IGEventStickerTapModel.h"
#include "IGFBCommunityStickerModel.h"
#include "IGFBFundraiserStickerModel.h"
#include "IGFBGroupStickerModel.h"
#include "IGFBTagStickerModel.h"
#include "IGFeatureLinkingStickerTapModel.h"
#include "IGFeedPostStickerCTATapModel.h"
#include "IGFeedPostStickerTapModel.h"
#include "IGGuideStickerModel.h"
#include "IGHashtagModel.h"
#include "IGHighlightStickerTapModel.h"
#include "IGInstaPalStickerConsumptionModel.h"
#include "IGInternalStickerModel.h"
#include "IGJoinChatStickerConsumptionModel.h"
#include "IGKaraokeCaptionStickerModel.h"
#include "IGLeadGenFirstQuestionStickerModel.h"
#include "IGLinkStickerConsumptionModel.h"
#include "IGLinkStickerModel.h"
#include "IGLispyActionStickerModel.h"
#include "IGLiveBroadcastStickerModel.h"
#include "IGMultiProductStickerModel.h"
#include "IGMusicLyricsStickerTapModelObject.h"
#include "IGMusicPickStickerModel.h"
#include "IGMusicStickerTapModelObject.h"
#include "IGPhotoCreditStickerModelType-Protocol.h"
#include "IGPolaroidStickerModelType-Protocol.h"
#include "IGProductShareStickerModel.h"
#include "IGProductStickerModel.h"
#include "IGPromptStickerModel.h"
#include "IGQuestionAnswerStickerModel.h"
#include "IGResearchPollStickerModel.h"
#include "IGSavedCollectionStickerTapModel.h"
#include "IGSoundOnStickerModel.h"
#include "IGStoryFundraiserStickerModel.h"
#include "IGStoryNetegoShoppingSuggestionOverlayTapModel.h"
#include "IGStoryNetegoSundialSuggestionModel.h"
#include "IGStoryShoppingViewShopCTAOverlayTapModel.h"
#include "IGStoryUserPillTapModelObject.h"
#include "IGStoryUserTapModelObject.h"
#include "IGSubscriberPromoteStickerModel.h"
#include "IGTextStickerTapModel.h"
#include "IGUpcomingEventStickerTapModel.h"
#include "NSCoding-Protocol.h"

@class NSString;

@interface IGStoryOverlayTapModelObject : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  IGStoryUserTapModelObject *_user_userTapModelObject;
  IGStoryUserPillTapModelObject *_userPill_userPillTapModelObject;
  IGHashtagModel *_hashtag_hashtagModel;
  IGAPILocationDict *_location_apiLocationModel;
  IGProductStickerModel *_product_productStickerModel;
  IGMultiProductStickerModel *_products_multiProductStickerModel;
  IGStoryNetegoShoppingSuggestionOverlayTapModel *_shoppingSuggestion_shoppingSuggestionTapModel;
  IGStoryShoppingViewShopCTAOverlayTapModel *_viewShopCTA_viewShopCTATapModel;
  IGStoryNetegoSundialSuggestionModel *_suggestedClip_suggestedClipModel;
  IGAPIPollSticker *_pollSticker_pollSticker;
  IGResearchPollStickerModel *_researchPollSticker_researchPollStickerModel;
  IGFeedPostStickerTapModel *_feedPostSticker_feedPostStickerTapModel;
  IGFeedPostStickerCTATapModel *_feedPostStickerCTA_feedPostStickerCTATapModel;
  IGUpcomingEventStickerTapModel *_upcomingEventSticker_upcomingEventStickerTapModel;
  IGSoundOnStickerModel *_soundOnSticker_soundOnStickerModel;
  IGAPIStorySliderStickerDict *_sliderSticker_sliderStickerData;
  IGQuestionAnswerStickerModel *_questionAnswerSticker_questionAnswerStickerModel;
  IGMusicStickerTapModelObject *_musicSticker_musicStickerObject;
  IGMusicLyricsStickerTapModelObject *_musicLyricsSticker_musicLyricsStickerObject;
  IGAPIStoryQuizDict *_quizSticker_storyQuizSticker;
  IGAPIStoryCountdownTappableData *_countdownSticker_countdownStickerData;
  IGElectionStickerModel *_electionSticker_electionStickerModel;
  IGFBFundraiserStickerModel *_fbFundraiserSticker_fbFundraiserStickerModel;
  IGFBGroupStickerModel *_fbGroupSticker_fbGroupStickerModel;
  IGStoryFundraiserStickerModel *_fundraiserSticker_fundraiserStickerModel;
  IGProductShareStickerModel *_productShareModel;
  IGLispyActionStickerModel *_lispyActionSticker_lispyActionStickerModel;
  IGGuideStickerModel *_guideSticker_guideStickerModel;
  IGAPISMBSupportStickerDict *_smbSupportSticker_smbSupportStickerDict;
  id _customClientGeneratedTapObject_customClientGeneratedTapObject;
  IGLinkStickerConsumptionModel *_linkSticker_linkStickerConsumptionModel;
  NSObject<IGPolaroidStickerModelType> *_polaroidSticker_polaroidStickerModel;
  IGPromptStickerModel *_promptSticker_promptStickerModel;
  IGInternalStickerModel *_internalSticker_internalStickerModel;
  NSObject<IGAstrologyStickerModelType> *_astrologySticker_astrologyStickerModel;
  IGBadgesSupporterThankYouStickerModel *_badgesSupporterThankYouSticker_badgesSupporterThankYouStickerModel;
  IGLinkStickerModel *_adsLinkSticker_adsLinkStickerModel;
  IGAPIStoryReactionStickerTappableData *_reactionSticker_reactionStickerData;
  IGAvatarStickerTapModel *_avatarSticker_avatarStickerData;
  IGSubscriberPromoteStickerModel *_subscriptionsPromoteSticker_subscriberPromoteStickerModel;
  IGJoinChatStickerConsumptionModel *_joinChatSticker_joinChatStickerConsumptionModel;
  IGAdsProfileCardLinkStickerModel *_adsProfileCardLinkSticker_adsProfileCardLinkStickerModel;
  IGAdsLeadGenCardStickerModel *_adsLeadGenCardSticker_adsLeadGenCardStickerModel;
  IGLeadGenFirstQuestionStickerModel *_leadGenFirstQuestionSticker_leadGenFirstQuestionStickerModel;
  IGClickToMessagingFAQsStickerModel *_clickToMessagingFAQsSticker_clickToMessagingFAQsStickerModel;
  IGAPIMediaVCRTappableData *_visualReplyComment_visualReplyData;
  IGFBCommunityStickerModel *_fbCommunitySticker_fbCommunityStickerModel;
  IGAdCollectionProductOverlayTapModel *_collectionAdsProductCTA_adCollectionProductTapModel;
  IGAppStickerConsumptionModel *_appSticker_appStickerConsumptionModel;
  IGFeatureLinkingStickerTapModel *_featureLinkingSticker_featureLinkingStickerTapModel;
  IGAPIStoryGroupMentionTappableData *_groupMentionSticker_groupMentionStickerData;
  IGBeforeAndAfterStickerConsumptionModel *_beforeAndAfterSticker_beforeAndAfterStickerModel;
  IGMusicPickStickerModel *_musicPickSticker_musicPickStickerModel;
  IGAdsAppStickerModel *_adsAppSticker_adsAppStickerModel;
  IGBarcelonaStoryReshareStickerModel *_barcelonaPostShare_barcelonaReshareStickerModel;
  IGFBTagStickerModel *_fbTagSticker_fbTagStickerModel;
  IGLiveBroadcastStickerModel *_liveBroadcastSticker_liveBroadcastStickerModel;
  IGEventStickerTapModel *_eventSticker_eventStickerTapModel;
  IGHighlightStickerTapModel *_highlightSticker_highlightStickerTapModel;
  IGAPIExploreShareableGridTappableData *_exploreShareableGridSticker_shareableGridStickerData;
  NSObject<IGPhotoCreditStickerModelType> *_photoCreditSticker_photoCreditStickerModel;
  NSString *_secretSticker_secretStickerCaption;
  IGAPIIGBioProductDict *_bioProductSticker_bioProductStickerModel;
  IGSavedCollectionStickerTapModel *_savedCollectionSticker_savedCollectionStickerTapModel;
  IGKaraokeCaptionStickerModel *_karaokeCaptionSticker_karaokeCaptionStickerModel;
  IGTextStickerTapModel *_textSticker_textStickerTapModel;
  NSObject<IGChannelChallengeStickerConsumptionModelType> *_channelChallengeSticker_channelChallengeStickerConsumptionModel;
  IGInstaPalStickerConsumptionModel *_instaPalSticker_instaPalStickerModel;
  NSObject<IGChannelPromptV2StickerModelType> *_promptV2Sticker_promptV2StickerModel;
}

/* class methods */
+ (id)addToRollCall;
+ (id)adsAppStickerWithAdsAppStickerModel:(id)model;
+ (id)adsLeadGenCardStickerWithAdsLeadGenCardStickerModel:(id)model;
+ (id)adsLinkStickerWithAdsLinkStickerModel:(id)model;
+ (id)adsProfileCardLinkStickerWithAdsProfileCardLinkStickerModel:(id)model;
+ (id)appStickerWithAppStickerConsumptionModel:(id)model;
+ (id)astrologyStickerWithAstrologyStickerModel:(id)model;
+ (id)avatarStickerWithAvatarStickerData:(id)data;
+ (id)badgesSupporterThankYouStickerWithBadgesSupporterThankYouStickerModel:(id)model;
+ (id)barcelonaPostShareWithBarcelonaReshareStickerModel:(id)model;
+ (id)beforeAndAfterStickerWithBeforeAndAfterStickerModel:(id)model;
+ (id)bioProductStickerWithBioProductStickerModel:(id)model;
+ (id)channelChallengeStickerWithChannelChallengeStickerConsumptionModel:(id)model;
+ (id)clickToMessagingFAQsStickerWithClickToMessagingFAQsStickerModel:(id)model;
+ (id)collectionAdsProductCTAWithAdCollectionProductTapModel:(id)model;
+ (id)countdownStickerWithCountdownStickerData:(id)data;
+ (id)customClientGeneratedTapObjectWithCustomClientGeneratedTapObject:(id)object;
+ (id)electionStickerWithElectionStickerModel:(id)model;
+ (id)eventStickerWithEventStickerTapModel:(id)model;
+ (id)exploreShareableGridStickerWithShareableGridStickerData:(id)data;
+ (id)fbCommunityStickerWithFbCommunityStickerModel:(id)model;
+ (id)fbFundraiserStickerWithFbFundraiserStickerModel:(id)model;
+ (id)fbGroupStickerWithFbGroupStickerModel:(id)model;
+ (id)fbTagStickerWithFbTagStickerModel:(id)model;
+ (id)featureLinkingStickerWithFeatureLinkingStickerTapModel:(id)model;
+ (id)feedPostStickerCTAWithFeedPostStickerCTATapModel:(id)model;
+ (id)feedPostStickerWithFeedPostStickerTapModel:(id)model;
+ (id)fundraiserStickerWithFundraiserStickerModel:(id)model;
+ (id)groupMentionStickerWithGroupMentionStickerData:(id)data;
+ (id)guideStickerWithGuideStickerModel:(id)model;
+ (id)hashtagWithHashtagModel:(id)model;
+ (id)highlightStickerWithHighlightStickerTapModel:(id)model;
+ (id)instaPalStickerWithInstaPalStickerModel:(id)model;
+ (id)internalStickerWithInternalStickerModel:(id)model;
+ (id)joinChatStickerWithJoinChatStickerConsumptionModel:(id)model;
+ (id)karaokeCaptionStickerWithKaraokeCaptionStickerModel:(id)model;
+ (id)leadGenFirstQuestionStickerWithLeadGenFirstQuestionStickerModel:(id)model;
+ (id)linkStickerWithLinkStickerConsumptionModel:(id)model;
+ (id)lispyActionStickerWithLispyActionStickerModel:(id)model;
+ (id)liveBroadcastStickerWithLiveBroadcastStickerModel:(id)model;
+ (id)locationWithApiLocationModel:(id)model;
+ (id)musicLyricsStickerWithMusicLyricsStickerObject:(id)object;
+ (id)musicPickStickerWithMusicPickStickerModel:(id)model;
+ (id)musicStickerWithMusicStickerObject:(id)object;
+ (id)notifyMeSticker;
+ (id)photoCreditStickerWithPhotoCreditStickerModel:(id)model;
+ (id)polaroidStickerWithPolaroidStickerModel:(id)model;
+ (id)pollStickerWithPollSticker:(id)sticker;
+ (id)productShareModel:(id)model;
+ (id)productWithProductStickerModel:(id)model;
+ (id)productsWithMultiProductStickerModel:(id)model;
+ (id)promptStickerWithPromptStickerModel:(id)model;
+ (id)promptV2StickerWithPromptV2StickerModel:(id)model;
+ (id)questionAnswerStickerWithQuestionAnswerStickerModel:(id)model;
+ (id)quizStickerWithStoryQuizSticker:(id)sticker;
+ (id)reactionStickerWithReactionStickerData:(id)data;
+ (id)researchPollStickerWithResearchPollStickerModel:(id)model;
+ (id)savedCollectionStickerWithSavedCollectionStickerTapModel:(id)model;
+ (id)secretStickerWithSecretStickerCaption:(id)caption;
+ (id)shoppingSuggestionWithShoppingSuggestionTapModel:(id)model;
+ (id)sliderStickerWithSliderStickerData:(id)data;
+ (id)smbSupportStickerWithSmbSupportStickerDict:(id)dict;
+ (id)soundOnStickerWithSoundOnStickerModel:(id)model;
+ (id)subscriptionsPromoteStickerWithSubscriberPromoteStickerModel:(id)model;
+ (id)subscriptionsTeaserSticker;
+ (id)suggestedClipWithSuggestedClipModel:(id)model;
+ (id)textStickerWithTextStickerTapModel:(id)model;
+ (id)upcomingEventStickerWithUpcomingEventStickerTapModel:(id)model;
+ (id)userPillWithUserPillTapModelObject:(id)object;
+ (id)userWithUserTapModelObject:(id)object;
+ (id)viewShopCTAWithViewShopCTATapModel:(id)model;
+ (id)visualReplyCommentWithVisualReplyData:(id)data;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGStoryOverlayTapModelObject_h */
