//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerPlaybackSession_h
#define IGSundialViewerPlaybackSession_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "IGMedia.h"
#include "IGPlaybackCoordinatorSessionPlaybackEligibility.h"
#include "IGPostItemProtocol-Protocol.h"
#include "IGSundialMediaPlaybackEligibility-Protocol.h"
#include "IGSundialViewerPlaybackSessionType-Protocol.h"

@class NSString;
@protocol IGSundialPlaybackCompatible;

@interface IGSundialViewerPlaybackSession : NSObject<IGSundialViewerPlaybackSessionType> {
  /* instance variables */
  NSObject<IGSundialPlaybackCompatible> *_videoCell;
  IGMedia *_media;
  NSObject<IGPostItemProtocol> *_subItem;
  IGPlaybackCoordinatorSessionPlaybackEligibility *_playbackEligibilityOverride;
  NSObject<IGSundialMediaPlaybackEligibility> *_mediaPlaybackEligibility;
  NSObject<IGListDiffable> *_listKitObject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoCell:(id)cell media:(id)media listKitObject:(id)object mediaPlaybackEligibility:(id)eligibility;
- (id)initWithVideoCell:(id)cell media:(id)media subItem:(id)item listKitObject:(id)object mediaPlaybackEligibility:(id)eligibility;
- (void)willAttachToCoordinator:(id)coordinator;
- (id)playbackEligibility;
- (void)applyCoordinatedEvent:(long long)event withContext:(id)context;
- (void)addVideoPlaybackListener:(id)listener;
- (void)overridePlaybackEligibilityWithEligibility:(id)eligibility;
- (void)removePlaybackEligibilityOverride;
- (BOOL)managesPlaybackForCell:(id)cell;
@end

#endif /* IGSundialViewerPlaybackSession_h */
