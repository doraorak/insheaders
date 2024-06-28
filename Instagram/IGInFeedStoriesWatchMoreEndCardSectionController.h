//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInFeedStoriesWatchMoreEndCardSectionController_h
#define IGInFeedStoriesWatchMoreEndCardSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGInFeedStoriesWatchMoreEndCardModel.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGInFeedStoriesEndCardSectionControllerDelegate;

@interface IGInFeedStoriesWatchMoreEndCardSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  struct CGSize { double width; double height; } _cellSize;
}

@property (readonly, nonatomic) IGInFeedStoriesWatchMoreEndCardModel *model;
@property (weak, nonatomic) NSObject<IGInFeedStoriesEndCardSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)configureWithInitialCellSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* IGInFeedStoriesWatchMoreEndCardSectionController_h */
