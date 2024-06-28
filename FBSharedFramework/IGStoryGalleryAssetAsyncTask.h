//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryGalleryAssetAsyncTask_h
#define IGStoryGalleryAssetAsyncTask_h
@import Foundation;

#include "IGStoryGalleryAsset-Protocol.h"

@interface IGStoryGalleryAssetAsyncTask : NSObject {
  /* instance variables */
  id _lock;
  id /* block */ _onSuccessBlock;
  id /* block */ _onCancelBlock;
  BOOL _isFinalImage;
}

@property (retain, nonatomic) NSObject<IGStoryGalleryAsset> *result;
@property (readonly, nonatomic) BOOL isCancelled;

/* instance methods */
- (id)init;
- (void)cancel;
- (void)onSuccess:(id /* block */)success;
@end

#endif /* IGStoryGalleryAssetAsyncTask_h */