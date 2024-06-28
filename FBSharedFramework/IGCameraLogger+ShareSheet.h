//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraLogger_ShareSheet_h
#define IGCameraLogger_ShareSheet_h
@import Foundation;

@interface IGCameraLogger (ShareSheet) <NSObject>
/* instance methods */
- (void)logShareSheetLoadWithMediaType:(long long)type pinnedStickerIds:(id)ids entityTypes:(id)types crosspostingLoggingType:(long long)type fromDraft:(id)draft;
- (void)logRecommendOnFacebookToggleAllowSelected:(BOOL)selected enableAccountSetting:(BOOL)setting surface:(long long)surface moduleName:(id)name mediaSource:(long long)source;
- (void)logShareToFacebookUnavailable:(long long)unavailable crosspostingLoggingType:(unsigned long long)type mediaSource:(long long)source;
- (void)logShareToFacebookPrimerAllowSelected:(BOOL)selected isCrossposted:(BOOL)crossposted isPanavision:(BOOL)panavision version:(long long)version mediaSource:(long long)source;
- (void)logShareToFacebookPrimerImpressionIsFBCrossPosting:(BOOL)posting isPanavision:(BOOL)panavision hasLinkedAccount:(BOOL)account followerCount:(id)count version:(long long)version mediaSource:(long long)source;
- (void)logShareSheetAddCollaboratorsImpression:(id)impression;
- (void)logShareSheetAddCollaboratorsTapped:(id)tapped;
- (void)logSundialShareSheetInviteCollaboratorsTapped:(id)tapped;
- (void)logFeedShareSheetInviteCollaboratorsTapped:(id)tapped;
- (void)logSundialShareSheetInviteCollaboratorsPersonAdded:(id)added;
- (void)logSundialShareSheetInviteCollaboratorsPersonRemoved:(id)removed;
- (void)logFeedShareSheetInviteCollaboratorsPersonAdded:(id)added;
- (void)logFeedShareSheetInviteCollaboratorsPersonRemoved:(id)removed;
- (void)logShareSheetOpenCarouselRowImpression:(id)impression;
- (void)logShareSheetOpenCarouselRowTap:(id)tap isEnabled:(BOOL)enabled;
- (void)logShareSheetTagPeopleRowImpression:(id)impression;
- (void)logShareSheetTagPeopleRowTap:(id)tap;
- (void)logSundialShareSheetTappedOnTagPeople:(id)people;
- (void)logSundialShareSheetPeopleTaggingPersonAdded;
- (void)logSundialShareSheetPeopleTaggingPersonRemoved;
- (void)logShareSheetMentionPromptImpression:(id)impression options:(id)options;
- (void)logShareSheetMentionPromptTap:(id)tap option:(long long)option;
- (void)logShareSheetMentionPromptDismiss:(id)dismiss options:(id)options;
- (void)logSundialShareSheetCoverPhotoCrop;
- (void)logSundialShareSheetTagAnotherPersonButtonTapped;
- (void)logClipsEffectButtonTap;
- (void)logShareSheetShareToFeedSelected;
- (void)logShareSheetShareToFeedUnselected;
- (void)logSelectedPostReelToOtherAccounts:(BOOL)accounts;
- (void)logShareSheetNavBarBackButton;
- (void)logShareSheetNavBarDraftCancelButton;
- (void)logShareSheetNavBarDraftEditButton;
- (void)logHQUploadSettingSwitchChangedWithToggleOn:(BOOL)on analyticsModule:(id)module;
- (void)logStickerTranslationProducerSettingSwitchToggled:(BOOL)toggled entrypoint:(id)entrypoint;
- (void)logFinalHQUploadSettingStateWithToggleOn:(BOOL)on;
- (void)logToggledRemixRequest:(BOOL)request;
- (void)logRemixRequestToggleRowImpression;
- (void)logMetaVerifiedLinkRowImpressionWithCompositionId:(id)id userSession:(id)session surface:(long long)surface analyticsModule:(id)module;
- (void)logMetaVerifiedLinkRowTapWithHasLink:(BOOL)link compositionId:(id)id userSession:(id)session surface:(long long)surface analyticsModule:(id)module;
- (void)logMetaVerifiedLinkRowTapClearButtonWithCompositionId:(id)id userSession:(id)session surface:(long long)surface analyticsModule:(id)module;
- (void)logAddEventButtonTap;
- (void)logAddMusicReleaseButtonTap;
- (void)logQuickShareRowTap;
- (void)logSundialShareSheetDidTapWithEntity:(long long)entity analyticsModule:(id)module;
- (void)logSundialShareSheetInterestPickerSessionStartedWithInterestPickerSessionId:(id)id mediaSource:(long long)source;
- (void)logSundialShareSheetInterestPickerSessionEndedWithInterestPickerSessionId:(id)id mediaSource:(long long)source;
- (void)logSundialShareSheetInterestPickerInterestSelected:(long long)selected interestPickerSessionId:(id)id mediaSource:(long long)source;
- (void)logSundialShareSheetInterestPickerInterestUnselected:(long long)unselected interestPickerSessionId:(id)id mediaSource:(long long)source;
- (void)logSundialShareSheetEntityImpressionForParentTopicId:(long long)id interestPickerSessionId:(id)id;
- (void)logSundialShareSheetCameraNotificationImpressionForInterestPickerSessionId:(id)id;
- (void)logSundialShareSheetCameraNotificationImpressionForInvalidMusicDurationErrorDialogWithDestination:(long long)destination;
- (void)logShareSheetEntityImpressionForAudienceControls:(long long)controls cameraDestination:(long long)destination analyticsModule:(id)module;
- (void)logFeedShareSheetEntityImpressionForMusic;
- (void)logSundialShareSheetReplaceAudioImpression;
- (void)logSundialShareSheetReplaceAudioTapRow;
- (void)logSundialShareSheetReplaceAudioTapDone;
- (void)logFeedShareSheetReplaceAudioImpression;
- (void)logWasLiveReelShareSheetShareToFacebookRowImpression:(id)impression;
- (void)logSundialShareSheetLoaded:(id)loaded userSession:(id)session cameraSessionId:(id)id cameraTools:(id)tools contentFundingAvailable:(BOOL)available entryPoint:(long long)point mediaSource:(long long)source cameraDestination:(long long)destination isPanavision:(BOOL)panavision isFeedFork:(BOOL)fork isEnabled:(BOOL)enabled crosspostingLoggingType:(long long)type cameraLoggingContext:(id)context;
- (void)logSundialShareSheetEntityTap:(long long)tap surface:(long long)surface moduleOverride:(id)override;
- (void)logSundialShareSheetPreviewBackButtonTap;
- (void)logSundialShareSheetCCPRowHiddenForReason:(long long)reason analyticsModule:(id)module;
- (void)logHideShareSheetRowWithUserSession:(id)session isCCPRowHidden:(BOOL)hidden extraData:(id)data analyticsModule:(id)module;
- (void)_logSundialShareSheetCCPRowStateWithIsHidden:(BOOL)hidden hiddenForReason:(long long)reason userSession:(id)session extraData:(id)data analyticsModule:(id)module;
@end

#endif /* IGCameraLogger_ShareSheet_h */