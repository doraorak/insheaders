//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVisualMessageTimelineSectionController_h
#define IGDirectVisualMessageTimelineSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDirectVisualMessageTimelineCellViewModel.h"

@protocol IGDirectVisualMessageTimelineSectionControllerDelegate;

@interface IGDirectVisualMessageTimelineSectionController : IGListSectionController {
  /* instance variables */
  NSObject<IGDirectVisualMessageTimelineSectionControllerDelegate> *_delegate;
}

@property (readonly, nonatomic) IGDirectVisualMessageTimelineCellViewModel *viewModel;

/* instance methods */
- (id)initWithViewModel:(id)model delegate:(id)delegate;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)supplementaryViewSource;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didDeselectItemAtIndex:(long long)index;
@end

#endif /* IGDirectVisualMessageTimelineSectionController_h */
