//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryPostCaptureCameraTrayViewController_h
#define IGStoryPostCaptureCameraTrayViewController_h
@import Foundation;

#include "UIViewController.h"
#include "IGCameraEffectBottomSheetViewControllerDelegate-Protocol.h"
#include "IGCameraEffectCollectionDataSource-Protocol.h"
#include "IGCameraEffectCollectionDataSourceListener-Protocol.h"
#include "IGCameraEffectMiniGalleryCategoryProvider.h"
#include "IGCameraEffectMiniGalleryDataFetcher.h"
#include "IGCameraEffectMiniGalleryFeedDataProvider.h"
#include "IGCameraTrayViewController.h"
#include "IGCameraTrayViewControllerDataSource-Protocol.h"
#include "IGCameraTrayViewControllerDelegate-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGStoryCameraVariantSelectorViewController.h"

@class IGCameraEffectFooterView, IGPostCaptureARController, IGUserSession, NSArray, NSMutableSet, NSString, UIViewController;
@protocol IGStoryPostCaptureCameraTrayViewControllerDelegate;

@interface IGStoryPostCaptureCameraTrayViewController : UIViewController<IGCameraTrayViewControllerDelegate, IGCameraTrayViewControllerDataSource, IGCameraEffectCollectionDataSourceListener, IGPartialModalSheetListener, IGCameraEffectBottomSheetViewControllerDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGPostCaptureARController *_postCaptureARController;
  IGCameraTrayViewController *_cameraTrayViewController;
  IGCameraEffectFooterView *_footerView;
  NSArray *_trayItems;
  NSMutableSet *_loggedImpressionAREffectIDs;
  BOOL _isReels;
  NSObject<IGCameraEffectCollectionDataSource> *_dataSource;
  NSString *_loggingSessionID;
  long long _entryPoint;
  long long _surface;
  long long _captureType;
  UIViewController *_minigalleryInteractingViewController;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _minigalleryCaptureFrame;
  IGStoryCameraVariantSelectorViewController *_variantSelectorViewController;
  long long _defaultTrayIndex;
  IGCameraEffectMiniGalleryFeedDataProvider *_effectMiniGallerySavedFeedDataProvider;
  IGCameraEffectMiniGalleryFeedDataProvider *_effectMiniGalleryFeedDataProvider;
  IGCameraEffectMiniGalleryCategoryProvider *_effectMiniGalleryCategoryProvider;
  IGCameraEffectMiniGalleryDataFetcher *_effectMiniGalleryDataFetcher;
  BOOL _isComingFromSavedFeed;
}

