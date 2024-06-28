//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountDiscoveryRowSectionController_h
#define IGAccountDiscoveryRowSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGAccountDiscoveryRowViewModel.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGAccountDiscoveryRowSectionControllerDelegate;

@interface IGAccountDiscoveryRowSectionController : IGListGenericSectionController<NSObject> {
  /* instance variables */
  IGAccountDiscoveryRowViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGAccountDiscoveryRowSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemWithMedia:(id)media;
@end

#endif /* IGAccountDiscoveryRowSectionController_h */
