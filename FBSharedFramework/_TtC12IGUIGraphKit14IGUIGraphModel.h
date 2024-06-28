//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC12IGUIGraphKit14IGUIGraphModel_h
#define _TtC12IGUIGraphKit14IGUIGraphModel_h
@import Foundation;

#include "IGUIGraph-Protocol.h"

@interface _TtC12IGUIGraphKit14IGUIGraphModel : NSObject<IGUIGraph> {
  /* instance variables */
   surfaceGraphs;
   announcer;
   imageViewAutomatedAnnouncer;
   videoViewAutomatedAnnouncer;
   serialDispatcher;
   flipperModuleDataHelper;
   flipperPlugin;
   currentModule;
   qeConfiguration;
   surfaceTypeLock;
   surfaceGraphsLock;
   currentModuleLock;
}

/* instance methods */
- (void)setItems:(id)items forModule:(id)module;
- (void)addItems:(id)items toGraphOfModule:(id)module;
- (long long)surfaceTypeForModule:(id)module;
- (id)getCurrentOnscreenModule;
- (void)markItemOnScreenWithKey:(id)key forModule:(id)module;
- (void)markItemOffScreenWithKey:(id)key forModule:(id)module;
- (id)serializeModule:(id)module;
- (void)setPlugin:(id)plugin;
- (void)setRanker:(id)ranker surfaceType:(long long)type forModule:(id)module;
- (id)takeSnapshot;
- (void)resource:(id)resource didBecomeActiveInModule:(id)module;
- (void)resource:(id)resource didResignActiveInModule:(id)module;
- (id)initWith:(id)with imageViewAutomatedAnnouncer:(id)announcer videoViewAutomatedAnnouncer:(id)announcer enableOnSceenNodeLocking:(BOOL)locking;
- (id)init;
@end

#endif /* _TtC12IGUIGraphKit14IGUIGraphModel_h */