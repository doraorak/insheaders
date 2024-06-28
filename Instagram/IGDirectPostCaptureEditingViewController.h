//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPostCaptureEditingViewController_h
#define IGDirectPostCaptureEditingViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGDirectPostCaptureEditingControlsOverlayView.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGStoryPostCaptureEditingViewControllerDelegate-Protocol.h"
#include "IGStoryPostCaptureEditingViewControllerType-Protocol.h"
#include "IGStoryPreviewFooterViewDelegate-Protocol.h"
#include "IGStoryShareSheetMediaSnapshotView.h"
#include "IGSubscriptionToken-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class IGDirectLocalSendSpeedPerformanceLogger, IGDirectThreadMetadata, IGPartialModalSheetViewController, IGPerformanceMarker, IGStoryCreationDirectConfiguration, IGStoryMediaCompositionEditingViewController, IGUnifiedInboxRecipientTooltipDispatcher, IGUserSession, NSArray, NSMutableDictionary, NSString;

@interface IGDirectPostCaptureEditingViewController : IGViewController<IGPartialModalSheetListener, IGStoryPreviewFooterViewDelegate, UIGestureRecognizerDelegate, IGStoryPostCaptureEditingViewControllerType> {
  /* instance variables */
  IGUserSession *_userSession;
  IGStoryCreationDirectConfiguration *_directConfiguration;
  IGStoryMediaCompositionEditingViewController *_mediaCompositionEditingViewController;
  NSArray *_compositions;
  IGUnifiedInboxRecipientTooltipDispatcher *_viewModeTooltipDispatcher;
  BOOL _isSavingMedia;
  IGDirectThreadMetadata *_threadMetadata;
  IGPartialModalSheetViewController *_partialShareSheet;
  IGStoryShareSheetMediaSnapshotView *_mediaSnapshotView;
  NSObject<IGSubscriptionToken> *_token;
  NSMutableDictionary *_captionsForMediaComposition;
  IGDirectLocalSendSpeedPerformanceLogger *_localSendSpeedLogger;
  IGPerformanceMarker *_localSendSpeedMarker;
  BOOL _shouldDefaultToAllowReplayOnMultiSelect;
  BOOL _usesPillSendButton;
  BOOL _shouldHideMusicIconAndSticker;
  BOOL _shouldShowAddButtonInThumbnailTray;
  NSArray *_toolMenuOrderForLogging;
  long long _captureFormatIndexForLogging;
}

@property (readonly, nonatomic) IGDirectPostCaptureEditingControlsOverlayView *editingControlsOverlayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGStoryPostCaptureEditingViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSArray *captureToolsForLogging;
@property (nonatomic) unsigned long long userFlowInstanceID;
@property (readonly, nonatomic) NSArray *mediaCompositions;

