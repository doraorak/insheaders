//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVisualMessageTimelineCameraSectionController_h
#define IGDirectVisualMessageTimelineCameraSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDirectVisualMessageTimelineCameraCellViewModel.h"

@protocol IGDirectVisualMessageTimelineCameraSectionControllerDelegate;

@interface IGDirectVisualMessageTimelineCameraSectionController : IGListSectionController {
  /* instance variables */
  NSObject<IGDirectVisualMessageTimelineCameraSectionControllerDelegate> *_delegate;
}

@property (readonly, nonatomic) IGDirectVisualMessageTimelineCameraCellViewModel *viewModel;

/* instance methods */
- (id)initWithViewModel:(id)model delegate:(id)delegate;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)supplementaryViewSource;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didDeselectItemAtIndex:(long long)index;
@end

#endif /* IGDirectVisualMessageTimelineCameraSectionController_h */
