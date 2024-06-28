//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryStickerTrayViewController_h
#define IGStoryStickerTrayViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGAudioBrowserCameraLogger.h"
#include "IGDirectionalPanGestureRecognizer.h"
#include "IGGestureHandler-Protocol.h"
#include "IGPurchaseOptionPartnerSelectionViewControllerDelegate-Protocol.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGShoppingTaggingPermissionsHelper.h"
#include "IGStickerGalleryViewControllerDelegate-Protocol.h"
#include "IGStickerViewController.h"
#include "IGStickerViewControllerLoggingDelegate-Protocol.h"
#include "IGStickerViewControllerNavigationDelegate-Protocol.h"
#include "IGStickerViewControllerSelectionDelegate-Protocol.h"
#include "IGStoryAIStickerViewController.h"
#include "IGStoryGIFStickerViewController.h"
#include "IGStoryGalleryViewControllerDelegate-Protocol.h"
#include "IGStoryGeneratedStickerLogger.h"
#include "IGStoryMediaCompositionState.h"
#include "IGStoryMusicAppBlocklistHelper.h"
#include "IGStoryMusicBrowserViewControllerDelegate-Protocol.h"
#include "IGStoryStickerDataSource-Protocol.h"
#include "IGStoryStickerSearchUserFlowLogger.h"
#include "IGStoryStickerTrayContainerView.h"
#include "IGStoryStickerTrayStateModel.h"
#include "IGStoryStickerTrayViewControllerDelegate-Protocol.h"
#include "IGStoryStickerTrayViewControllerStickerSelectionDelegate-Protocol.h"
#include "IGStoryStickerUserFlowLogger.h"
#include "IGTaggingProductUserFlowLogger.h"
#include "IGUserAvatarStatusListener-Protocol.h"
#include "IGUserSession.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "_TtC22IGCutoutStickerUpdater32IGCutoutStickerUpdateActionSheet.h"
#include "_TtP13IGStickerPack39IGStickerPackGridViewControllerDelegate_-Protocol.h"
#include "_TtP22IGCutoutStickerUpdater40IGCutoutStickerUpdateActionSheetDelegate_-Protocol.h"
#include "_TtP26IGFitnessStickerPickerType44IGFitnessStickerPickerViewControllerDelegate_-Protocol.h"

@class CLLocation, NSDate, NSSet, NSString, UITapGestureRecognizer;
@protocol IGStoryStickerAddingRulesDataSource, IGStoryStickerSearchDataSource;

@interface IGStoryStickerTrayViewController : IGViewController<UIGestureRecognizerDelegate, IGStickerViewControllerNavigationDelegate, IGSearchBarDelegate, IGStickerGalleryViewControllerDelegate, IGStoryMusicBrowserViewControllerDelegate, IGStickerViewControllerSelectionDelegate, IGPurchaseOptionPartnerSelectionViewControllerDelegate, IGStickerViewControllerLoggingDelegate, IGStoryStickerTrayViewControllerDelegate, IGUserAvatarStatusListener, IGStoryGalleryViewControllerDelegate, _TtP13IGStickerPack39IGStickerPackGridViewControllerDelegate_, _TtP22IGCutoutStickerUpdater40IGCutoutStickerUpdateActionSheetDelegate_, _TtP26IGFitnessStickerPickerType44IGFitnessStickerPickerViewControllerDelegate_, IGGestureHandler> {
  /* instance variables */
  IGStoryStickerTrayContainerView *_trayContainerView;
  IGStickerViewController *_defaultStickerVC;
  long long _surfaceType;
  IGStoryGIFStickerViewController *_gifVC;
  IGStoryAIStickerViewController *_genAIVC;
  IGStickerViewController *_searchStickerVC;
  NSObject<IGStoryStickerDataSource> *_dataSource;
  unsigned long long _dataSourceType;
  IGStoryMediaCompositionState *_composition;
  IGUserSession *_userSession;
  NSString *_sessionId;
  IGDirectionalPanGestureRecognizer *_panGesture;
  UITapGestureRecognizer *_tapGesture;
  double _initialY;
  IGStoryStickerTrayStateModel *_initialTrayStateModel;
  NSObject<IGStoryStickerSearchDataSource> *_searchDataSource;
  CLLocation *_mediaEXIFLocation;
  IGShoppingTaggingPermissionsHelper *_shoppingTaggingPermissionsHelper;
  IGStoryStickerUserFlowLogger *_userFlowLogger;
  IGStoryStickerSearchUserFlowLogger *_gifSearchUserFlowLogger;
  IGStoryGeneratedStickerLogger *_generatedStickerLogger;
  long long _stickerEntryPoint;
  IGTaggingProductUserFlowLogger *_taggingProductUserFlowLogger;
  long long _initialTab;
  NSDate *_polaroidCreationDate;
  IGStoryMusicAppBlocklistHelper *_musicAppBlocklistHelper;
  _TtC22IGCutoutStickerUpdater32IGCutoutStickerUpdateActionSheet *_cutoutStickerUpdateActionSheet;
  IGAudioBrowserCameraLogger *_audioBrowserLogger;
  NSString *_cutoutSingleVideoStickerToastId;
  NSSet *_alreadyMentionedUsers;
  BOOL _searchBarShouldBeHidden;
  BOOL _hasMultipleMediaCompositions;
  BOOL _isPartialModalPresentation;
  NSObject<IGStoryStickerTrayViewControllerStickerSelectionDelegate> *_stickerSelectionDelegate;
  NSObject<IGStoryStickerAddingRulesDataSource> *_stickerAddingRulesDataSource;
  unsigned long long _searchItemTypeOptions;
  long long _stickerActionType;
  unsigned long long _trayContentState;
}

