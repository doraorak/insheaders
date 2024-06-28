//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSidecarEditorViewController_h
#define IGSidecarEditorViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGApplicationWillEnterForegroundCriticalEventsListener-Protocol.h"
#include "IGFBFilterCollectionController.h"
#include "IGFBFilterCollectionControllerDelegate-Protocol.h"
#include "IGFBFilterTabCollectionController.h"
#include "IGFeedCreationFlowLogger.h"
#include "IGFeedEditorNavigationPerfComponents.h"
#include "IGFilterControlView.h"
#include "IGFilterControlViewDelegate-Protocol.h"
#include "IGFilterLogger.h"
#include "IGMediaLibraryViewControllerDelegate-Protocol.h"
#include "IGMiniMediaItemPicker.h"
#include "IGMiniMediaItemPickerDelegate-Protocol.h"
#include "IGShareMusicManager.h"
#include "IGSidecarCollectionController.h"
#include "IGSundialRoundButton.h"
#include "IGTransitionZoomFromCapable-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class IGComposition, IGCreationActionBar, IGCreationActionBarButton, IGCreationPostCaptureHeaderView, IGDSBlurView, IGPassthroughView, IGShareListManager, IGUserSession, NSArray, NSDictionary, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionView, UIImageView, UILabel, UIView;
@protocol IGSidecarEditorDelegate;

@interface IGSidecarEditorViewController : IGViewController<IGFBFilterCollectionControllerDelegate, IGFilterControlViewDelegate, IGMediaLibraryViewControllerDelegate, IGApplicationWillEnterForegroundCriticalEventsListener, IGMiniMediaItemPickerDelegate, UIViewControllerTransitioningDelegate, IGTransitionZoomFromCapable> {
  /* instance variables */
  IGFeedEditorNavigationPerfComponents *_perfComponents;
  NSMutableDictionary *_compositionEditsInfoForId;
  BOOL _isViewVisible;
  IGShareMusicManager *_musicManager;
  IGCreationActionBar *_actionBar;
  IGCreationPostCaptureHeaderView *_headerView;
  NSArray *_galleryFetchRequests;
  BOOL _needsFetchAssets;
  BOOL _shouldDisableReorderingFilters;
  IGDSBlurView *_reorderBlurView;
  IGCreationActionBarButton *_reorderDoneButton;
  UIImageView *_deleteImageView;
  UIView *_reorderingDeleteMediaView;
  UIView *_reorderingCircularDeleteView;
  IGCreationActionBarButton *_reorderCloseButton;
  IGPassthroughView *_longPressToReorderNux;
  BOOL _hideMediaLayerButtons;
  IGMiniMediaItemPicker *_suggestedMusicPicker;
  IGCreationActionBar *_filterCollectionViewConfirmationTray;
  UIView *_defaultCreationTray;
  IGSundialRoundButton *_toggleAspectRatioButton;
  NSString *_previouslySelectedFilterIdentifier;
  double _previouslySelectedFilterStrength;
  BOOL _hasReorderedAssets;
  BOOL _didReorderTray;
  UIBarButtonItem *_backButton;
  UICollectionView *_filterCollectionView;
  IGFBFilterCollectionController *_fbFilterTrayController;
  IGFBFilterTabCollectionController *_fbFilterTabController;
  IGFilterControlView *_filterControlView;
  NSMutableDictionary *_adjustedFilterStrengthValues;
  NSString *_filterThumbnailsAssetID;
  UIView *_filterContainerView;
  IGSidecarCollectionController *_mediaCollectionController;
  long long _editingIndex;
  UIView *_audioStatusOverlayView;
  UILabel *_audioStatusLabel;
  NSMutableDictionary *_analyticsExtra;
  IGFilterLogger *_filterLogger;
}

@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (retain, nonatomic) IGComposition *composition;
@property (nonatomic) double mediaAspectRatio;
@property (copy, nonatomic) NSString *filterIdentifier;
@property (readonly, nonatomic) IGShareListManager *shareListManager;
@property (readonly, nonatomic) BOOL mediaLayeringEnabled;
@property (readonly, nonatomic) IGFeedCreationFlowLogger *logger;
@property (weak, nonatomic) NSObject<IGSidecarEditorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *magicMoveSubviews;

/* instance methods */
- (id)initWithComposition:(id)composition shareListManager:(id)manager userSession:(id)session logger:(id)logger;
- (id)initWithGalleryFetchRequests:(id)requests previewImages:(id)images userSession:(id)session logger:(id)logger;
- (BOOL)prefersStatusBarHidden;
- (BOOL)allowsNavigationGestureForGestureOrigin:(struct CGPoint { double x0; double x1; })origin;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (id)_createMusicManager;
- (void)_buildMusicPickerTray;
- (void)viewWillAppear:(BOOL)appear;
- (void)_updateSuggestedMusicPickerWithSelectedAudio:(id)audio;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)applicationWillEnterForegroundListener;
- (void)_updateDebugComposition;
- (void)sidecarCollectionControllerDidTapAddCell:(id)cell;
- (void)sidecarCollectionController:(id)controller didSelectCellAtIndex:(long long)index;
- (void)sidecarCollectionController:(id)controller didReorderAssetsWithFirstAsset:(id)asset;
- (void)sidecarCollectionControllerWillBeginReorderingAssets:(id)assets canDelete:(BOOL)delete;
- (void)sidecarCollectionControllerDidBeginReorderingAssets:(id)assets canDelete:(BOOL)delete;
- (void)sidecarCollectionControllerWillFinishReorderingAssets:(id)assets orderChanged:(BOOL)changed canDelete:(BOOL)delete;
- (void)_setReorderingDeleteMediaViewHidden:(BOOL)hidden;
- (void)sidecarCollectionControllerDidLongPress:(id)press;
- (void)sidecarCollectionControllerDidDeleteItem:(id)item;
- (void)sidecarCollectionController:(id)controller draggedIntoDeleteZone:(BOOL)zone;
- (void)_resizeReorderingDeleteMediaViewOnDraggedIntoDeleteZone:(BOOL)zone;
- (void)sidecarCollectionController:(id)controller didCenterMediaMetadataAsset:(id)asset;
- (void)sidecarCollectionController:(id)controller didCenterAssetWithIndex:(long long)index isPhoto:(BOOL)photo;
- (void)sidecarCollectionControllerDidFinishScrolling:(id)scrolling centeredAssetIsPhoto:(BOOL)photo;
- (void)sidecarCollectionControllerDidScroll:(id)scroll;
- (BOOL)sidecarCollectionController:(id)controller viewOverlapsDeleteZone:(id)zone;
- (id)sidecarCollectionController:(id)controller filterIdentifierForId:(long long)id;
- (void)shareViewControllerDidAppear:(id)appear;
- (void)shareViewControllerDidCancel:(id)cancel;
- (void)shareViewControllerWillFinish:(id)finish;
- (void)shareViewControllerDidFinish:(id)finish withCompletion:(id /* block */)completion;
- (void)fbFilterControllerWillGenerateFilterPreview:(id)preview;
- (void)fbFilterControllerDidGenerateFilterPreview:(id)preview;
- (void)fbFilterController:(id)controller didSelectFilterWithIdentifier:(id)identifier willScroll:(BOOL)scroll;
- (void)fbFilterController:(id)controller didSelectFilterStrengthForIdentifier:(id)identifier;
- (void)fbFilterControllerDidStartReordering:(id)reordering;
- (void)filterControlViewDidPressCancel:(id)cancel;
- (void)filterControlViewDidPressDone:(id)done;
- (void)filterControlView:(id)view didChangeValue:(double)value;
- (void)filterControlViewDidStartDragging:(id)dragging;
- (void)filterControlViewDidEndDragging:(id)dragging;
- (void)filterControlViewNeedUpdateValue;
- (void)filterControlView:(id)view didChangeTintColor:(unsigned long long)color withTintType:(unsigned long long)type;
- (void)filterControlView:(id)view didChangeTintIntensity:(double)intensity tintType:(unsigned long long)type;
- (void)mediaLibraryViewControllerDidCancel:(id)cancel;
- (void)mediaLibraryViewController:(id)controller didProduceComposition:(id)composition;
- (void)mediaLibraryViewController:(id)controller didProduceSingleLivePhotoVideoMetadata:(id)metadata;
- (void)photoEditorDidCancel:(id)cancel;
- (void)photoEditor:(id)editor didProduceDraftForViewController:(id)controller;
- (void)photoEditor:(id)editor didProducePhotoWithMediaMetadata:(id)metadata shareListManager:(id)manager;
- (void)suggestedMediaItemPicker:(id)picker didUpdateLoadingState:(BOOL)state;
- (void)suggestedMediaItemPicker:(id)picker didUpdateSelectedMediaItem:(id)item;
- (void)suggestedMediaItemPicker:(id)picker didTapCurrentlySelectedMediaItem:(id)item;
- (void)suggestedMediaItemPicker:(id)picker willDisplayMediaItem:(id)item;
- (void)suggestedMediaItemPickerDidTapSearchButton:(id)button;
- (void)_showAudioTrayNuxesIfNeeded;
- (void)videoEditorDidCancel:(id)cancel;
- (void)videoEditor:(id)editor didProduceDraftPreview:(id)preview;
- (void)videoEditor:(id)editor didProduceVideoWithMetadata:(id)metadata shareListManager:(id)manager;
- (void)_toggleAudioMute:(id)mute;
- (void)_updateDefaultCreationTray;
- (void)_musicButtonTapped;
- (void)_textButtonTapped;
- (void)_galleryStickerButtonTapped;
- (void)_stickerButtonTapped;
- (void)_done;
- (void)_cancel;
- (void)shareMusicManagerDidFetchSuggestedAudioTitles:(id)titles;
- (void)shareMusicManagerDidSelectAudio:(id)audio audioStatusChanged:(BOOL)changed;
- (void)shareMusicManagerWillDismissBrowser:(id)browser;
- (void)shareMusicManagerDidCancelSelectingAudio:(id)audio;
- (void)shareMusicManagerDidRemoveSelectedAudio:(id)audio;
- (void)shareMusicManagerWillPresentAudioEditor:(id)editor;
- (void)shareMusicManagerDidDismissAudioEditor:(id)editor;
- (void)zoomTransitionWillPrepareWithContext:(id)context;
- (void)zoomTransitionWillBeginWithContext:(id)context;
- (BOOL)shouldZoomFromTransition;
- (void)prepareBackwardZoomTransitionWithContext:(id)context completionHandler:(id /* block */)handler;
- (id)transitionZoomViewFromItem:(id)item withZoomContext:(id)context shouldMoveToVisiblePosition:(BOOL)position;
- (void)didCompleteBackwardZoomTransition;
- (void)_toggleAspectRatio;
- (BOOL)_isAllMediaSameAspectRatio;
- (unsigned long long)_currentAspectRatioType;
- (void)_makeImagesSquareAspectRatio;
- (void)_makeImagesMixedAspectRatio;
- (void)_reloadPhotosOnFirstMediaChangeForType:(unsigned long long)type;
- (void)_previewButtonTapped;
- (void)_filtersButtonTapped;
- (void)_confirmAndDismissFiltersCollectionTray;
- (void)_cancelAndDismissFiltersCollectionTray;
- (void)_presentTool:(id)tool dismissTool:(id)tool;
- (void)_addMediaButtonTapped;
- (void)_reorderButtonTapped;
- (void)_didTapReorderDoneButton;
- (void)_setReorderViewHidden:(BOOL)hidden;
- (void)_showLongPressToReorderNux;
- (void)_setLongPressToReorderNuxHidden:(BOOL)hidden withCompletion:(id /* block */)completion;
@end

#endif /* IGSidecarEditorViewController_h */