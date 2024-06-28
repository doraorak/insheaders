//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryMapSearchEmptySectionController_h
#define IGDiscoveryMapSearchEmptySectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"

@protocol IGDiscoveryMapSearchEmptySectionControllerDelegate;

@interface IGDiscoveryMapSearchEmptySectionController : IGListGenericSectionController

@property (weak, nonatomic) NSObject<IGDiscoveryMapSearchEmptySectionControllerDelegate> *delegate;

/* instance methods */
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)_didTapExploreNearbyButton;
@end

#endif /* IGDiscoveryMapSearchEmptySectionController_h */