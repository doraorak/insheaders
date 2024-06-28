//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoUploadSettingsFetcher_h
#define FBVideoUploadSettingsFetcher_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "FBMediaItemUploadLogging-Protocol.h"
#include "FBVideoUploadSettings.h"
#include "NSObject-Protocol.h"

@class AVAsset, AVVideoComposition, NSDictionary, NSString;
@protocol FBMediaUploadQualitySettingsNetworkDispatching, OS_dispatch_queue;

@interface FBVideoUploadSettingsFetcher : NSObject<NSObject> {
  /* instance variables */
  AVAsset *_asset;
  unsigned long long _preferredQuality;
  NSObject<FBMediaUploadQualitySettingsNetworkDispatching> *_networkDispatcher;
  NSString *_actorID;
  NSString *_waterfallID;
  NSString *_assetID;
  unsigned long long _videoFilterComplexityLevel;
  NSString *_sourceType;
  long long _shareType;
  BOOL _isTranscodingRequired;
  NSObject<FBMediaItemUploadLogging> *_logger;
  double _downloadBandwidth;
  double _stitchDownloadBandwidth;
  double _uploadBandwidth;
  double _outputVideoAspectRatio;
  double _minRequestedResolution;
  NSDictionary *_extras;
  FBVideoUploadSettings *_fallbackSettings;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  BOOL _sourceHDR;
  BOOL _fixAvCompositionFileSize;
  AVVideoComposition *_videoComposition;
  struct CGSize { double width; double height; } _videoCompositionBoundingSize;
  NSObject<FBCancelable> *_cancelHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAsset:(id)asset preferredQuality:(unsigned long long)quality networkDispatcher:(id)dispatcher actorID:(id)id waterfallID:(id)id assetID:(id)id videoFilterComplexityLevel:(unsigned long long)level sourceType:(id)type isTranscodingRequired:(BOOL)required shareType:(long long)type downloadBandwidth:(double)bandwidth stitchDownloadBandwidth:(double)bandwidth uploadBandwidth:(double)bandwidth outputVideoAspectRatio:(double)ratio minRequestedResolution:(double)resolution extras:(id)extras logger:(id)logger fallbackSettings:(id)settings callbackQueue:(id)queue fixAvCompositionFileSize:(BOOL)size sourceHDR:(BOOL)hdr videoComposition:(id)composition videoCompositionBoundingSize:(struct CGSize { double x0; double x1; })size;
- (void)fetchMediaUploadSettingsWithCompletion:(id /* block */)completion;
- (void)cancel;
@end

#endif /* FBVideoUploadSettingsFetcher_h */