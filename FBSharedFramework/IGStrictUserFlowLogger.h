//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStrictUserFlowLogger_h
#define IGStrictUserFlowLogger_h
@import Foundation;

#include "IGCreationSessionStateProvider-Protocol.h"

@class NSMutableDictionary;
@protocol IGDebugInfoProvider;

@interface IGStrictUserFlowLogger : NSObject {
  /* instance variables */
  NSMutableDictionary *_timerMap;
  NSMutableDictionary *_timedOutFlowIds;
  struct { BOOL shouldUpdateCreationAnnotationsBeforeEnd; } _loggerConfig;
}

@property (weak, nonatomic) NSObject<IGCreationSessionStateProvider> *creationSessionStateProvider;
@property (weak, nonatomic) NSObject<IGDebugInfoProvider> *debugInfoProvider;

/* instance methods */
- (id)init;
- (id)initWithConfig:(struct { BOOL x0; })config;
- (struct { BOOL x0; })_defaultConfig;
- (void)_updateCreationSessionAnnotationsIfNeeded:(unsigned long long)needed;
- (void)_annotateWithCreationSessionStateForFlowId:(unsigned long long)id;
- (id)_debugInfoString;
- (id)_navChain;
- (id)_markIfFlowAlreadyTimedOut:(unsigned long long)out WithDebugInfo:(id)info;
- (id)_timestampStrippedNavChain:(id)chain;
@end

#endif /* IGStrictUserFlowLogger_h */
