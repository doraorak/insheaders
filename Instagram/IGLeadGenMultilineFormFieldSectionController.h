//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenMultilineFormFieldSectionController_h
#define IGLeadGenMultilineFormFieldSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGLeadGenMultilineFormFieldSectionControllerDelegate;

@interface IGLeadGenMultilineFormFieldSectionController : IGListGenericSectionController<NSObject> {
  /* instance variables */
  BOOL _enablePrism;
}

@property (weak, nonatomic) NSObject<IGLeadGenMultilineFormFieldSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEnablePrism:(BOOL)prism;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (id)cellForItemAtIndex:(long long)index;
- (void)didChangeField:(id)field userInput:(id)input formField:(id)field;
- (void)setInputValidatorForModel:(id)model formField:(id)field;
@end

#endif /* IGLeadGenMultilineFormFieldSectionController_h */
