//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGalleryDataSource_h
#define IGGalleryDataSource_h
@import Foundation;

#include "IGGalleryAssetCollection-Protocol.h"
#include "IGUserSession.h"
#include "PHPhotoLibraryChangeObserver-Protocol.h"

@class NSArray, NSDate, NSMutableDictionary, NSNumber, NSString, PHAssetCollection, PHCachingImageManager, PHFetchResult;
@protocol IGGalleryDataSourceDelegateAnnouncer, OS_dispatch_queue;

@interface IGGalleryDataSource : NSObject<PHPhotoLibraryChangeObserver> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_collectionLoadingQueue;
  NSObject<OS_dispatch_queue> *_assetLoadingQueue;
  PHFetchResult *_assetsFetchResult;
  PHCachingImageManager *_imageManager;
  BOOL _calculateBackgroundColorsIfNeeded;
  double _landscapeAspectRatioThreshold;
  NSObject<OS_dispatch_queue> *_cachedBackgroundColorsReadWriteQueue;
  NSMutableDictionary *_cachedBackgroundColors;
  NSMutableDictionary *_thumbnailRequestTokenEntries;
  NSArray *_mediaTypeOrder;
  NSObject<IGGalleryDataSourceDelegateAnnouncer> *_announcer;
  BOOL _skipLoadCollections;
  IGUserSession *_userSession;
  BOOL _includeEmptyAssetCollections;
  BOOL _useHighPriorityGlobalQueue;
  BOOL _isLoadingPhotos;
  NSDate *_oldestCreationDate;
  PHAssetCollection *_cameraRollCollection;
  NSArray *_collectionsFetchResult;
}

@property (readonly, nonatomic) BOOL hasCameraRollAccess;
@property (readonly, nonatomic) NSArray *sectionedCollectionFetchResults;
@property (retain, nonatomic) NSObject<IGGalleryAssetCollection> *currentCollection;
@property (readonly, nonatomic) long long numberOfItemsInCurrentCollection;
@property (nonatomic) long long sortingMethod;
@property (retain, nonatomic) NSArray *preferredMediaTypes;
@property (retain, nonatomic) NSNumber *minimumDuration;
@property (retain, nonatomic) NSNumber *maximumDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long numberOfCollections;
@property (readonly, nonatomic) NSString *currentCollectionLocalizedTitle;

/* instance methods */
- (id)initWithOldestCreationDate:(id)date calculateBackgroundColorsIfNeeded:(BOOL)needed landscapeAspectRatioThreshold:(double)threshold skipLoadCollections:(BOOL)collections userSession:(id)session;
- (void)dealloc;
- (void)photoLibraryDidChange:(id)change;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)_loadPhotoLibraryDataAndSelectCollectionWithType:(long long)type selectedSubtype:(long long)subtype albumTitle:(id)title completionHandler:(id /* block */)handler;
- (void)_loadPhotoLibraryDataWithCompletionHandler:(id /* block */)handler;
- (void)reload;
- (void)setSuggestedCollection:(id)collection;
- (void)_loadCurrentCollection:(id)collection;
- (id)collectionAtIndex:(long long)index;
- (void)_loadCustomCollection:(id)collection;
- (void)fetchCollectionInfoForCollectionAtIndex:(long long)index thumbnailSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
- (void)cancelAllThumbnailRequests;
- (void)unregisterPhotoLibraryObserver;
- (void)prefetchAssetsAtIndexSet:(id)set size:(struct CGSize { double x0; double x1; })size imageRequestOptions:(id)options;
- (void)cancelPrefetchAssetsAtIndexSet:(id)set size:(struct CGSize { double x0; double x1; })size imageRequestOptions:(id)options;
@end

#endif /* IGGalleryDataSource_h */