//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRTCKragleCallScopedObjectToolbox_h
#define IGRTCKragleCallScopedObjectToolbox_h
@import Foundation;

#include "IGUserCallScopedObjectStoreFetcher.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGUser, IGUserActions, IGUserStore;
@protocol IGUserUpdatedAnnouncer;

@interface IGRTCKragleCallScopedObjectToolbox : NSObject

@property (readonly, nonatomic) NSObject<IGUserLauncherSetProviding> *launcherSet;
@property (readonly, nonatomic) IGUserStore *userStore;
@property (readonly, nonatomic) IGUserActions *userActions;
@property (readonly, nonatomic) NSObject<IGUserUpdatedAnnouncer> *userUpdatedAnnouncer;
@property (readonly, nonatomic) IGUser *user;
@property (readonly, nonatomic) IGUserCallScopedObjectStoreFetcher *callScopedObjectStoreFetcher;

/* instance methods */
- (id)initWithLauncherSet:(id)set userStore:(id)store userActions:(id)actions userUpdatedAnnouncer:(id)announcer user:(id)user callScopedObjectStoreFetcher:(id)fetcher;
@end

#endif /* IGRTCKragleCallScopedObjectToolbox_h */
