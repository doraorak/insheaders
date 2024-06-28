//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVVideoFetchRequestState_h
#define IGTVVideoFetchRequestState_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class AVAsset, NSError;

@interface IGTVVideoFetchRequestState : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  double _loading_progress;
  AVAsset *_fetched_asset;
  NSError *_failed_error;
}

/* class methods */
+ (id)failedWithError:(id)error;
+ (id)fetchedWithAsset:(id)asset;
+ (id)idle;
+ (id)loadingWithProgress:(double)progress;

/* instance methods */
@end

#endif /* IGTVVideoFetchRequestState_h */
