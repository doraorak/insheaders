//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnonymousLikesSectionController_h
#define IGAnonymousLikesSectionController_h
@import Foundation;

#include "IGListSectionController.h"

@class IGUserListNetworkDataSource;
@protocol IGAnonymousLikesSectionControllerDelegate;

@interface IGAnonymousLikesSectionController : IGListSectionController {
  /* instance variables */
  IGUserListNetworkDataSource *_networkDataSource;
}

@property (weak, nonatomic) NSObject<IGAnonymousLikesSectionControllerDelegate> *delegate;

/* instance methods */
- (id)initWithUserListNetworkDataSource:(id)source;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
@end

#endif /* IGAnonymousLikesSectionController_h */