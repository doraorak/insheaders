//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11IGVideoView32IGDefaultVideoViewPlayerProvider_h
#define _TtC11IGVideoView32IGDefaultVideoViewPlayerProvider_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "_TtP11IGVideoView25IGVideoViewPlayerProvider_-Protocol.h"

@interface _TtC11IGVideoView32IGDefaultVideoViewPlayerProvider : _TtCs12_SwiftObject<_TtP11IGVideoView25IGVideoViewPlayerProvider_> { // (Swift)
  /* instance variables */
   playerManager;
}

/* instance methods */
- (id)dequeueUnconfiguredPlayerFor:(id)for mode:(long long)mode config:(id)config;
- (id)dequeuePreconfiguredPlayerFor:(id)for;
- (void)requeuePlayer:(id)player with:(long long)with for:(id)for;
@end

#endif /* _TtC11IGVideoView32IGDefaultVideoViewPlayerProvider_h */
