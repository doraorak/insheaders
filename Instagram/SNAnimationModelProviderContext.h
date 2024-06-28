//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNAnimationModelProviderContext_h
#define SNAnimationModelProviderContext_h
@import Foundation;

#include "SNAnimationDocumentModel.h"
#include "SNAnimationDocumentModelProvider.h"
#include "SNAnimationDownloadingResponseModel.h"
#include "SNAnimationMultiImagesProvider.h"
#include "SNAnimationProvider.h"
#include "SNRenderableModel.h"

@class NSArray, NSDictionary, NSMutableArray;

@interface SNAnimationModelProviderContext : NSObject {
  /* instance variables */
  BOOL _animationDocumentReady;
  BOOL _animationAssetsReady;
  SNAnimationProvider *_animationProvider;
  SNAnimationDocumentModel *_animationDocument;
  SNAnimationDocumentModelProvider *_documentModelProvider;
  SNRenderableModel *_renderableModel;
  SNAnimationMultiImagesProvider *_imageAssetsProvider;
  NSDictionary *_downloadedImageAssets;
  NSDictionary *_downloadedImageAssetSizes;
  NSArray *_imageAssetsInfo;
}

@property (retain, nonatomic) SNAnimationDownloadingResponseModel *animation;
@property (readonly, nonatomic) NSMutableArray *blocks;

/* instance methods */
- (id)initWithAnimationProvider:(id)provider;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SNAnimationModelProviderContext_h */
