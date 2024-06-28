//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23IGGalleryCollectionView36IGGalleryCollectionViewConfiguration_h
#define _TtC23IGGalleryCollectionView36IGGalleryCollectionViewConfiguration_h
@import Foundation;

@interface _TtC23IGGalleryCollectionView36IGGalleryCollectionViewConfiguration : NSObject { // (Swift)
  /* instance variables */
   supportedInGridDestinations;
   entryPointTreatment;
   newAlbumPickerEnabled;
   longPressOptions;
   aspectRatio;
   forceDarkMode;
   enableGradientBackgroundColorsInCell;
   disableQuickScrubController;
   highlightedSelectionsEnabled;
   useSmallerSelectionBadgeDiameterSize;
   disableThumbnailCancellations;
   preferredMediaTypes;
   enableCollectionPrefetch;
   imageRequestOptions;
   customSelectionTrayBackgroundBlurEffectStyle;
   allowsTappingSelectionTrayAsset;
   alwaysEnableInGridCameraDestinationSelection;
   restrictMetaGalleryAssets;
   shouldAllowSelectionTray;
   shouldAllowInlineComposer;
}

/* instance methods */
- (id)initWithSupportedInGridDestinations:(unsigned long long)destinations entryPointTreatment:(long long)treatment newAlbumPickerEnabled:(BOOL)enabled longPressOptions:(unsigned long long)options aspectRatio:(long long)ratio forceDarkMode:(BOOL)mode enableGradientBackgroundColorsInCell:(BOOL)cell disableQuickScrubController:(BOOL)controller highlightedSelectionsEnabled:(BOOL)enabled useSmallerSelectionBadgeDiameterSize:(BOOL)size disableThumbnailCancellations:(BOOL)cancellations preferredMediaTypes:(id)types enableCollectionPrefetch:(BOOL)prefetch imageRequestOptions:(id)options customSelectionTrayBackgroundBlurEffectStyle:(long long)style allowsTappingSelectionTrayAsset:(BOOL)asset alwaysEnableInGridCameraDestinationSelection:(BOOL)selection restrictMetaGalleryAssets:(BOOL)assets shouldAllowSelectionTray:(BOOL)tray shouldAllowInlineComposer:(BOOL)composer;
- (id)init;
@end

#endif /* _TtC23IGGalleryCollectionView36IGGalleryCollectionViewConfiguration_h */
