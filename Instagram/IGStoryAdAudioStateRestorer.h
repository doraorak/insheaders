//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryAdAudioStateRestorer_h
#define IGStoryAdAudioStateRestorer_h
@import Foundation;

#include "IGAudioStatusChangeListener-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSString;

@interface IGStoryAdAudioStateRestorer : NSObject<IGAudioStatusChangeListener> {
  /* instance variables */
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  long long _savedAudioStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLauncherSet:(id)set;
- (void)audioStatusDidChangeIsAudioEnabled:(BOOL)enabled forReason:(long long)reason;
@end

#endif /* IGStoryAdAudioStateRestorer_h */
