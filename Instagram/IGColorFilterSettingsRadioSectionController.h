//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGColorFilterSettingsRadioSectionController_h
#define IGColorFilterSettingsRadioSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGColorFilterSettingsRadioViewModel.h"

@class IGDSListCellCollectionViewCell;
@protocol IGColorFilterSettingsRadioSectionControllerDelegate;

@interface IGColorFilterSettingsRadioSectionController : IGListSectionController {
  /* instance variables */
  NSObject<IGColorFilterSettingsRadioSectionControllerDelegate> *_delegate;
  IGDSListCellCollectionViewCell *_textCell;
}

@property (readonly, nonatomic) IGColorFilterSettingsRadioViewModel *viewModel;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGColorFilterSettingsRadioSectionController_h */