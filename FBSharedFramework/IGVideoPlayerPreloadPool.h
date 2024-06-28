//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoPlayerPreloadPool_h
#define IGVideoPlayerPreloadPool_h
@import Foundation;

#include "IGUserLauncherSet-Protocol.h"
#include "IGUserSession.h"
#include "IGVideoPlayerManaging-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface IGVideoPlayerPreloadPool : NSObject {
  /* instance variables */
  NSObject<IGVideoPlayerManaging> *_manager;
  unsigned long long _maxNumPlayerInPreloadPool;
  NSMutableDictionary *_pool;
  NSMutableArray *_recencyList;
  IGUserSession *_userSession;
  NSObject<IGUserLauncherSet> *_launcherSet;
}

/* instance methods */
- (void)dealloc;
- (id)initWithPlayerManager:(id)manager userSession:(id)session maxNumPlayerInPreloadPool:(unsigned long long)pool;
- (void)_didReceiveMemoryWarning:(id)warning;
@end

#endif /* IGVideoPlayerPreloadPool_h */