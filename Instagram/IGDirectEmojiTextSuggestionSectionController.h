//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEmojiTextSuggestionSectionController_h
#define IGDirectEmojiTextSuggestionSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"

@protocol IGDirectEmojiTextSuggestionCellDelegate;

@interface IGDirectEmojiTextSuggestionSectionController : IGListBindingSingleSectionController

@property (readonly, weak, nonatomic) NSObject<IGDirectEmojiTextSuggestionCellDelegate> *delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
@end

#endif /* IGDirectEmojiTextSuggestionSectionController_h */