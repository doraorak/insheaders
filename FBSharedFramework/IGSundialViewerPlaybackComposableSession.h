//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerPlaybackComposableSession_h
#define IGSundialViewerPlaybackComposableSession_h
@import Foundation;

#include "IGPlaybackCoordinating-Protocol.h"
#include "IGPlaybackCoordinatorComposableSession.h"
#include "IGPlaybackCoordinatorOpaqueUpdateAnnouncer.h"
#include "IGPlaybackCoordinatorSession-Protocol.h"
#include "IGPlaybackCoordinatorSessionPlaybackEligibility.h"
#include "IGSundialPlaybackIsPlaying-Protocol.h"
#include "IGSundialVideoPlaybackEventRelay.h"
#include "IGSundialViewerPlaybackSessionType-Protocol.h"

@class NSString;

@interface IGSundialViewerPlaybackComposableSession : NSObject<IGPlaybackCoordinating, IGPlaybackCoordinatorSession, IGSundialViewerPlaybackSessionType> {
  /* instance variables */
  NSObject<IGSundialPlaybackIsPlaying> *_videoCell;
  IGPlaybackCoordinatorOpaqueUpdateAnnouncer *_opaqueAnnouncer;
  IGPlaybackCoordinatorComposableSession *_internalSession;
  IGPlaybackCoordinatorSessionPlaybackEligibility *_playbackEligibilityOverride;
  IGSundialVideoPlaybackEventRelay *_playbackEventRelay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedia:(id)media strategy:(id)strategy launcherSet:(id)set videoCell:(id)cell;
- (id)addSession:(id)session forPlaybackView:(id)view;
- (void)removeSession:(id)session;
- (void)updatePlayback;
- (id)sessionForKey:(id)key;
- (id)sessionKeysWithPredicate:(id)predicate;
- (void)addUpdateListener:(id)listener;
- (void)removeUpdateListener:(id)listener;
- (void)coordinate:(id /* block */)coordinate withContext:(id)context;
- (void)willAttachToCoordinator:(id)coordinator;
- (id)playbackEligibility;
- (void)applyCoordinatedEvent:(long long)event withContext:(id)context;
- (void)addVideoPlaybackListener:(id)listener;
- (void)overridePlaybackEligibilityWithEligibility:(id)eligibility;
- (void)removePlaybackEligibilityOverride;
- (BOOL)managesPlaybackForCell:(id)cell;
@end

#endif /* IGSundialViewerPlaybackComposableSession_h */
