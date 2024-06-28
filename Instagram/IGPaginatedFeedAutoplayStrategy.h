//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPaginatedFeedAutoplayStrategy_h
#define IGPaginatedFeedAutoplayStrategy_h
@import Foundation;

#include "IGPaginatedFeedController.h"
#include "IGPlaybackCoordinatorStrategy-Protocol.h"

@class NSString;

@interface IGPaginatedFeedAutoplayStrategy : NSObject<IGPlaybackCoordinatorStrategy> {
  /* instance variables */
  IGPaginatedFeedController *_paginatedFeedController;
}

@property (readonly, nonatomic) BOOL requiresUpdatesOnVisibilityUnchanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPaginatedFeedController:(id)controller collectionViewVisibility:(id)visibility;
- (id)resolve:(id)resolve withContext:(id)context;
@end

#endif /* IGPaginatedFeedAutoplayStrategy_h */