/* instance methods */
- (id)initWithCompositions:(id)compositions directConfiguration:(id)configuration options:(id)options userSession:(id)session localSendSpeedPerformanceLogger:(id)logger;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (BOOL)canRespondToGesture:(id)gesture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaCompositionRegion;
- (void)previewFooterViewDidTapSend:(id)send isFromDynamicSharecut:(BOOL)sharecut;
- (void)_didTapPreviewFooterSendButton;
- (id)_foaLocalSendSpeedMarkerForMediaType;
- (void)previewFooterViewDidTapArrowButton:(id)button;
- (void)previewFooterViewDidTapCameraModeToggleViewSelector:(id)selector;
- (void)_didTapCancelButton:(id)button;
- (void)_didTapSaveButton:(id)button;
- (void)_didTapMetaAIButton:(id)aibutton;
- (void)privateStoriesShareSheetWillShare:(id)share;
- (id)privateStoriesShareSheetFinalMediaCompositionsForUpload:(id)upload;
- (void)privateStoriesShareSheetDidShare:(id)share storySendTarget:(long long)target storyModelArray:(id)array metadataArray:(id)array;
- (void)privateStoriesShareSheet:(id)sheet didSendToStoryTarget:(long long)target directRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array highlightIds:(id)ids exitPoint:(long long)point;
- (void)privateStoriesShareSheetDidToggleShareToCloseFriendsStory:(BOOL)story;
- (void)privateStoriesShareSheetDidToggleShareToFacebookStory:(BOOL)story;
- (void)privateStoriesShareSheetDidToggleShareToOpal:(BOOL)opal;
- (long long)privateStoriesShareSheetPrivacyDisclosureToShow:(id)show isCloseFriendShare:(BOOL)share;
- (void)directStoryFooterView:(id)view didChangeViewMode:(id)mode cameraModeSwitcherView:(id)view;
- (void)storyRemixAudioControlViewController:(id)controller didChangeSwitchWithIdentifier:(id)identifier toMuteState:(BOOL)state;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)previewFooterViewDidAttemptToPostStory:(id)story;
- (void)previewFooterViewDidTapFanClubOnly:(id)only isFromShortcut:(BOOL)shortcut;
- (void)previewFooterViewDidLongPressFanClub:(id)club;
- (void)previewFooterViewDidLongPressAddToStory:(id)story;
- (void)previewFooterViewDidTapAddToFavoritesOnly:(id)only;
- (void)previewFooterViewDidLongPressFavoritesOnly:(id)only;
- (void)previewFooterViewDidTapSharedListButton:(id)button sharedList:(id)list;
- (void)previewFooterViewDidTapAddToStory:(id)story;
- (void)previewFooterViewDidTapDownload:(id)download;
- (void)previewFooterView:(id)view didTapShareRollCallWithMutualsOnly:(BOOL)only;
- (void)previewFooterViewDidTapOpalOnly:(id)only;
- (void)previewFooterViewDidTapMessageButton:(id)button;
- (void)previewFooterViewDidTapMyWeekOnly:(id)only;
- (void)mediaCompositionEditingViewController:(id)controller validateInteractiveElementsWithErrorHandler:(id /* block */)handler;
- (void)mediaCompositionEditingViewController:(id)controller didFinishMagicModEditing:(id)editing;
- (void)mediaCompositionEditingViewController:(id)controller willBeginPositioningSticker:(id)sticker;
- (void)mediaCompositionEditingViewController:(id)controller didFinishPositioningSticker:(id)sticker deleted:(BOOL)deleted;
- (void)mediaCompositionEditingViewController:(id)controller didAddTextSticker:(id)sticker;
- (void)mediaCompositionEditingViewController:(id)controller didDeleteSticker:(id)sticker deleteVariant:(long long)variant;
- (void)mediaCompositionEditingViewController:(id)controller didTapLayerForTimedObject:(id)object;
- (void)mediaCompositionEditingViewController:(id)controller didTapSticker:(id)sticker;
- (void)mediaCompositionEditingViewController:(id)controller didTapMoreForTimedObject:(id)object;
- (BOOL)mediaCompositionEditingViewController:(id)controller shouldHandleStickerEdits:(id)edits;
- (void)mediaCompositionEditingViewController:(id)controller didBeginEditingTextView:(id)view;
- (void)mediaCompositionEditingViewController:(id)controller didFinishEditingTextView:(id)view;
- (void)mediaCompositionEditingViewController:(id)controller effectivePlaybackRateDidChange:(double)change;
- (void)mediaCompositionEditingViewController:(id)controller didLongPressBackgroundWithBoomerangConversionSupport:(BOOL)support;
- (void)mediaCompositionEditingViewController:(id)controller didPlayVideoToTime:(double)time;
- (void)mediaCompositionEditingViewControllerDidSetEffect:(id)effect;
- (void)mediaEditingViewControllerDidChangeChangeCurrentMediaCompositionIndex:(id)index;
- (void)mediaCompositionEditingViewController:(id)controller didUpdateAREffect:(BOOL)areffect;
- (void)mediaCompositionEditingViewController:(id)controller didBeginChangingSelectedRangeForTimedObject:(id)object;
- (void)mediaCompositionEditingViewController:(id)controller didChangeSelectedRangeForTimedObject:(id)object;
- (void)mediaCompositionEditingViewController:(id)controller didEndChangingSelectedRangeForTimedObject:(id)object;
- (id)mediaCompositionEditingViewController:(id)controller sectionControllerConfigForTimedObject:(id)object;
- (void)mediaCompositionEditingViewControllerDidFinishPositioningAndResizingMedia:(id)media;
- (BOOL)mediaCompositionEditingViewControllerIsInClipTransformMode:(id)mode;
- (struct METAMediaTransform { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; })mediaCompositionEditingViewController:(id)controller additionalMediaTransformAtMediaTime:(double)time;
- (void)mediaCompositionEditingViewControllerDidDismissCurrentMedia:(id)media;
- (void)mediaCompositionEditingViewController:(id)controller didTapMusicSticker:(id)sticker;
- (void)mediaCompositionEditingViewControllerDidTapEditBoomerangButton:(id)button;
- (void)mediaCompositionEditingViewControllerDrawingDidAppear:(id)appear;
- (void)mediaCompositionEditingViewControllerDrawingDidDismiss:(id)dismiss;
- (void)mediaCompositionEditingViewController:(id)controller didAddJoinChatSticker:(id)sticker;
- (void)mediaCompositionEditingViewController:(id)controller didChangeBoomerangSelectedFormatVariant:(id)variant;
- (void)mediaCompositionEditingViewController:(id)controller didPlayPauseMedia:(BOOL)media;
- (BOOL)mediaCompositionEditingViewControllerShouldResumePlayingMedia:(id)media;
- (void)mediaCompositionEditingViewControllerPlaybackDidFail:(id)fail withError:(id)error isFatalError:(BOOL)error;
- (BOOL)mediaCompositionEditingViewControllerShouldLoadStandaloneTracker:(id)tracker;
- (BOOL)mediaCompositionEditingViewController:(id)controller shouldBeginPositioningAndResizingMediaWithGesture:(id)gesture;
- (void)multiEditCompositionThumbnailTray:(id)tray didTapThumbnailAtIndex:(long long)index;
- (void)mediaCompositionViewDidDraw:(id)draw atPlayBackTime:(double)time;
- (void)mediaCompositionEditingViewController:(id)controller stickerCreationViewController:(id)controller willFinishEditingSticker:(id)sticker;
- (void)mediaCompositionEditingViewController:(id)controller didFinishEditingSticker:(id)sticker;
- (void)mediaCompositionEditingViewController:(id)controller willDisplayViewerPreviewFooter:(id)footer;
- (void)mediaCompositionEditingViewControllerDidTapAudioButton:(id)button shouldShowBottomSheet:(BOOL)sheet;
- (void)mediaCompositionEditingViewController:(id)controller didFinishEditingCaption:(id)caption;
- (void)mediaCompositionEditingViewController:(id)controller didTapEditTextOnPostCapture:(id)capture;
- (void)mediaCompositionEditingViewController:(id)controller cutoutVideoStickerIsLoaded:(BOOL)loaded;
- (void)mediaCompositionEditingViewController:(id)controller didTapTextToSpeechIconWith:(unsigned long long)with;
- (void)mediaCompositionEditingViewController:(id)controller preselectHighlightedCreationTool:(id)tool;
- (void)mediaCompositionEditingViewControllerDidRequestAddClips:(id)clips;
- (void)didTapAddButtonInMultiEditCompositionThumbnailTray:(id)tray;
- (id)captions;
- (void)didFinishEditingKaraokeCaptionStickerView:(id)view;
- (void)didEditCaptions:(id)captions;
- (void)didLoadCaptions:(id)captions;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersNavigationBarHidden;
- (long long)preferredTabBarBehavior;
- (void)mediaEditingViewControllerDidEnterTextEditingMode:(id)mode entryPoint:(long long)point;
- (void)mediaEditingViewControllerDidExitTextEditingMode:(id)mode text:(id)text mentionCount:(long long)count hashtagCount:(long long)count;
- (void)mediaEditingViewControllerDidChangeTextColor:(id)color colorSource:(long long)source color:(id)color;
- (void)mediaEditingViewControllerDidToggleTextEffect:(id)effect emphasisType:(long long)type isAppliedOnFullCaption:(BOOL)caption;
- (void)mediaEditingViewControllerDidToggleTextAnimation:(id)animation textFormatName:(id)name;
- (void)mediaEditingViewControllerDidToggleColorPickerFormatPickerButton:(id)button formatPickerSelected:(BOOL)selected;
- (void)mediaEditingViewControllerDidSelectTextAlignment:(id)alignment alignmentString:(id)string;
- (void)mediaEditingViewControllerDidSelectTextFormat:(id)format formatString:(id)string isNewlyCreated:(BOOL)created;
- (void)mediaEditingViewControllerEnterSelectTextFormat:(id)format;
- (void)mediaEditingViewController:(id)controller didApplyColorFilter:(id)filter;
- (void)mediaEditingViewController:(id)controller userDidChangeSelectedStateForTimedObject:(id)object;
- (void)mediaEditingViewController:(id)controller userAddedTimedObjectToCurrentComposition:(id)composition shouldLogApplySticker:(BOOL)sticker;
- (void)mediaEditingViewController:(id)controller userRemovedTimedObjectFromCurrentComposition:(id)composition deleteVariant:(long long)variant;
- (void)mediaEditingViewController:(id)controller userTappedTimedObject:(id)object;
- (void)mediaEditingViewControllerDidMakeSignificantEdit:(id)edit;
- (void)rollCallCreationViewController:(id)controller didCreateRollCallWithPromptText:(id)text trendingPromptId:(id)id recurringCadence:(unsigned long long)cadence;
- (void)rollCallCreationViewControllerDidFailToEditWithCompletion:(id /* block */)completion;
- (void)rollCallCreationViewControllerDidEditSucceedWithCompletion:(id /* block */)completion;
- (void)mediaCompositionEditingViewControllerDidBeginPositioningAndResizingMedia:(id)media;
- (void)insertMediaComposition:(id)composition atIndex:(long long)index;
- (void)deleteMediaCompositionAtIndex:(long long)index;
- (void)navigateToMediaCompositionAtIndex:(long long)index animated:(BOOL)animated;
- (void)setupAREffectControllerIfNeededWithEffectModel:(id)model;
- (void)cutoutSticker:(id)sticker isLoaded:(BOOL)loaded;
@end

#endif /* IGDirectPostCaptureEditingViewController_h */