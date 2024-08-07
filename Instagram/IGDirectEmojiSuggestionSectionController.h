//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEmojiSuggestionSectionController_h
#define IGDirectEmojiSuggestionSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGDirectEmojiTextSuggestionViewModel.h"

@interface IGDirectEmojiSuggestionSectionController : IGListSectionController {
  /* instance variables */
  IGDirectEmojiTextSuggestionViewModel *_model;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
@end

#endif /* IGDirectEmojiSuggestionSectionController_h */
