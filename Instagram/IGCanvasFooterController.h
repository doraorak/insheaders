//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCanvasFooterController_h
#define IGCanvasFooterController_h
@import Foundation;

#include "IGCanvasActionConfigurable-Protocol.h"
#include "IGCanvasFooterViewModel.h"

@class NSString;

@interface IGCanvasFooterController : NSObject<IGCanvasActionConfigurable> {
  /* instance variables */
  IGCanvasFooterViewModel *_footerViewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFooterViewModel:(id)model;
- (id)childLoggingToken;
- (id)actionLinks;
- (id)elementContext;
@end

#endif /* IGCanvasFooterController_h */