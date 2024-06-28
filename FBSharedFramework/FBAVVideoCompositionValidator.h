//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAVVideoCompositionValidator_h
#define FBAVVideoCompositionValidator_h
@import Foundation;

#include "AVVideoCompositionValidationHandling-Protocol.h"

@class AVAsset, AVVideoComposition, NSMutableArray, NSString;

@interface FBAVVideoCompositionValidator : NSObject<AVVideoCompositionValidationHandling> {
  /* instance variables */
  AVAsset *_asset;
  AVVideoComposition *_videoComposition;
}

@property (readonly, copy, nonatomic) NSMutableArray *issues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAsset:(id)asset videoComposition:(id)composition;
- (BOOL)videoComposition:(id)composition shouldContinueValidatingAfterFindingInvalidValueForKey:(id)key;
- (BOOL)videoComposition:(id)composition shouldContinueValidatingAfterFindingEmptyTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (BOOL)videoComposition:(id)composition shouldContinueValidatingAfterFindingInvalidTimeRangeInInstruction:(id)instruction;
- (BOOL)videoComposition:(id)composition shouldContinueValidatingAfterFindingInvalidTrackIDInInstruction:(id)instruction layerInstruction:(id)instruction asset:(id)asset;
@end

#endif /* FBAVVideoCompositionValidator_h */
