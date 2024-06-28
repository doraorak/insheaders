//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMusicStickerEditor_h
#define IGMusicStickerEditor_h
@import Foundation;

#include "UIViewController.h"
#include "IGAlertHUDHandling-Protocol.h"
#include "IGAnalyticsModule-Protocol.h"
#include "IGAnimatedStickerModel.h"
#include "IGAsyncTask.h"
#include "IGAudioEditorClipDurationPicker.h"
#include "IGAudioLoadingScreen.h"
#include "IGAudioMusicTrack.h"
#include "IGAudioPlayer.h"
#include "IGAudioPlayerLatencyLogger.h"
#include "IGAudioPlayerListener-Protocol.h"
#include "IGAudioStatusChangeListener-Protocol.h"
#include "IGAvatarGridViewControllerDelegate-Protocol.h"
#include "IGGestureHandler-Protocol.h"
#include "IGMusicStickerEditorControlsOverlayView.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGStickerBundleView.h"
#include "IGStoryMediaPlaybackControllerProtocol-Protocol.h"
#include "IGStoryPrecaptureMusicBrowserViewController.h"
#include "IGStoryStickerEditingViewControllerProtocol-Protocol.h"
#include "IGTimerTooltipLabelView.h"
#include "IGUserAvatarStatusListener-Protocol.h"
#include "IGUserSession.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UILabel, UISelectionFeedbackGenerator, UITapGestureRecognizer, UIView;
@protocol IGMusicStickerEditorDelegate, UIView<IGStoryMusicStickerProtocol;

@interface IGMusicStickerEditor : UIViewController<IGPartialModalSheetListener, IGAudioStatusChangeListener, IGAudioPlayerListener, IGUserAvatarStatusListener, IGAvatarGridViewControllerDelegate, UIGestureRecognizerDelegate, IGAnalyticsModule, IGGestureHandler, IGStoryStickerEditingViewControllerProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  IGStoryPrecaptureMusicBrowserViewController *_cachedMusicBrowserViewController;
  IGAudioEditorClipDurationPicker *_clipDurationPicker;
  IGAudioMusicTrack *_musicTrack;
  IGAudioMusicTrack *_previousMusicTrack;
  IGAudioPlayer *_audioPlayer;
  BOOL _isFromSundial;
  UIView *_dimmingView;
  IGAudioLoadingScreen *_loadingIndicator;
  IGMusicStickerEditorControlsOverlayView *_controlsOverlayView;
  UIView *_musicStickerWrapperView;
  UITapGestureRecognizer *_musicStickerWrapperViewTapGesture;
  IGAsyncTask *_lyricsFetchTask;
  UISelectionFeedbackGenerator *_feedbackGenerator;
  UILabel *_hiddenMusicStyleLabel;
  UITapGestureRecognizer *_avatarStickerTapGesture;
  IGStickerBundleView *_avatarStickerView;
  IGTimerTooltipLabelView *_avatarTooltipLabelView;
  BOOL _isEditingExistingMusicSticker;
  NSObject<IGAlertHUDHandling> *_noLyricsBannerHandler;
  BOOL _isExiting;
  BOOL _didTapCancelButton;
  IGAudioPlayerLatencyLogger *_musicPreviewLatencyLogger;
  double _currentMusicBPM;
  long long _currentMusicBeatDelayInMS;
  IGAnimatedStickerModel *_currentAnimatedStickerModel;
  BOOL _audioPlayerWillHandleBackgroundBehavior;
  BOOL _isPartialModalActive;
  BOOL _isMusicStickerPermanent;
  long long _templatizableStickerState;
}

@property (nonatomic) double clipDuration;
@property (nonatomic) double clipStartTime;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL isScrubbing;
@property (retain, nonatomic) UIView<IGStoryMusicStickerProtocol> *musicStickerView;
@property (nonatomic) BOOL isShowingLoadingIndicator;
@property (weak, nonatomic) NSObject<IGMusicStickerEditorDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGStoryMediaPlaybackControllerProtocol> *storyMediaPlaybackController;
@property (nonatomic) BOOL clipDurationPickerEnabled;
@property (retain, nonatomic) UIColor *stickerColor;
@property (nonatomic) BOOL wasAvatarDeattachedInCurrentEditingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *backgroundViews;
@property (readonly, nonatomic) UIView *editableStickerView;
@property (readonly, nonatomic) double editableStickerScaleWhileEditing;
@property (readonly, nonatomic) BOOL editableStickerViewIsNewlyCreated;
@property (readonly, nonatomic) BOOL shouldDisableZoomTransitionOnEditStart;
@property (readonly, nonatomic) BOOL shouldDiscardStickerOnDismissal;
@property (readonly, nonatomic) NSString *stickerEditSessionLoggingId;
@optional
@property (readonly, nonatomic) NSArray *secondaryEditableStickerViews;

