//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMetaSuggestedGalleryAssetCollection_IGAssetsFetchResult_h
#define IGMetaSuggestedGalleryAssetCollection_IGAssetsFetchResult_h
@import Foundation;

@interface IGMetaSuggestedGalleryAssetCollection (IGAssetsFetchResult) <NSObject>
/* instance methods */
- (id)collection;
- (long long)count;
- (unsigned long long)indexOfAsset:(id)asset;
- (id)assetAtIndex:(unsigned long long)index;
- (id)lastAsset;
- (id)firstAsset;
@end

#endif /* IGMetaSuggestedGalleryAssetCollection_IGAssetsFetchResult_h */