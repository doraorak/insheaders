//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHighlightsStoryTrayEditRowSectionController_h
#define IGHighlightsStoryTrayEditRowSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGHighlightsStoryTrayEditRowCell.h"
#include "IGHighlightsStoryTrayEditRowSectionControllerDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGHighlightsStoryTrayEditRowSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGHighlightsStoryTrayEditRowCell *_sizingCell;
}

@property (weak, nonatomic) NSObject<IGHighlightsStoryTrayEditRowSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)highlightsStoryTrayEditRowCellDidTapRightButton:(id)button;
@end

#endif /* IGHighlightsStoryTrayEditRowSectionController_h */