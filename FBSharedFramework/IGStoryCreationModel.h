//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCreationModel_h
#define IGStoryCreationModel_h
@import Foundation;

#include "IGAPIBrandedContentGatingInfo.h"
#include "IGAPIBrandedContentProjectMetadata.h"
#include "IGAudioOriginalSoundTrack.h"
#include "IGMultiUploadMetadata.h"
#include "IGQuickSnapCreationModel.h"
#include "IGRingViewSpec.h"
#include "IGStoryCameraFormatModel.h"
#include "IGStoryCreationAttributionModel.h"
#include "IGStoryQuickCaptionsModel.h"
#include "IGStoryRingBadgeSpec.h"
#include "IGStoryTapModelArray.h"

@class IGStoryCreationHighlightConfig, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSSet, NSString, NSUUID;

@interface IGStoryCreationModel : NSObject {
  /* instance variables */
  NSMutableOrderedSet *_sponsorPartnerOrderedSet;
  BOOL _hasSeenTextInTombstonesNux;
  BOOL _hasDrawing;
  BOOL _mentionsTappable;
  BOOL _hasMediaReplyOverlay;
  BOOL _isMediaReplyOverlayTransformed;
  BOOL _isAREffectInternalOnly;
  BOOL _allowBrandedContentPartnerToBoost;
  BOOL _generateAdCode;
  BOOL _createdInRichTextMode;
  BOOL _richTextCameraEnabled;
  BOOL _textModeBackgroundColorToggled;
  BOOL _textModeBackgroundAlphaToggled;
  BOOL _hasAnimatedSticker;
  BOOL _hasSocialChannelSticker;
  BOOL _hasBroadcastChannelSticker;
  BOOL _hasDirectMessageSticker;
  BOOL _hasAiAgentMessageSticker;
  BOOL _textModePostHasRainbowGradient;
  BOOL _privateMentionShareEnabled;
  BOOL _isMentionReshare;
  BOOL _isBoomerangV2;
  BOOL _isCapturedInVideoChat;
  BOOL _fromDrafts;
  BOOL _canPlaySpotifyAudio;
  BOOL _shouldCreateGroupMentionThread;
  BOOL _isMadeWithAI;
  NSArray *_textFromTextLabelStickers;
  NSArray *_metadataFromTextLabelStickers;
  NSString *_formatVariant;
  long long _contentTrait;
  long long _capturePosition;
  NSArray *_richTextFormatLoggingNames;
  NSArray *_textMetadataDictionaries;
  NSArray *_galleryStickerStyles;
  long long _mentionsCount;
  long long _pinnedStickerCount;
  long long _mediaReplyOverlayStyle;
  NSArray *_storyLinks;
  NSArray *_stickerIds;
  NSArray *_stickerIdsWithAttribution;
  NSDictionary *_appliedStickerFilters;
  NSDictionary *_arEffectIDs;
  NSSet *_appliedAREffectIDsDuringRecording;
  NSSet *_appliedAREffectInstanceIDsDuringRecording;
  NSSet *_appliedAREffectIDsDuringPostcapture;
  NSSet *_appliedAREffectInstanceIDsDuringPostcapture;
  NSString *_selectedAREffectID;
  NSString *_selectedAREffectFileID;
  NSDictionary *_selectedAREffectPersistedMetadata;
  IGAPIBrandedContentProjectMetadata *_brandedContentProjectMetadata;
  NSString *_archivedMediaID;
  NSString *_originalMediaTypeString;
  long long _originalMediaType;
  long long _mediaGestureState;
  IGStoryCreationHighlightConfig *_highlightsConfig;
  NSString *_resharedMediaId;
  NSDictionary *_questionResponseMetadata;
  NSDictionary *_musicStickerMetadata;
  NSArray *_staticStickerMetadata;
  NSDictionary *_quizReshareStickerMetadata;
  NSDate *_shareTime;
  unsigned long long _multiPostMediaCount;
  unsigned long long _multiPostMediaIndex;
  IGMultiUploadMetadata *_multiUploadMetadata;
  long long _reshareSource;
  NSString *_createModeFormat;
  NSString *_createModeSubformat;
  long long _numPostcaptureTrims;
  NSDictionary *_formatTopLevelMetadata;
  NSString *_transcriptionText;
  NSArray *_allowlistedUserIDs;
  NSDictionary *_gallerySuggestionsMetadata;
  NSArray *_cameraTools;
  NSString *_backgroundAssetOverlayColorHexString;
  NSDictionary *_genAIMetadata;
}

@property (nonatomic) long long filterType;
@property (readonly, nonatomic) IGStoryCameraFormatModel *captureMode;
@property (copy, nonatomic) IGStoryTapModelArray *tapModelArray;
@property (copy, nonatomic) NSArray *internalFeatures;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) long long mediaAudience;
@property (nonatomic) BOOL hasAREffect;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *merchantID;
@property (nonatomic) BOOL isPaidPartnership;
@property (retain, nonatomic) IGAPIBrandedContentGatingInfo *audienceRestrictions;
@property (retain, nonatomic) NSString *chatStickerThreadId;
@property (retain, nonatomic) NSString *chatStickerThreadIdV2;
@property (retain, nonatomic) NSNumber *chatStickerAudienceType;
@property (nonatomic) long long chatStickerEntryPoint;
@property (nonatomic) long long chatStickerCreationSource;
@property (retain, nonatomic) NSString *chatStickerMessageId;
@property (nonatomic) long long chatStickerCreationAuthorType;
@property (retain, nonatomic) NSString *chatStickerContentType;
@property (copy, nonatomic) NSArray *prepopulatedStickers;
@property (copy, nonatomic) IGStoryCreationAttributionModel *attributionModel;
@property (copy, nonatomic) NSString *pendingShareToFriendsStoryMediaId;
@property (nonatomic) BOOL isResharedMediaIdOwnedByViewer;
@property (nonatomic) BOOL shareToFacebook;
@property (copy, nonatomic) IGAudioOriginalSoundTrack *originalSoundTrack;
@property (retain, nonatomic) IGRingViewSpec *customRingSpec;
@property (retain, nonatomic) IGStoryRingBadgeSpec *ringBadgeSpec;
@property (copy, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *waterfallId;
@property (copy, nonatomic) NSString *replyToMediaId;
@property (copy, nonatomic) NSUUID *compositionId;
@property (copy, nonatomic) NSArray *creationTools;
@property (nonatomic) BOOL isFirstTake;
@property (nonatomic) BOOL isCreatedFromAddYoursBrowsing;
@property (retain, nonatomic) NSDictionary *exifData;
@property (nonatomic) BOOL isFanClubWelcomeStory;
@property (nonatomic) BOOL isMusicFirstStory;
@property (retain, nonatomic) NSString *fanClubId;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRegion;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } smartCropRegion;
@property (nonatomic) struct CGSize { double x0; double x1; } assetSize;
@property (retain, nonatomic) IGStoryQuickCaptionsModel *storyQuickCaption;
@property (retain, nonatomic) IGQuickSnapCreationModel *quickSnapModel;
@property (nonatomic) BOOL isFromAddToStoryDistributor;
@property (nonatomic) BOOL shouldResizeForMeme;
@property (retain, nonatomic) NSNumber *isAdsModeBoostStoryEnabled;
@property (retain, nonatomic) NSString *originalReelID;

/* instance methods */
- (id)initWithCaptureMode:(id)mode contentTrait:(long long)trait;
@end

#endif /* IGStoryCreationModel_h */
