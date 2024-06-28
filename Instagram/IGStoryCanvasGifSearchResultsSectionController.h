//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCanvasGifSearchResultsSectionController_h
#define IGStoryCanvasGifSearchResultsSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "NSObject-Protocol.h"

@class IGAnimatedStickerModel, NSString;
@protocol IGStoryCanvasGifSearchResultsSectionControllerDelegate;

@interface IGStoryCanvasGifSearchResultsSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGAnimatedStickerModel *_stickerModel;
}

@property (weak, nonatomic) NSObject<IGStoryCanvasGifSearchResultsSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)gifSearchResultsCellDidLongPress:(id)press;
- (void)gifSearchResultsCellDidTapSearchByAuthor:(id)author;
@end

#endif /* IGStoryCanvasGifSearchResultsSectionController_h */
