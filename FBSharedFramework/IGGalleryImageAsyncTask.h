//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGalleryImageAsyncTask_h
#define IGGalleryImageAsyncTask_h
@import Foundation;

@class NSMutableArray, UIImage;

@interface IGGalleryImageAsyncTask : NSObject {
  /* instance variables */
  id _lock;
  NSMutableArray *_onSuccessBlocks;
  NSMutableArray *_onCancelBlocks;
  BOOL _removeCancelBlocksOnFinalImage;
  BOOL _isFinalImage;
}

@property (retain, nonatomic) UIImage *result;
@property (readonly, nonatomic) BOOL isCancelled;

/* instance methods */
- (id)initWithRemoveCancelBlocksOnFinalImage:(BOOL)image;
- (void)cancel;
- (void)onSuccess:(id /* block */)success;
@end

#endif /* IGGalleryImageAsyncTask_h */