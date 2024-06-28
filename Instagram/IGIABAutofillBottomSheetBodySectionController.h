//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGIABAutofillBottomSheetBodySectionController_h
#define IGIABAutofillBottomSheetBodySectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGIABAutofillBottomSheetBodySectionViewModel.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGIABAutofillBottomSheetBodySectionControllerDelegate;

@interface IGIABAutofillBottomSheetBodySectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGIABAutofillBottomSheetBodySectionViewModel *_viewModel;
  NSObject<IGIABAutofillBottomSheetBodySectionControllerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })sectionControllerSizeForViewModel:(id)model constrainingSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (id)cellForItemAtIndex:(long long)index;
@end

#endif /* IGIABAutofillBottomSheetBodySectionController_h */
