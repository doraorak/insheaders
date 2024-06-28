//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFRealTimer_h
#define FNFRealTimer_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "OS_dispatch_source-Protocol.h"

@class NSString;

@interface FNFRealTimer : NSObject<NSObject> {
  /* instance variables */
  NSObject<OS_dispatch_source> *_timer;
  BOOL _suspended;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInterval:(unsigned long long)interval fireOnce:(BOOL)once queue:(id)queue block:(id /* block */)block;
- (void)pause;
- (void)resume;
- (BOOL)isPaused;
- (void)dealloc;
@end

#endif /* FNFRealTimer_h */
