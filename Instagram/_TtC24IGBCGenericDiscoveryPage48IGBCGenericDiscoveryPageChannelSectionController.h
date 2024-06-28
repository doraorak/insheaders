//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGBCGenericDiscoveryPage48IGBCGenericDiscoveryPageChannelSectionController_h
#define _TtC24IGBCGenericDiscoveryPage48IGBCGenericDiscoveryPageChannelSectionController_h
@import Foundation;

#include "IGListSectionController.h"

@interface _TtC24IGBCGenericDiscoveryPage48IGBCGenericDiscoveryPageChannelSectionController : IGListSectionController { // (Swift)
  /* instance variables */
   userSession;
   viewModel;
}

/* instance methods */
- (void)didUpdateToObject:(id)object;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (id)init;
@end

#endif /* _TtC24IGBCGenericDiscoveryPage48IGBCGenericDiscoveryPageChannelSectionController_h */
