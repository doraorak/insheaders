//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAREffectLoadState_h
#define IGAREffectLoadState_h
@import Foundation;

#include "FBAREffectFetchResult.h"
#include "FBAREffectLoggingInfo.h"
#include "FBARRemoteAssetModel.h"
#include "IGAREffectModel.h"
#include "IGAssetModel.h"

@class NSError;

@interface IGAREffectLoadState : NSObject {
  /* instance variables */
  BOOL _shouldPrefetchWithHighPriority;
  BOOL _preservingCaptureScopeState;
  BOOL _canceledBeforeCompletion;
  IGAREffectModel *_arEffectModel;
  FBARRemoteAssetModel *_arRemoteAssetModel;
  NSError *_downloadError;
  FBAREffectFetchResult *_arEffectFetchResult;
  long long _effectFetchState;
}

@property (readonly, nonatomic) IGAssetModel *assetModel;
@property (readonly, nonatomic) FBAREffectLoggingInfo *effectLoggingInfo;
@property (readonly, nonatomic) BOOL isPrefetch;

/* instance methods */
- (id)initWithAREffectAssetModel:(id)model remoteAssetModel:(id)model effectLoggingInfo:(id)info isPrefetch:(BOOL)prefetch shouldPrefetchWithHighPriority:(BOOL)priority preservingCaptureScopeState:(BOOL)state;
@end

#endif /* IGAREffectLoadState_h */
