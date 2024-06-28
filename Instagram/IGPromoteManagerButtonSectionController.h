//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteManagerButtonSectionController_h
#define IGPromoteManagerButtonSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGPromoteManagerButtonCellViewModel.h"

@interface IGPromoteManagerButtonSectionController : IGListBindingSingleSectionController

@property (readonly, nonatomic) IGPromoteManagerButtonCellViewModel *viewModel;

/* instance methods */
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
@end

#endif /* IGPromoteManagerButtonSectionController_h */