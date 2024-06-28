//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMetaGalleryAsset_h
#define IGStoryMetaGalleryAsset_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGMetaGalleryAsset.h"
#include "IGStoryGalleryAsset-Protocol.h"
#include "IGStoryMediaAssetMiscAttribution.h"

@class CLLocation, NSArray, NSDate, NSString, UIImage;

@interface IGStoryMetaGalleryAsset : NSObject<IGStoryGalleryAsset> {
  /* instance variables */
  IGAsyncTask *_videoAssetTask;
}

@property (readonly, nonatomic) IGMetaGalleryAsset *metaGalleryAsset;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *assetID;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSArray *backgroundColors;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (readonly, nonatomic) long long assetType;
@property (readonly, nonatomic) double videoDuration;
@property (readonly, nonatomic) IGStoryMediaAssetMiscAttribution *miscAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } ig_mediaSize;
@property (readonly, nonatomic) double ig_mediaDuration;
@property (readonly, nonatomic) BOOL ig_isLoopable;
@property (readonly, nonatomic) IGAsyncTask *ig_preferredTransform;

/* instance methods */
- (id)initWithAsset:(id)asset previewImage:(id)image;
- (BOOL)isEqual:(id)equal;
- (id)renderer;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)fetchVideoWithUserSession:(id)session resultHandler:(id /* block */)handler;
- (void)fetchImageOfSize:(struct CGSize { double x0; double x1; })size atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time resultHandler:(id /* block */)handler;
- (void)fetchMediaSourceWithUserSession:(id)session igglkSession:(id)session metadata:(id)metadata completion:(id /* block */)completion;
@end

#endif /* IGStoryMetaGalleryAsset_h */