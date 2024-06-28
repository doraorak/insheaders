//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC22IGStoryQuickSnapFormat36IGStoryQuickSnapFormatViewController_IGStoryQuickSnapFormat4_h
#define _TtC22IGStoryQuickSnapFormat36IGStoryQuickSnapFormatViewController_IGStoryQuickSnapFormat4_h
@import Foundation;

@interface _TtC22IGStoryQuickSnapFormat36IGStoryQuickSnapFormatViewController (IGStoryQuickSnapFormat4) <IGStoryCameraOverlayViewControllerDelegate>
/* instance methods */
- (BOOL)storyCameraOverlayViewControllerDialShouldAllowVideoCapture:(id)capture;
- (void)storyCameraOverlayViewControllerDidAbortCameraPermissions:(id)permissions;
- (void)storyCameraOverlayViewControllerDidTapCloseButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapLightingButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapAudioButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapSwitchCameras:(id)cameras;
- (void)storyCameraOverlayViewControllerDidTapHistoryButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapGalleryButton:(id)button;
- (void)storyCameraOverlayViewController:(id)controller didSwitchFromCameraMode:(id)mode toCameraMode:(id)mode;
- (void)storyCameraOverlayView:(id)view didScaleZoom:(double)zoom;
- (void)storyCameraOverlayView:(id)view didZoomByPercent:(double)percent;
- (void)storyCameraOverlayView:(id)view didChangePickerValueWithIndex:(long long)index;
- (void)storyCameraOverlayView:(id)view didChangeSliderWithValue:(double)value;
- (void)storyCameraOverlayView:(id)view didChangeText:(id)text;
- (void)storyCameraOverlayViewController:(id)controller canvasModeViewControllerDidShareToStory:(long long)story andDirectRecipients:(id)recipients;
- (void)storyCameraOverlayViewController:(id)controller didEndScrollOnCameraMode:(id)mode;
- (void)storyCameraOverlayViewController:(id)controller didEndScrollingOnAREffectScrollingSelectorItemIndex:(long long)index;
- (void)storyCameraOverlayViewController:(id)controller didFinishHandsFreeCountdown:(BOOL)countdown;
- (void)storyCameraOverlayViewController:(id)controller didSelectAREffectScrollingSelectorItemAtIndex:(long long)index;
- (BOOL)storyCameraOverlayViewController:(id)controller shouldTapSticker:(id)sticker;
- (void)storyCameraOverlayViewController:(id)controller didTapSticker:(id)sticker;
- (void)storyCameraOverlayViewController:(id)controller didToggleMuteButton:(BOOL)button;
- (void)storyCameraOverlayViewController:(id)controller didToggleNetworkAccess:(BOOL)access;
- (void)storyCameraOverlayViewControllerDialDidFailVideoCapture:(id)capture;
- (void)storyCameraOverlayViewControllerDialDidStartVideoCapture:(id)capture;
- (void)storyCameraOverlayViewControllerDialDidStopVideoCapture:(id)capture;
- (void)storyCameraOverlayViewControllerDidBeginHandsFreeCountdown:(id)countdown;
- (void)storyCameraOverlayViewControllerDidTapShutterButton:(id)button;
- (void)storyCameraOverlayViewControllerDidTapSettingsButton:(id)button;
- (void)storyCameraOverlayViewDidExitTextInput:(id)input;
- (void)storyCameraOverlayViewDidExitEditableTextInput:(id)input text:(id)text;
- (void)storyCameraOverlayViewDidUpdatePermissions:(id)permissions;
- (void)storyCameraOverlayViewMoreInfoSheetDidEnterFullscreenMode:(id)mode;
- (void)storyCameraOverlayViewMoreInfoSheetDidLeaveFullscreenMode:(id)mode;
- (void)storyCameraOverlayViewControllerTrayDidAppear:(id)appear;
- (void)storyCameraOverlayViewControllerTrayDidDisappear:(id)disappear;
- (void)storyCameraOverlayViewControllerDidTapTryIt:(id)it onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
- (void)storyCameraOverlayViewController:(id)controller didSelectShareUpcomingEvent:(id)event;
- (void)storyCameraOverlayViewControllerDidTapUpcomingEventsOption:(id)option;
- (void)storyCameraOverlayViewController:(id)controller didTapShareStoryForEvent:(id)event;
- (void)storyCameraOverlayViewControllerDidExitAddYoursBrowsing:(id)browsing withPromptStickerView:(id)view;
- (void)storyCameraOverlayViewController:(id)controller didTapSUPButton:(long long)supbutton completion:(id /* block */)completion;
- (void)storyCameraOverlayViewControllerDidTapSUPRequestCapture:(id)capture;
- (void)storyCameraOverlayViewControllerDidTapAnonymityButton:(id)button;
@end

#endif /* _TtC22IGStoryQuickSnapFormat36IGStoryQuickSnapFormatViewController_IGStoryQuickSnapFormat4_h */
