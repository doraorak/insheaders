//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraLogger_Gallery_h
#define IGCameraLogger_Gallery_h
@import Foundation;

@interface IGCameraLogger (Gallery) <IGCameraLoggerGallery>
/* instance methods */
- (void)logGalleryPermissionsRequestEventWithNewPermissionStatus:(long long)status;
- (void)logGalleryPermissionsRequestEventWithNewPermissionStatus:(long long)status entryPoint:(long long)point;
- (void)logGalleryPermissionsUpgradeEventWithPath:(long long)path;
- (void)logStartGallerySessionWithCameraDestination:(long long)destination;
- (void)logEndGallerySession;
- (void)logEndGallerySessionWithMediaType:(long long)type;
- (void)logOpenCameraFromGalleryCameraDestination:(long long)destination;
- (void)logGalleryEnterButtonTap;
- (void)logGalleryMultiSelectMediaWithMediaType:(long long)type captureType:(long long)type albumTitle:(id)title extraMediaData:(struct IGCameraLoggerExtraMediaData { double x0; long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })data deviceInfoConfig:(id)config compositionId:(id)id;
- (void)logGalleryMultiUnselectMediaWithMediaType:(long long)type captureType:(long long)type albumTitle:(id)title extraMediaData:(struct IGCameraLoggerExtraMediaData { double x0; long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })data deviceInfoConfig:(id)config compositionId:(id)id usingDrag:(BOOL)drag;
- (void)logSundialGallerySelectMedia:(struct IGCameraLoggerExtraMediaData { double x0; long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })media mediaType:(long long)type compositionId:(id)id fromAlbumWithName:(id)name;
- (void)logGallerySelectMediaWithMediaType:(long long)type captureType:(long long)type extraMediaData:(struct IGCameraLoggerExtraMediaData { double x0; long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })data deviceInfoConfig:(id)config extraSessionIdData:(id)data fromAlbumWithName:(id)name nftId:(id)id;
- (void)logGalleryEnterSwipeWithCameraPosition:(long long)position;
- (void)logGalleryExitWithTapWithCameraPosition:(long long)position;
- (void)logGalleryExitWithSwipeWithCameraPosition:(long long)position;
- (void)logGalleryImpressionWithCameraTool:(long long)tool;
- (void)logUserDidTapGalleryToolbarButtonWithSurface:(long long)surface module:(id)module;
- (void)logGalleryMultiSelectTapped;
- (void)logMultiSelectGalleryNextButtonTappedWithSelectedPhotoCount:(int)count selectedVideoCount:(int)count;
- (void)logGalleryContextMenuShown;
- (void)logCameraSelectDraftsTabGallery;
- (void)logDidTapGalleryPickerAddMediaButtonWithEffectID:(id)id effectInstanceID:(id)id;
- (void)logDidSelectGalleryPickerMediaWithEffectID:(id)id effectInstanceID:(id)id;
- (void)_logExpressivePickerCameraEntityTap:(long long)tap compositionId:(id)id;
- (void)logExpressiveFormatColorPickerOpenedWithIdentifier:(id)identifier;
- (void)logExpressiveFormatColorPickerClosedWithIdentifier:(id)identifier;
- (void)logExpressiveFormatColorPickerColorPickedWithIdentifier:(id)identifier;
- (void)logExpressiveFormatGalleryStickerEditorClosedWithCompositionId:(id)id;
- (void)logExpressiveFormatZIndexMenuPressed:(id)pressed;
- (void)logOpenStoryTemplatesDiscoverySurfaceWithModule:(id)module;
- (void)logGalleryAlbumImpressionWithAlbumCategory:(long long)category albumIndex:(long long)index albumName:(id)name;
- (void)logOpenAlbumPickerWithHasRBSAlbum:(BOOL)rbsalbum shouldLogRBSAlbum:(BOOL)rbsalbum totalAlbumCount:(long long)count;
- (void)logAlbumPickerTapAlbumWithAlbumCategory:(long long)category legacyAlbumCategory:(id)category albumIndex:(long long)index albumName:(id)name shouldLogRBSFolder:(BOOL)rbsfolder albumEntrypoint:(long long)entrypoint;
- (void)logMediaSelectedFromSystemPickerWithSelectedPhotoCount:(long long)count selectedVideoCount:(long long)count;
- (void)logDidTapCancelForStackedTimelineReplaceVideoWithShorterClipFlow;
- (void)logDidTapContinueForStackedTimelineReplaceVideoWithShorterClipFlow;
- (void)logDidTapDoneForStackedTimelineReplaceVideoFlow;
- (void)logDidTapGalleryQuickScrubPillWithDragEntity:(long long)entity timestamp:(id)timestamp;
- (void)logDidTapACRGalleryEntrypoint;
@end

#endif /* IGCameraLogger_Gallery_h */