@property (weak, nonatomic) NSObject<IGStoryPostCaptureCameraTrayViewControllerDelegate> *delegate;
@property (nonatomic) BOOL isAdsModeBoostStoryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session postCaptureARController:(id)arcontroller isReels:(BOOL)reels initialDataSource:(id)source minigalleryDataFetcher:(id)fetcher loggingSessionID:(id)id;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)cameraTrayViewController:(id)controller effectForIndex:(long long)index;
- (void)cameraTrayViewController:(id)controller didSelectItemAtIndex:(long long)index isManualSelection:(BOOL)selection;
- (void)cameraTrayViewController:(id)controller didScrollToItemAtIndex:(long long)index;
- (void)cameraTrayViewController:(id)controller didRequestRemovalOfAREffectWithID:(id)id;
- (void)cameraTrayViewController:(id)controller didConfirmSelectionAtIndex:(long long)index;
- (long long)numberOfItemsInCameraTrayViewController:(id)controller;
- (id)cameraTrayViewController:(id)controller accessibilityLabelForItemAtIndex:(long long)index;
- (id)cameraTrayViewController:(id)controller accessibilityIdentifierForItemAtIndex:(long long)index;
- (id)cameraTrayViewController:(id)controller accessibilityHintForItemAtIndex:(long long)index;
- (id)cameraTrayViewController:(id)controller imageURLForItemAtIndex:(long long)index isHighlighted:(BOOL)highlighted;
- (id)cameraTrayViewController:(id)controller imageProcessorForItemAtIndex:(long long)index;
- (id)cameraCustomDialViewForItemAtIndex:(long long)index;
- (BOOL)cameraTrayViewController:(id)controller shouldAllowMoreInfoAccessForItemAtIndex:(long long)index;
- (BOOL)cameraTrayViewController:(id)controller itemDisabledAtIndex:(long long)index;
- (BOOL)cameraTrayViewController:(id)controller itemPrivacyIncompatibleAtIndex:(long long)index;
- (BOOL)cameraTrayViewController:(id)controller isItemPersonalizedAvatarAtIndex:(long long)index;
- (id /* block */)cameraTrayViewController:(id)controller imageProviderForItemAtIndex:(long long)index isHighlighted:(BOOL)highlighted;
- (void)cameraTrayViewController:(id)controller willDisplayCellAtIndex:(long long)index;
- (void)didTapDisabledItemForCameraTrayViewController:(id)controller;
- (void)postCaptureControllerDidUpdateEffectList:(id)list;
- (void)arEffectSavingController:(id)controller didChangeSaveState:(unsigned long long)state forAREffectID:(id)id isFromMiniGallery:(BOOL)gallery;
- (void)collectionSaveDataProviderSaveStateUpdatedForAREffectId:(id)id;
- (void)cameraEffectFooterView:(id)view didToggleSaveButtonToSaveState:(BOOL)state;
- (void)cameraEffectFooterViewDidTapCloseButton:(id)button;
- (void)cameraEffectFooterViewDidTapTitle:(id)title;
- (void)cameraEffectCollectionDataSource:(id)source didUpdateUsingPage:(id)page resultSource:(long long)source;
- (void)cameraEffectCollectionDataSource:(id)source didFailWithError:(id)error resultSource:(long long)source;
- (void)cameraEffectMiniGalleryViewControllerDidClearSelection:(id)selection;
- (void)cameraEffectMiniGalleryViewController:(id)controller didSelectEffect:(id)effect;
- (void)cameraEffectMiniGalleryViewController:(id)controller logSelectedEffect:(id)effect index:(long long)index;
- (void)cameraEffectMiniGalleryViewControllerDidSwitchCategories:(id)categories;
- (void)cameraEffectMiniGalleryViewControllerDidTapSwitchCamera:(id)camera;
- (void)cameraEffectMiniGalleryViewControllerWillExitFullscreen:(id)fullscreen;
- (void)cameraEffectMiniGalleryViewControllerDidEnterFullscreen:(id)fullscreen;
- (void)cameraEffectMiniGalleryViewControllerWillDismiss:(id)dismiss;
- (void)cameraEffectMiniGalleryViewControllerDidLogImpressionForEffectID:(id)id;
- (BOOL)cameraEffectMiniGalleryViewControllerEffectIdIsLogged:(id)logged;
- (void)cameraEffectMiniGalleryPlusViewControllerLogImpressionForEffectID:(id)id categoryID:(id)id;
- (BOOL)cameraEffectMiniGalleryPlusViewControllerEffectIdIsLogged:(id)logged categoryID:(id)id;
- (void)partialModalSheetDidDismiss:(id)dismiss;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)cameraEffectBottomSheetViewController:(id)controller didRequestRemovalOfEffectWithID:(id)id completion:(id /* block */)completion;
- (id)cameraEffectBottomSheetViewControllerAttributionModelForCurrentAREffect:(id)areffect;
- (BOOL)cameraEffectBottomSheetViewControllerShouldPresentCamera:(id)camera;
- (long long)cameraEffectBottomSheetViewControllerCaptureType:(id)type;
- (long long)cameraEffectBottomSheetViewControllerSwitcherMode:(id)mode;
- (void)cameraEffectBottomSheetViewControllerDidTapTryIt:(id)it onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
- (void)cameraEffectBottomSheetViewControllerDidEnterFullscreenMode:(id)mode;
- (void)cameraEffectBottomSheetViewControllerDidLeaveFullscreenMode:(id)mode;
- (void)cameraEffectBottomSheetViewController:(id)controller didTapViewProductItem:(id)item;
- (void)cameraEffectBottomSheetViewController:(id)controller didToggleSaveToWishlist:(BOOL)wishlist showToast:(BOOL)toast;
- (void)cameraVariantSelectorViewControllerDidTapCustomItem:(id)item;
- (void)cameraVariantSelectorViewController:(id)controller didSelectItemAtIndex:(long long)index;
- (void)cameraVariantSelectorViewController:(id)controller didTapItemAtIndex:(long long)index;
- (void)cameraVariantSelectorViewController:(id)controller didChangeSelectedIndex:(long long)index;
- (void)cameraVariantSelectorViewController:(id)controller didEndScrollingAtIndex:(long long)index;
- (void)cameraVariantSelectorViewController:(id)controller didChangeSliderValue:(double)value;
@end

#endif /* IGStoryPostCaptureCameraTrayViewController_h */