/* instance methods */
- (id)initWithMusicTrackClip:(id)clip musicSticker:(id)sticker storyMediaPlaybackController:(id)controller isFromSundial:(BOOL)sundial isMusicStickerPermanent:(BOOL)permanent userSession:(id)session;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidAppear:(BOOL)appear;
- (void)_applicationDidEnterBackground:(id)background;
- (void)_applicationWillResignActive:(id)active;
- (void)_applicationDidEnterForeground:(id)foreground;
- (void)viewDidLayoutSubviews;
- (void)_didTapCancelButton:(id)button;
- (void)_didTapDoneButton:(id)button;
- (void)_didTapPlayPauseButton:(id)button;
- (void)_didTapAvatarSticker:(id)sticker;
- (void)avatarGridDidTapClose:(id)close;
- (void)avatarGridShouldNavigateToAvatarEditor:(id)editor;
- (void)avatarGrid:(id)grid didSelectAvatar:(id)avatar staticSticker:(id)sticker;
- (void)avatarGrid:(id)grid didSelectAvatar:(id)avatar animatedSticker:(id)sticker;
- (void)avatarGrid:(id)grid shouldNavigateToAvatarGridOfUser:(id)user pogPosition:(long long)position source:(long long)source;
- (void)avatarGrid:(id)grid willHitImpression:(id)impression;
- (void)avatarGrid:(id)grid hasStickers:(BOOL)stickers;
- (void)avatarGrid:(id)grid searchWithText:(id)text;
- (void)avatarGrid:(id)grid error:(id)error;
- (void)avatarGrid:(id)grid didLongPressStickerWithId:(id)id enableReportingOptions:(BOOL)options enableFavoriteOptions:(BOOL)options useContextMenuReportFlow:(BOOL)flow cellContentView:(id)view;
- (void)avatarGridShouldNavigateToAvatarEmotesListView:(id)view avatarEmotesListVC:(id)vc;
- (void)avatarStatusManagerDidCreateAvatar:(id)avatar;
- (void)avatarStatusManager:(id)manager didUpdateAvatarStatus:(long long)status;
- (void)avatarStatusManagerDidDeleteAvatar:(id)avatar;
- (void)avatarStatusManagerDidUpdateAvatar:(id)avatar;
- (void)quickScrubberViewDidBeginSliding:(id)sliding;
- (void)quickScrubberViewDidEndSliding:(id)sliding;
- (void)quickScrubberView:(id)view didSlideToTime:(double)time;
- (void)mainScrubberView:(id)view didBeginScrollingAtTime:(double)time;
- (void)mainScrubberView:(id)view didEndScrollingToTime:(double)time;
- (void)mainScrubberView:(id)view didScrollToTime:(double)time;
- (void)musicStickerLyricsScrubberViewDidBeginScrubbing:(id)scrubbing;
- (void)musicStickerLyricsScrubberViewDidEndScrubbing:(id)scrubbing;
- (void)musicStickerLyricsScrubberView:(id)view didScrollToTime:(double)time;
- (void)musicStickerLyricsScrubberViewDidUpdateActiveCell:(id)cell;
- (void)_didTapColorPaletteButton:(id)button;
- (void)_didTapMusicSticker:(id)sticker;
- (void)_didUpdateSelectedStickerStyle:(id)style;
- (void)_didTapClipDurationButton:(id)button;
- (void)clipDurationPicker:(id)picker didSelectClipDuration:(long long)duration;
- (void)clipDurationPickerDidCancel:(id)cancel;
- (void)_didTapAvatarToggleButton:(id)button;
- (void)_didTapAlbumArtButton:(id)button;
- (void)precaptureMusicBrowserViewControllerDidCancel:(id)cancel;
- (void)precaptureMusicBrowserViewController:(id)controller didSelectAudioTrack:(id)track;
- (void)audioBrowserViewController:(id)controller didTapAudioTrack:(id)track context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)audioBrowserViewController:(id)controller didSelectAudioTrack:(id)track;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)_updateMusicStickerViewWithMusicTrackClip:(id)clip selectedStyle:(long long)style;
- (void)audioStatusDidChangeIsAudioEnabled:(BOOL)enabled forReason:(long long)reason;
- (void)audioPlayerDidLoadAudio:(id)audio;
- (void)audioPlayerDidBeginPlaying:(id)playing;
- (void)audioPlayer:(id)player didUpdatePlaybackProgress:(double)progress;
- (void)audioPlayerDidPlayToEnd:(id)end;
- (void)audioPlayer:(id)player didFailWithError:(id)error;
- (void)audioPlayerWillPrepareAudio:(id)audio;
- (void)audioPlayerDidPrepareAudio:(id)audio;
- (void)audioPlayerDidPause:(id)pause;
- (void)audioPlayerDidStall:(id)stall;
- (void)audioPlayerDidStop:(id)stop;
- (void)audioPlayer:(id)player didToggleAudioStatus:(BOOL)status withReason:(long long)reason;
- (BOOL)canRespondToGesture:(id)gesture;
- (BOOL)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (id)analyticsModule;
- (void)_didTapTextEmphasisToggleButton:(id)button;
- (void)_seekAudioPlayerIfLoadedToTime:(double)time;
- (BOOL)isPlaying;
@end

#endif /* IGMusicStickerEditor_h */