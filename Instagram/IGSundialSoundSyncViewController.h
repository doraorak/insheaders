//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialSoundSyncViewController_h
#define IGSundialSoundSyncViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGAudioModelProtocol-Protocol.h"
#include "IGCameraEffectCollectionDataSourceListener-Protocol.h"
#include "IGMiniMediaItemPicker.h"
#include "IGMiniMediaItemPickerDelegate-Protocol.h"
#include "IGSoundSyncCompositionPreviewView.h"
#include "IGSundialSoundSyncDebugView.h"
#include "IGSundialSoundSyncNavigator-Protocol.h"
#include "_TtC31IGVideoEffectPlaybackController31IGVideoEffectPlaybackController.h"

@class IGAsyncTask, IGAudioBrowserCameraLogger, IGBouncyTextButton, IGCameraEffectCollectionDataProvider, IGSegmentedTabControl, IGStoryMediaLoadingIndicatorView, IGTapButton, IGUserSession, NSString, UIControl, UIImage, UIImpactFeedbackGenerator, UILabel, UIView, _TtC19IGMLContextualMusic19IGMLContextualMusic;

@interface IGSundialSoundSyncViewController : UIViewController<IGCameraEffectCollectionDataSourceListener, IGMiniMediaItemPickerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGAsyncTask *_originalCompositionTask;
  unsigned long long _backIcon;
  UILabel *_audioTitle;
  UILabel *_audioDescription;
  UIView *_audioDescriptionBackground;
  IGTapButton *_backButton;
  IGBouncyTextButton *_auxiliaryButton;
  IGBouncyTextButton *_tapToCutButton;
  UIControl *_nextButton;
  IGSegmentedTabControl *_musicAndEffectsTabControl;
  UIView *_tabControlContentViewsContainer;
  IGMiniMediaItemPicker *_effectsPicker;
  UIView *_effectsPickerDisabledView;
  IGMiniMediaItemPicker *_suggestedMusicPicker;
  IGAsyncTask *_suggestedSongsRequest;
  IGCameraEffectCollectionDataProvider *_collectionDataProvider;
  IGAsyncTask *_effectsRequest;
  IGAsyncTask *_audioBrowserCatalogRequest;
  IGAudioBrowserCameraLogger *_audioBrowserCameraLogger;
  IGAsyncTask *_imageTasks;
  _TtC31IGVideoEffectPlaybackController31IGVideoEffectPlaybackController *_videoEffectPlaybackController;
  IGStoryMediaLoadingIndicatorView *_loadingIndicatorView;
  IGAsyncTask *_videoTrimmingFetchTask;
  struct { IGStrictUserFlowLogger *strictLogger; unsigned long long userFlowInstanceId; } _applyAudioLogger;
  UIImpactFeedbackGenerator *_impactGenerator;
  IGSundialSoundSyncDebugView *_soundSyncDebugView;
  UIImage *_compositionPreviewImage;
  _TtC19IGMLContextualMusic19IGMLContextualMusic *_contextualMusic;
  BOOL _hasSkipped;
  BOOL _shouldReloadOnNextAppear;
  BOOL _useUnifiedRendering;
  BOOL _assetsContainVideo;
  BOOL _numberOfAssetsInRangeForLayoutEffects;
  NSObject<IGAudioModelProtocol> *_selectedMusicTrack;
  NSObject<IGSundialSoundSyncNavigator> *_navigator;
  unsigned long long _auxiliaryButtonType;
  IGSoundSyncCompositionPreviewView *_compositionPreviewView;
  IGAsyncTask *_compositionCreationTask;
}

@property (retain, nonatomic) NSString *surface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithComposition:(id)composition suggestedMusicTask:(id)task compositionPreviewImage:(id)image audioBrowserCameraLogger:(id)logger soundSyncEntryPoint:(unsigned long long)point userSession:(id)session layoutEffectImagesTask:(id)task;
- (id)initWithComposition:(id)composition suggestedMusicTask:(id)task compositionPreviewImage:(id)image userSession:(id)session useUnifiedRendering:(BOOL)rendering;
- (id)initWithCompositionTask:(id)task suggestedMusicTask:(id)task compositionPreviewImage:(id)image audioBrowserCameraLogger:(id)logger userSession:(id)session soundSyncEntryPoint:(unsigned long long)point;
- (id)initWithCompositionTask:(id)task suggestedMusicTask:(id)task compositionPreviewImage:(id)image audioBrowserCameraLogger:(id)logger userSession:(id)session backIcon:(unsigned long long)icon soundSyncEntryPoint:(unsigned long long)point useUnifiedRendering:(BOOL)rendering layoutEffectImagesTask:(id)task;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)suggestedMediaItemPicker:(id)picker didUpdateLoadingState:(BOOL)state;
- (void)suggestedMediaItemPicker:(id)picker didUpdateSelectedMediaItem:(id)item;
- (void)suggestedMediaItemPicker:(id)picker didTapCurrentlySelectedMediaItem:(id)item;
- (void)suggestedMediaItemPickerDidTapSearchButton:(id)button;
- (void)suggestedMediaItemPicker:(id)picker willDisplayMediaItem:(id)item;
- (void)audioBrowserViewController:(id)controller didTapAudioTrack:(id)track context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)audioBrowserViewController:(id)controller didSelectAudioTrack:(id)track;
- (void)_didTapBackButton;
- (void)_didTapAuxiliaryButton;
- (void)_didTapTapToCutButton;
- (void)_didTapSkipButton;
- (void)_didTapNextButton;
- (void)_musicAndEffectsTabControlValueChanged:(id)changed;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersNavigationBarHidden;
- (void)sundialShareSheetViewController:(id)controller willBeginUploadingComposition:(id)composition withPostId:(id)id;
- (void)sundialShareSheetViewController:(id)controller didShareComposition:(id)composition toDestination:(long long)destination withPostId:(id)id shareOnFacebookPreferences:(id)preferences;
- (void)sundialShareSheetViewControllerDidTapBackButton:(id)button;
- (void)sundialShareSheetViewControllerDidTapCancelButton:(id)button;
- (void)sundialShareSheetViewControllerDidTapEditButton:(id)button;
- (void)sundialShareSheetViewController:(id)controller didSaveDraft:(id)draft;
- (void)sundialShareSheetViewController:(id)controller didUpdateCaption:(id)caption;
- (void)sundialShareSheetViewController:(id)controller didUpdateCaptionAddOn:(id)on;
- (void)sundialShareSheetViewController:(id)controller didUpdateShareToFeed:(BOOL)feed;
- (void)sundialShareSheetViewController:(id)controller didUpdateShareToReels:(BOOL)reels;
- (void)sundialShareSheetViewController:(id)controller didUpdateSponsorPartner:(id)partner;
- (void)sundialShareSheetViewController:(id)controller didUpdateBrandedContent:(id)content;
- (void)sundialShareSheetViewController:(id)controller didUpdateShoppingMetadata:(id)metadata;
- (void)sundialShareSheetViewController:(id)controller didUpdateContentFunding:(id)funding;
- (void)sundialShareSheetViewControllerDidTapRemoveMusic:(id)music;
- (void)sundialShareSheetViewController:(id)controller didToggleFullscreenCaptionMode:(BOOL)mode;
- (void)cameraEffectCollectionDataSource:(id)source didUpdateUsingPage:(id)page resultSource:(long long)source;
- (void)cameraEffectCollectionDataSource:(id)source didFailWithError:(id)error resultSource:(long long)source;
@end

#endif /* IGSundialSoundSyncViewController_h */