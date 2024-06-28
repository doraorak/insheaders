//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialGalleryViewControllerDelegate_Protocol_h
#define IGSundialGalleryViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGSundialGalleryViewControllerDelegate <NSObject>
/* instance methods */
- (BOOL)sundialGalleryViewController:(id)controller canSelectAsset:(id)asset;
- (BOOL)sundialGalleryViewController:(id)controller canSelectAsset:(id)asset;
- (void)sundialGalleryViewController:(id)controller didSelectAsset:(id)asset sourceView:(id)view;
- (void)sundialGalleryViewController:(id)controller didSelectAsset:(id)asset sourceView:(id)view;
- (void)sundialGalleryViewController:(id)controller editorViewController:(id)controller didSelectVideoClip:(id)clip;
- (void)sundialGalleryViewController:(id)controller editorViewController:(id)controller didSelectVideoClip:(id)clip;
- (void)sundialGalleryViewController:(id)controller didTapDraft:(id)draft indexPath:(id)path;
- (void)sundialGalleryViewController:(id)controller didTapDraft:(id)draft indexPath:(id)path;
- (void)sundialGalleryViewController:(id)controller didMultiSelectAsset:(id)asset;
- (void)sundialGalleryViewController:(id)controller didMultiSelectAsset:(id)asset;
- (void)sundialGalleryViewController:(id)controller didMultiUnselectAsset:(id)asset usingDrag:(BOOL)drag selectedCount:(unsigned long long)count;
- (void)sundialGalleryViewController:(id)controller didSelectAssets:(id)assets fromView:(id)view;
- (void)sundialGalleryViewController:(id)controller didSelectAssets:(id)assets fromView:(id)view;
- (void)sundialGalleryViewControllerAuthorizationStatusDidUpdate:(id)update;
- (void)sundialGalleryViewControllerMediaSelectionViewWillDisappear:(id)disappear onPosition:(id)position;
- (void)sundialGalleryViewController:(id)controller didToggleMultiSelect:(BOOL)select;
- (void)sundialGalleryViewControllerDidChangeMediaMode:(id)mode;
- (void)sundialGalleryViewController:(id)controller didSelectAlbum:(id)album withAlbumIndex:(long long)index;
- (void)sundialGalleryViewControllerDidCancelAlbumSelection:(id)selection;
- (void)sundialGalleryViewControllerDidTapTemplateBrowser:(id)browser;
- (void)sundialGalleryViewControllerDidTapMemeHubBrowser:(id)browser;
- (void)sundialGalleryViewControllerDidTapACRBrowser:(id)acrbrowser fromGallery:(BOOL)gallery;
- (BOOL)sundialGalleryViewController:(id)controller shouldShowLoadingIndicatorForCellAtIndexPath:(id)path;
- (BOOL)sundialGalleryViewController:(id)controller shouldShowLoadingIndicatorForCellAtIndexPath:(id)path;
- (BOOL)sundialGalleryViewControllerShouldShowLoadingIndicatorForNextButton:(id)button;
- (BOOL)sundialGalleryViewControllerShouldShowLoadingIndicatorForNextButton:(id)button;
- (void)sundialGalleryViewController:(id)controller didUseGalleryCameraTool:(long long)tool;
- (void)sundialGalleryViewController:(id)controller didSelectAudioTrackClip:(id)clip;
- (void)sundialGalleryViewController:(id)controller didSelectAudioTrackClip:(id)clip;
- (void)sundialGalleryViewController:(id)controller didTapAudioTrackWithSectionId:(id)id withSearchSessionId:(id)id;
- (BOOL)sundialGalleryViewController:(id)controller canMultiSelectAsset:(id)asset;
- (BOOL)sundialGalleryViewController:(id)controller canMultiSelectAsset:(id)asset;
- (long long)mediaSelectionLimit;
- (id)selectedAudioTrackClip;
@end

#endif /* IGSundialGalleryViewControllerDelegate_Protocol_h */
