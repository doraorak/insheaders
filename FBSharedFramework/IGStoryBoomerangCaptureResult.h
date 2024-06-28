//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryBoomerangCaptureResult_h
#define IGStoryBoomerangCaptureResult_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGStoryMediaAsset-Protocol.h"
#include "IGStoryMediaAssetMiscAttribution.h"
#include "IGUserSession.h"
#include "METAMediaAsset-Protocol.h"

@class NSString, UIImage;

@interface IGStoryBoomerangCaptureResult : NSObject<METAMediaAsset, IGStoryMediaAsset> {
  /* instance variables */
  struct CGSize { double width; double height; } _imageSize;
  IGAsyncTask *_videoGenerationTask;
  IGUserSession *_userSession;
  BOOL _convertedFromGallery;
  BOOL _useMetalInIGGLKit;
  unsigned long long _boomerangMode;
  long long _captureFramerateInMilliseconds;
  double _videoToBoomerangRelativeStartTime;
  double _videoToBoomerangRelativeDuration;
  IGAsyncTask *_boomerangCaptureTask;
  struct _NSRange { unsigned long long location; unsigned long long length; } _frameRange;
}

@property (retain, nonatomic) IGAsyncTask *preferredTransform;
@property (readonly, nonatomic) UIImage *previewImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } ig_mediaSize;
@property (readonly, nonatomic) double ig_mediaDuration;
@property (readonly, nonatomic) BOOL ig_isLoopable;
@property (readonly, nonatomic) IGAsyncTask *ig_preferredTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (readonly, nonatomic) long long assetType;
@property (readonly, nonatomic) double videoDuration;
@property (readonly, nonatomic) IGStoryMediaAssetMiscAttribution *miscAttribution;

/* instance methods */
- (id)initWithBoomerangCaptureTask:(id)task imageSize:(struct CGSize { double x0; double x1; })size previewImage:(id)image preferredTransform:(id)transform convertedFromGallery:(BOOL)gallery useMetalInIGGLKit:(BOOL)igglkit userSession:(id)session;
- (id)renderer;
- (void)fetchImageOfSize:(struct CGSize { double x0; double x1; })size atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time resultHandler:(id /* block */)handler;
- (void)fetchVideoWithUserSession:(id)session resultHandler:(id /* block */)handler;
- (void)fetchMediaSourceWithUserSession:(id)session igglkSession:(id)session metadata:(id)metadata completion:(id /* block */)completion;
@end

#endif /* IGStoryBoomerangCaptureResult_h */