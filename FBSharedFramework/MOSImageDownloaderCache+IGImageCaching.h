//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MOSImageDownloaderCache_IGImageCaching_h
#define MOSImageDownloaderCache_IGImageCaching_h
@import Foundation;

@interface MOSImageDownloaderCache (IGImageCaching) <MOSImageDownloaderCaching, IGImageImageCaching, IGImageDataCaching>
/* instance methods */
- (id)initWithDiskCacheProvider:(id)provider memoryCache:(id)cache shouldUseHashMapForCacheKeys:(BOOL)keys purgeCacheOnMemoryWarning:(BOOL)warning imageCacheKeyGenerator:(id)generator processedMemoryCacheKeyBuilder:(undefined *)builder;
- (void)setImage:(id)image withURL:(id)url forKey:(id)key forModule:(id)module forFetchType:(long long)type;
- (id)imageForKey:(id)key;
- (BOOL)containsImageForKey:(id)key;
- (void)removeAllImages;
- (void)setImageData:(id)data withURL:(id)url forKey:(id)key forModule:(id)module forFetchType:(long long)type forScans:(id)scans;
- (id)imageDataForKey:(id)key;
- (void)removeAllImageData;
- (void)updateAccessTimeForImageDataWithKey:(id)key;
@end

#endif /* MOSImageDownloaderCache_IGImageCaching_h */
