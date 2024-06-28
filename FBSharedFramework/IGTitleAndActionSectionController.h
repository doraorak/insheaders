//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTitleAndActionSectionController_h
#define IGTitleAndActionSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGTitleAndActionItemViewModel.h"
#include "IGTitleAndActionSectionControllerDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGTitleAndActionSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGTitleAndActionItemViewModel *_viewModel;
  struct CGSize { double width; double height; } _size;
}

@property (weak, nonatomic) NSObject<IGTitleAndActionSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)titleAndActionCell:(id)cell didTapActionButton:(id)button;
@end

#endif /* IGTitleAndActionSectionController_h */