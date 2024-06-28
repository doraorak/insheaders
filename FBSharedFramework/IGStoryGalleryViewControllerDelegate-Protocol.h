//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryGalleryViewControllerDelegate_Protocol_h
#define IGStoryGalleryViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGStoryGalleryViewControllerDelegate <NSObject>
/* instance methods */
- (void)storyGalleryViewController:(id)controller didSelectAssets:(id)assets;
- (void)storyGalleryViewController:(id)controller didSelectCameraCell:(id)cell;
- (void)storyGalleryViewController:(id)controller didSetMultiSelectEnabled:(BOOL)enabled animated:(BOOL)animated;
- (void)storyGalleryViewControllerDidChangeAlbum:(id)album;
- (void)storyGalleryViewController:(id)controller didSelectImage:(id)image;
- (void)storyGalleryViewController:(id)controller didSelectDraft:(id)draft withDraftGallery:(id)gallery;
- (void)storyGalleryViewControllerDidUpdateGalleryPermissions:(id)permissions;
- (BOOL)prefersStatusBarHidden;
- (void)storyGalleryViewController:(id)controller didShareToStory:(long long)story exitPoint:(long long)point directRecipients:(id)recipients storyModelArray:(id)array metadataArray:(id)array;
@optional
/* instance methods */
- (void)storyGalleryViewController:(id)controller didSelectAssetsForPhotoDump:(id)dump;
- (void)storyGalleryViewControllerDidTapImagineMe:(id)me;
- (void)storyGalleryViewController:(id)controller didSelectGeneratedOutputWithUri:(id)uri localMediaUri:(id)uri;
@end

#endif /* IGStoryGalleryViewControllerDelegate_Protocol_h */
