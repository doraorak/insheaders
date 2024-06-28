//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGStoryGalleryLogger34IGStoryGalleryCollectionViewLogger_h
#define _TtC20IGStoryGalleryLogger34IGStoryGalleryCollectionViewLogger_h
@import Foundation;

#include "_TtP23IGGalleryCollectionView29IGGalleryCollectionViewLogger_-Protocol.h"

@interface _TtC20IGStoryGalleryLogger34IGStoryGalleryCollectionViewLogger : NSObject<_TtP23IGGalleryCollectionView29IGGalleryCollectionViewLogger_> { // (Swift)
  /* instance variables */
   userSession;
   cameraLogger;
   galleryLogger;
   loadFirstAssetsPerformanceComponent;
   analyticsModule;
   didLoadGalleryOnce;
}

/* instance methods */
- (id)initWithUserSession:(id)session cameraLogger:(id)logger loadFirstAssetsPerformanceComponent:(id)component analyticsModule:(id)module;
- (void)logDidTapAcrCell;
- (void)logMultiSelectNextButtonTappedWithSelectedPhotoCount:(long long)count selectedVideoCount:(long long)count;
- (void)logDidUpdateQuickScrubbingWithDirection:(unsigned long long)direction displayString:(id)string;
- (void)logReorderMultiSelectFrom:(long long)from to:(long long)to;
- (void)logLoadThumbnailForAssetStartWithRow:(long long)row;
- (void)logLoadThumbnailForAssetSuccessWithRow:(long long)row;
- (void)logLoadThumbnailForAssetCancelWithRow:(long long)row;
- (void)logLoadThumbnailForAssetFailWithRow:(long long)row;
- (void)logDidStartLoadingWithGalleryState:(id)state;
- (void)logDidEndLoadingWithGalleryState:(id)state assetFetchResultDidSucceed:(BOOL)succeed collectionTitle:(id)title numberOfItemsInCollection:(long long)collection;
- (void)logViewDidDisappear;
- (void)logViewDidDeallocWithGalleryState:(id)state galleryAppearanceCount:(long long)count;
- (void)logViewWillDisappearWithGalleryState:(id)state galleryAppearanceCount:(long long)count;
- (void)logGalleryContextMenuShown;
- (id)init;
@end

#endif /* _TtC20IGStoryGalleryLogger34IGStoryGalleryCollectionViewLogger_h */