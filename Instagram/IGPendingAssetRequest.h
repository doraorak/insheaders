//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPendingAssetRequest_h
#define IGPendingAssetRequest_h
@import Foundation;

@class IGAsyncTask, PHAsset;

@interface IGPendingAssetRequest : NSObject {
  /* instance variables */
  unsigned long long _requestID;
  PHAsset *_assetFetchingFrom;
  IGAsyncTask *_assetTask;
}

/* instance methods */
- (id)initWithImageRequestID:(int)id;
- (id)initWithAsset:(id)asset contentEditingInputRequestID:(unsigned long long)id;
- (id)initWithAsyncAssetTask:(id)task;
- (void)cancel;
@end

#endif /* IGPendingAssetRequest_h */