//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCameraOverlayViewProtocol_Protocol_h
#define IGStoryCameraOverlayViewProtocol_Protocol_h
@import Foundation;

@protocol IGStoryCameraOverlayViewProtocol <NSObject>

@property (nonatomic) BOOL effectSliderRevealsLeft;
@property (readonly, nonatomic) IGStoryLiveOverlayView *liveOverlayView;
@property (readonly, nonatomic) UIView<IGStoryCameraFooterViewProtocol> *footerView;
@property (nonatomic) BOOL showLiveElements;
@property (nonatomic) BOOL captureElementsEnabled;
@property (nonatomic) long long sourceMediaOverlayStyle;
@property (weak, nonatomic) NSObject<IGStoryCameraOverlayViewDelegate> *delegate;
@property (readonly, nonatomic) UIView *formatContainerView;
@property (readonly, nonatomic) UIView<IGStoryCameraHeaderViewType> *headerView;
@property (retain, nonatomic) UIView *permissionsView;
@property (retain, nonatomic) UIView *embeddedPermissionsView;
@property (retain, nonatomic) IGCameraToolsMenu *toolsMenu;
@property (retain, nonatomic) UIView *variantSelectorView;
@property (retain, nonatomic) UIView *nativeAREffectSliderView;
@property (readonly, nonatomic) IGCameraInstructionView *instructionView;
@property (weak, nonatomic) NSObject<IGCameraTrayDataSource> *trayDataSource;
@property (weak, nonatomic) NSObject<IGCameraTrayDelegate> *trayDelegate;
@property (weak, nonatomic) NSObject<IGCameraTrayCaptureDelegate> *trayCaptureDelegate;
@property (weak, nonatomic) NSObject<IGCameraTraySelectionDelegate> *traySelectionDelegate;
@property (readonly, nonatomic) UILongPressGestureRecognizer *trayLongPressGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *trayTapGestureRecognizer;
@property (readonly, nonatomic) UIView *trayViewForTransition;
@property (readonly, nonatomic) long long selectedTrayItemIndex;
@property (readonly, nonatomic) long long highlightedTrayItemIndex;
@property (readonly, nonatomic) NSArray *indicesForVisibleTrayItems;
@property (retain, nonatomic) UIView<IGDialMagnifierViewType> *trayShutterView;
@property (nonatomic) BOOL stacksTitleAndSubtitle;
@property (nonatomic) BOOL isTrayTitleInteractionEnabled;
@property (nonatomic) BOOL isTrayTitleChevronHidden;
@property (nonatomic) long long traySubtitleLineBreakMode;
@property (retain, nonatomic) NSAttributedString *traySubtitle;
@property (retain, nonatomic) NSAttributedString *trayTitle;
@property (readonly, nonatomic) BOOL isTrayScrolling;
@property (nonatomic) BOOL isTrayHidden;
@property (readonly, nonatomic) IGDialView *trayView;
@property (readonly, nonatomic) UIView *supButton;
@property (readonly, nonatomic) IGCameraAudienceInfoView *audienceInfoView;
@property (readonly, nonatomic) BOOL peripheralTrayCellsHidden;
@property (readonly, nonatomic) BOOL isGalleryButtonVisible;
@property (nonatomic) long long bottomLeftButtonType;
@property (nonatomic) BOOL isTrayTitleFontBold;
@property (nonatomic) double trayTitleAlpha;
@property (nonatomic) double traySubtitleAlpha;
@property (nonatomic) BOOL trayTitleSavedState;
@property (nonatomic) BOOL trayTitleBackgroundHidden;
@property (nonatomic) BOOL trayTitleSaveButtonHidden;
@property (nonatomic) BOOL trayTitleCloseButtonHidden;

/* instance methods */
- (void)removeCaptureThumbnails;
- (void)addCaptureThumbnail:(id)thumbnail;
- (void)setCurrentCaptureThumbnailRecordingProgress:(double)progress;
- (void)setControlsHidden:(BOOL)hidden hideCloseButton:(BOOL)button;
- (void)showShutterWithWillTransitionToPostcapture:(BOOL)postcapture;
- (void)dismissShutterIfNeededAnimated:(BOOL)animated;
- (BOOL)isShowingShutter;
- (void)setAudioButtonHidden:(BOOL)hidden;
- (void)hideLiveGameAREffectNUXDismissedByUser:(BOOL)user;
- (void)showAvatarAREffectNUX;
- (void)hideAvatarAREffectNUXDismissedByUser:(BOOL)user;
- (void)setIsLoading:(BOOL)loading;
- (void)setTitle:(id)title;
- (void)setTitleLabelHidden:(BOOL)hidden;
- (void)setCountdownCount:(long long)count;
- (void)resetTrayCaptureState;
- (void)setPeripheralTrayCellsHidden:(BOOL)hidden animated:(BOOL)animated;
- (void)setPeripheralTrayCellsDisabled:(BOOL)disabled;
- (void)selectTrayItemAtIndex:(long long)index animated:(BOOL)animated usingData:(id)data;
- (void)reloadTrayData;
- (void)setGalleryPermissionUpdated;
- (void)setGalleryButtonWithDraftImage:(id)image animated:(BOOL)animated;
- (void)setGalleryButtonBadgeVisible:(BOOL)visible;
- (void)setShoppingBadgeCount:(unsigned long long)count;
- (void)updateToDefaultGalleryPreviewImage;
- (void)configureWithAudienceTrayItem:(id)item;
- (void)transitionToBottomLeftButtonType:(long long)type fromType:(long long)type percentage:(double)percentage;
- (void)setBottomLeftAndRightButtonsEnabled:(BOOL)enabled;
- (void)setBottomLeftAndRightButtonsHidden:(BOOL)hidden;
- (void)setBottomLeftButtonDimmed:(BOOL)dimmed;
- (void)setBottomButtonsHidden:(BOOL)hidden;
- (void)setModeSwitcherVisible:(BOOL)visible animated:(BOOL)animated;
- (void)setToolsMenuVisible:(BOOL)visible animated:(BOOL)animated;
- (void)setSUPButtonVisible:(BOOL)visible;
- (void)resetSUPButton;
- (void)setDraftSavedNUXShown:(BOOL)nuxshown;
- (long long)currentModeIndex;
- (void)setMemoryErrorButtonHidden:(BOOL)hidden;
- (id)handIndicatorView;
- (void)showHandIndicatorWithDetectedHand:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hand didFinish:(id /* block */)finish;
- (void)hideHandIndicator;
- (void)setAvailableCameraSwitcherModes:(id)modes withSelectedMode:(id)mode;
- (void)logImpressionsForVisibleFooterTools;
- (void)pauseObservingGallery;
- (void)resumeObservingGallery;
@end

#endif /* IGStoryCameraOverlayViewProtocol_Protocol_h */