//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectFilteredMessageSectionController_h
#define IGDirectFilteredMessageSectionController_h
@import Foundation;

#include "IGDirectMessageSectionController.h"
#include "IGDirectFilteredMessageViewModel.h"

@interface IGDirectFilteredMessageSectionController : IGDirectMessageSectionController

@property (retain, @dynamic, nonatomic) IGDirectFilteredMessageViewModel *viewModel;

/* instance methods */
- (void)messageCellDidSingleTapContent:(id)content;
- (void)messageCellDidDoubleTap:(id)tap;
- (BOOL)messageCellShouldStartScaleAnimation:(id)animation;
- (void)messageCellDidLongPress:(id)press gestureRecognizer:(id)recognizer;
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
@end

#endif /* IGDirectFilteredMessageSectionController_h */