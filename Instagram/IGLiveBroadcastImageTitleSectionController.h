//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastImageTitleSectionController_h
#define IGLiveBroadcastImageTitleSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGLiveBroadcastImageTitleModel.h"

@class IGTableLayoutSpec;
@protocol IGLiveBroadcastImageTitleSectionControllerDelegate;

@interface IGLiveBroadcastImageTitleSectionController : IGListSectionController {
  /* instance variables */
  IGLiveBroadcastImageTitleModel *_model;
  IGTableLayoutSpec *_tableLayoutSpec;
  NSObject<IGLiveBroadcastImageTitleSectionControllerDelegate> *_modelDelegate;
}

/* instance methods */
- (id)initWithTableLayoutSpec:(id)spec modelDelegate:(id)delegate;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGLiveBroadcastImageTitleSectionController_h */