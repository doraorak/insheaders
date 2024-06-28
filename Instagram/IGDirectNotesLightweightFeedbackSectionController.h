//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectNotesLightweightFeedbackSectionController_h
#define IGDirectNotesLightweightFeedbackSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGDirectNotesLightweightFeedbackSectionControllerDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGDirectNotesLightweightFeedbackSectionController : IGListBindingSingleSectionController<NSObject>

@property (weak, nonatomic) NSObject<IGDirectNotesLightweightFeedbackSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (Class)cellClass;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (void)didTapLightweightFeedbackCell:(id)cell viewModel:(id)model;
- (void)didTapLightweightFeedbackCell:(id)cell link:(id)link;
@end

#endif /* IGDirectNotesLightweightFeedbackSectionController_h */
