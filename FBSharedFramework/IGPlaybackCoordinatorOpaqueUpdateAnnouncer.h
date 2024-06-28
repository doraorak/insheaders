//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPlaybackCoordinatorOpaqueUpdateAnnouncer_h
#define IGPlaybackCoordinatorOpaqueUpdateAnnouncer_h
@import Foundation;

#include "IGPlaybackCoordinating-Protocol.h"
#include "IGPlaybackCoordinatorUpdateListener-Protocol.h"

@class NSString;
@protocol IGPlaybackCoordinatorUpdateAnnouncer;

@interface IGPlaybackCoordinatorOpaqueUpdateAnnouncer : NSObject<IGPlaybackCoordinatorUpdateListener> {
  /* instance variables */
  NSObject<IGPlaybackCoordinating> *_opaqueCoordinator;
  NSObject<IGPlaybackCoordinatorUpdateAnnouncer> *_announcer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOpaqueCoordinator:(id)coordinator internalCoordinator:(id)coordinator;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)playbackCoordinator:(id)coordinator willResolveChangesWithContext:(id)context;
- (void)playbackCoordinator:(id)coordinator willApplyChanges:(id)changes;
- (void)playbackCoordinator:(id)coordinator didApplyChanges:(id)changes;
- (void)playbackCoordinator:(id)coordinator didResolveChangesWithContext:(id)context;
@end

#endif /* IGPlaybackCoordinatorOpaqueUpdateAnnouncer_h */