//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoLivePrefetcher_h
#define IGVideoLivePrefetcher_h
@import Foundation;

#include "IGDeviceLauncherSet-Protocol.h"
#include "IGPrefetchedMpdCache.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSessionProvider.h"
#include "IGVideoProxy.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGVideoLivePrefetcher : NSObject<NSObject> {
  /* instance variables */
  IGPrefetchedMpdCache *_prefetchedMpdCache;
  IGVideoProxy *_videoProxy;
  IGUserSessionProvider *_userSessionProvider;
  NSString *_userPk;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  NSObject<IGDeviceLauncherSet> *_deviceLauncherSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoProxy:(id)proxy userSessionProvider:(id)provider userPk:(id)pk deviceLauncherSet:(id)set featureSets:(id)sets;
- (void)setMpdData:(id)data forURL:(id)url expiration:(double)expiration;
@end

#endif /* IGVideoLivePrefetcher_h */