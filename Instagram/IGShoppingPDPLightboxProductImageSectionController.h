//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPLightboxProductImageSectionController_h
#define IGShoppingPDPLightboxProductImageSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGShoppingPDPLightboxProductImageViewModel.h"

@class IGUserSession, NSString;
@protocol IGShoppingPDPLightboxProductImageSectionControllerDelegate;

@interface IGShoppingPDPLightboxProductImageSectionController : IGListSectionController {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  IGShoppingPDPLightboxProductImageViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGShoppingPDPLightboxProductImageSectionControllerDelegate> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
@end

#endif /* IGShoppingPDPLightboxProductImageSectionController_h */
