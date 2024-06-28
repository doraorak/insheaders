//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxDjangoPullToRefreshCoordinator_h
#define IGDirectInboxDjangoPullToRefreshCoordinator_h
@import Foundation;

#include "IGDirectInboxService.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGDirectInboxPullToRefreshCoordinatorDelegate;

@interface IGDirectInboxDjangoPullToRefreshCoordinator : NSObject<NSObject> {
  /* instance variables */
  IGDirectInboxService *_inboxService;
  NSString *_inboxRequestUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IGDirectInboxPullToRefreshCoordinatorDelegate> *delegate;

/* instance methods */
- (id)initWithInboxService:(id)service;
- (BOOL)canPullToRefresh:(long long)refresh;
- (void)executePullToRefreshWithParams:(id)params;
- (void)directInboxServiceFetchSucceededWithFetchInput:(id)input fetchOutput:(id)output chunkIndex:(unsigned long long)index;
- (void)directInboxServiceFetchFailedWithFetchInput:(id)input httpStatusCode:(long long)code error:(id)error willAutoRetry:(BOOL)retry;
@end

#endif /* IGDirectInboxDjangoPullToRefreshCoordinator_h */