@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) NSObject<IGStoryStickerTrayViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSString *suggestedStickerId;
@property (nonatomic) double topInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session stickerDataSource:(id)source composition:(id)composition initialTrayStateModel:(id)model mediaEXIFLocation:(id)exiflocation surfaceType:(long long)type cameraDestination:(long long)destination userFlowLogger:(id)logger stickerEntryPoint:(long long)point alreadyMentionedUsers:(id)users;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (BOOL)accessibilityPerformEscape;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)_handlePan:(id)pan;
- (void)_handleTap:(id)tap;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (void)storyStickerTrayHandleGenAIAction;
- (void)storyStickerTrayHandleGiphyAction;
- (void)storyStickerTrayHandleMusicAction;
- (void)storyStickerTrayHandleMusicBrowseAction;
- (void)storyStickerTrayHandleCutoutSeeMoreAction;
- (void)storyStickerTrayHandleSavedAction;
- (void)stickerViewController:(id)controller wantsDismissAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)stickerViewController:(id)controller didSelectGIFSearchStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectAIStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectCutoutStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectGalleryStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectFitnessStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectProductStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectMultiProductStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectMusicStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectLinkStickerTrayModel:(id)model;
- (void)stickerViewControllerDidSelectAddYoursEntrypoint:(id)entrypoint;
- (void)stickerViewControllerDidSelectTextSticker:(id)sticker;
- (void)avatarStoryGridDidTapClose:(id)close;
- (void)avatarStoryGridShouldNavigateToAvatarEditor:(id)editor;
- (void)avatarStoryGridDidTapSelect:(id)select avatar:(id)avatar staticSticker:(id)sticker;
- (void)avatarStoryGridDidTapSelect:(id)select avatar:(id)avatar animatedSticker:(id)sticker;
- (void)avatarStoryGrid:(id)grid willHitImpression:(id)impression;
- (id)storyLinkCreationViewController:(id)controller didSelectStoryLink:(id)link;
- (void)storyLinkCreationViewControllerDidCloseForm:(id)form hasChanges:(BOOL)changes didAllowSponsorPartnerToBoost:(BOOL)boost mediaId:(id)id validatedUrl:(id)url businessTransactionLinkAdded:(BOOL)added boostStoryModeEnabled:(BOOL)enabled isAdCodeToggleOn:(BOOL)on;
- (void)storyLinkCreationViewControllerVerifyPaidBrandedContentStoryForInteractiveElements:(id)elements validationCompleteHandler:(id /* block */)handler;
- (void)storyLinkCreationViewController:(id)controller didSelectAudienceRestrictions:(id)restrictions;
- (void)addPartnerWebLinksDidUpdateBrandedContentTags:(id)tags isPaidPartnership:(BOOL)partnership allowedPartnerToBoost:(BOOL)boost generateAdCode:(BOOL)code;
- (void)addPartnerWebLinksDidUpdateBrandedContentMedia:(id)media;
- (void)stickerViewController:(id)controller didSelectCountdownHomeWithStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectCountdownStickerTrayModel:(id)model;
- (void)countdownStickerListViewControllerDidTapCreateNewList:(id)list;
- (void)countdownStickerListViewController:(id)controller didReshareCountdownSticker:(id)sticker;
- (void)countdownStickerListViewController:(id)controller didDeleteCountdownSticker:(id)sticker;
- (void)stickerViewController:(id)controller didSelectSMBSupportStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectSMBSupportDeliveryStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectSMBGetQuoteStickerTrayModel:(id)model;
- (void)partnerSelectionViewControllerDidAddGiftCardPurchaseOption:(id)option;
- (void)partnerSelectionViewControllerDidAddDeliveryPurchaseOption:(id)option;
- (void)partnerSelectionViewControllerDidAddDonationPurchaseOption:(id)option;
- (void)partnerSelectionViewControllerDidAddGetQuotePurchaseOption:(id)option;
- (void)addExistingStandaloneFundraiserStickerToStory:(id)story;
- (void)stickerViewController:(id)controller didSelectFundraiserStickerTrayModel:(id)model;
- (void)storyGIFStickerViewControllerDidCancel:(id)cancel;
- (void)storyGIFStickerViewController:(id)controller didSelectAnimatedSticker:(id)sticker;
- (void)storyAIStickerViewControllerDidTapButtomButton:(id)button searchText:(id)text;
- (void)storyAIStickerViewControllerDidCancel:(id)cancel;
- (void)storyAIStickerViewController:(id)controller didSelectStaticSticker:(id)sticker index:(long long)index;
- (void)storyAIStickerViewController:(id)controller didSelectAnimatedSticker:(id)sticker index:(long long)index;
- (void)storyAIStickerViewControllerDidUpdateFavoriteStorage:(id)storage;
- (void)stickerGalleryViewControllerDidTapCancel:(id)cancel;
- (void)fitnessPickerViewControllerDidCancelWithPickerViewController:(id)controller;
- (void)fitnessPickerViewControllerDidSelectWithStaticSticker:(id)sticker;
- (void)stickerTrayContainerView:(id)view didTapChevronButton:(id)button;
- (void)stickerTrayContainerView:(id)view didChangePageControl:(id)control;
- (void)stickerTrayContainerViewDidTapDoneButton:(id)button;
- (void)musicBrowserViewControllerDidCancel:(id)cancel;
- (void)musicBrowserViewController:(id)controller didTapAudioTrack:(id)track;
- (void)audioBrowserViewController:(id)controller didTapAudioTrack:(id)track context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)audioBrowserViewController:(id)controller didSelectAudioTrack:(id)track;
- (void)appPickerViewController:(id)controller didSelectApplication:(id)application;
- (void)storyStickerDataSource:(id)source didLoadItems:(id)items versionID:(id)id;
- (void)storyStickerDataSource:(id)source didUpdateTimeSticker:(id)sticker;
- (void)storyStickerDataSource:(id)source didFailWithError:(id)error;
- (BOOL)searchBarShouldBeginEditing:(id)editing;
- (void)searchBar:(id)bar didChangeSearchText:(id)text;
- (void)_searchCancelTapped:(id)tapped;
- (void)searchBarDidTapReturnKey:(id)key;
- (void)stickerSearchDataSource:(id)source didLoadItems:(id)items forText:(id)text;
- (void)stickerSearchDataSource:(id)source didFailWithError:(id)error;
- (void)willDismissStickerTrayViewController:(id)controller trayStateModel:(id)model;
- (void)stickerTrayViewController:(id)controller didChangeContentState:(unsigned long long)state;
- (void)shoppingTaggingPermissionsHelper:(id)helper didUpdateTaggingPermissionsStatus:(long long)status;
- (void)shoppingTaggingPermissionsHelper:(id)helper didUpdateResponse:(id)response;
- (void)stickerPackViewControllerDidExit:(id)exit;
- (void)stickerPackViewController:(id)controller didSelectStaticStickerModel:(id)model;
- (void)stickerPackViewController:(id)controller didSelectAnimatedStickerModel:(id)model;
- (BOOL)stickerPackViewController:(id)controller canSelectAnimatedStickerModel:(id)model;
- (void)stickerPackViewController:(id)controller didSelectCutoutStickerModel:(id)model;
- (void)stickerPackViewController:(id)controller didDelete:(id)delete;
- (void)productTaggingFlowPresenterDidCancel:(id)cancel sessionID:(id)id;
- (void)productTaggingFlowPresenter:(id)presenter didSelectTaggedProductItems:(id)items merchantID:(id)id productMerchantIDs:(id)ids sessionID:(id)id productSelectionBehavior:(id)behavior productIdToCollectionInfoMap:(id)map;
- (void)productTaggingFlowPresenter:(id)presenter didSelectProductCollection:(id)collection merchantID:(id)id productMerchantIDs:(id)ids sessionID:(id)id;
- (void)stickerViewController:(id)controller logStickerImpressionWithId:(id)id stickerModel:(id)model index:(long long)index directTrayType:(long long)type stickerActionType:(long long)type;
- (void)stickerViewController:(id)controller logStickerTapWithId:(id)id stickerModel:(id)model stickerActionType:(long long)type;
- (void)stickerViewControllerDidSelectLike:(id)like;
- (void)stickerViewControllerDidSelectLoadMoreStickers:(id)stickers;
- (void)stickerViewControllerDidSelectPollMessage:(id)message;
- (void)stickerViewController:(id)controller didSelectEmoji:(id)emoji emojiView:(id)view;
- (void)stickerViewController:(id)controller didSelectStaticSticker:(id)sticker index:(long long)index;
- (void)stickerViewController:(id)controller didLongPressStaticSticker:(id)sticker enableReportingOptions:(BOOL)options enableFeedbackOptions:(BOOL)options enableFavoriteOptions:(BOOL)options useContextMenuReportFlow:(BOOL)flow cellContentView:(id)view index:(long long)index;
- (void)stickerViewController:(id)controller didLongPressAnimatedSticker:(id)sticker enableFavoriteOptions:(BOOL)options useContextMenuReportFlow:(BOOL)flow cellContentView:(id)view index:(long long)index;
- (void)stickerViewController:(id)controller didSelectAnimatedSticker:(id)sticker withQuotedMessage:(id)message index:(long long)index;
- (BOOL)stickerViewController:(id)controller canSelectAnimatedSticker:(id)sticker;
- (void)stickerViewController:(id)controller didSelectTimeStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectDateSticker:(id)sticker;
- (void)stickerViewController:(id)controller didSelectMemoriesSticker:(id)sticker;
- (void)stickerViewController:(id)controller willPresentLocationPicker:(id)picker;
- (void)stickerViewController:(id)controller willDismissLocationPicker:(id)picker;
- (void)stickerViewController:(id)controller didSelectLocationStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectGalleryImageSticker:(id)sticker;
- (void)stickerViewController:(id)controller didSelectGalleryVideoSticker:(id)sticker;
- (void)stickerViewController:(id)controller didSelectInternalStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectHashtagStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectPollStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectPollStickerV2Model:(id)model;
- (void)stickerViewController:(id)controller didSelectMentionStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectSliderStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectQuestionAnswerStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectQuizStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectJoinChatStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectPlaybackTimeDebuggingStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectVoterRegistrationStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectShareProfessionalStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectAudioTrack:(id)track;
- (void)stickerViewController:(id)controller didSelectCutoutStickerCreationModel:(id)model;
- (void)stickerViewControllerDidSelectCutoutStickerSeeMoreOption:(id)option;
- (BOOL)_checkForIncompatibleStickerAndShowAlertIfNeedeWithDisabledStickerType:(Class)type;
- (BOOL)_currentCompositionContainsMusicPickStickerInCreationMode;
- (void)stickerViewController:(id)controller didSelectPromptStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectBadgesSupporterThankYouStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectITakeCareStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectAvatars:(id)avatars withQuotedMessage:(id)message threadParticipantIds:(id)ids isDisappearingModeOn:(BOOL)on isInstamadilloThread:(BOOL)thread;
- (void)stickerViewController:(id)controller didSelectAvatarSticker:(id)sticker withQuotedContent:(id)content isDisappearingModeOn:(BOOL)on isInstamadilloThread:(BOOL)thread;
- (void)stickerViewController:(id)controller didSelectAnimatedAvatarSticker:(id)sticker withQuotedContent:(id)content isDisappearingModeOn:(BOOL)on isInstamadilloThread:(BOOL)thread;
- (void)stickerViewController:(id)controller didSelectAmplifyBlackBusinessStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectReactionSticker:(id)sticker;
- (void)stickerViewController:(id)controller didSelectSubscriberPromoteSticker:(id)sticker;
- (void)stickerViewController:(id)controller didSelectAppStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectBioProductStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectInstaPalStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectFeatureLinkingStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectAstrologyStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectBeforeAndAfterStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectMusicPickStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectTemplatesStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectCutoutSticker:(id)sticker stickerIdTask:(id)task videoSegmentationTask:(id)task;
- (void)stickerViewController:(id)controller didSelectPolaroidStickerModel:(id)model;
- (void)stickerViewController:(id)controller didSelectDirectAIStickerEntrypointModel:(id)model;
- (void)stickerViewController:(id)controller didSelectSecretStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectElectionAddYoursStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectLocationShareEntrypointModel:(id)model;
- (void)stickerViewController:(id)controller didSelectImagineCreateEntrypointModel:(id)model;
- (void)stickerViewController:(id)controller didSelectUpcomingEventStickerTrayModel:(id)model;
- (void)upcomingEventStickerListViewController:(id)controller didShareUpcomingEventSticker:(id)sticker;
- (void)stickerViewController:(id)controller didSelectKaraokeCaptionStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectMagicModStickerTrayModel:(id)model;
- (void)stickerViewController:(id)controller didSelectNotifyMeSticker:(id)sticker;
- (BOOL)hasInstanceOfStickerWithEnforcementType:(unsigned long long)type;
- (BOOL)hasHitMaxCountForStaticStickerWithModel:(id)model;
- (unsigned long long)musicStickerDisabledReason;
- (void)storyMusicAppBlocklistDidLoad:(id)load;
- (void)avatarStatusManager:(id)manager didUpdateAvatarStatus:(long long)status;
- (void)avatarStatusManagerDidCreateAvatar:(id)avatar;
- (void)avatarStatusManagerDidDeleteAvatar:(id)avatar;
- (void)avatarStatusManagerDidUpdateAvatar:(id)avatar;
- (void)storyGalleryViewController:(id)controller didSelectAssets:(id)assets;
- (void)storyGalleryViewController:(id)controller didSelectCameraCell:(id)cell;
- (void)storyGalleryViewController:(id)controller didSetMultiSelectEnabled:(BOOL)enabled animated:(BOOL)animated;
- (void)storyGalleryViewController:(id)controller didSelectDraft:(id)draft withDraftGallery:(id)gallery;
- (void)storyGalleryViewControllerDidUpdateGalleryPermissions:(id)permissions;
- (void)storyGalleryViewController:(id)controller didShareToStory:(long long)story exitPoint:(long long)point directRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array;
- (void)storyGalleryViewControllerDidTapCancel:(id)cancel;
- (void)storyGalleryViewControllerDidChangeAlbum:(id)album;
- (void)storyGalleryViewController:(id)controller didSelectImage:(id)image;
- (void)didDeleteSticker;
- (void)didSelectDeleteSticker;
- (BOOL)canRespondToGesture:(id)gesture;
@end

#endif /* IGStoryStickerTrayViewController_h */