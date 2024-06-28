//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLabelSectionController_h
#define IGLabelSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"
#include "IGLabelItemViewModel.h"
#include "IGLabelSectionControllerDelegate-Protocol.h"

@class UIImage;
@protocol IGLabelSectionControllerAccessibilityDelegate, IGLabelSupplementaryViewDelegate;

@interface IGLabelSectionController : IGListBindingSingleSectionController {
  /* instance variables */
  UIImage *_headerImage;
  NSObject<IGLabelSupplementaryViewDelegate> *_supplementaryViewDelegate;
  NSObject<IGLabelSectionControllerAccessibilityDelegate> *_accessibilityDelegate;
}

@property (weak, nonatomic) NSObject<IGLabelSectionControllerDelegate> *delegate;
@property (readonly, nonatomic) IGLabelItemViewModel *viewModel;

/* instance methods */
- (id)init;
- (id)initWithHeaderImage:(id)image supplementaryViewDelegate:(id)delegate;
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (void)didSelectItemWithCell:(id)cell;
- (void)didUpdateToObject:(id)object;
@end

#endif /* IGLabelSectionController_h */
