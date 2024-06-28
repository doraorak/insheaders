//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRuntimeAnnouncer_h
#define IGRuntimeAnnouncer_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSHashTable, NSString;

@interface IGRuntimeAnnouncer : NSObject<NSObject> {
  /* instance variables */
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
  NSHashTable *_listeners;
  NSArray *_strongListeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)forwardingTargetForSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (BOOL)hasListeners;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (BOOL)respondsToSelector:(SEL)selector;
- (BOOL)conformsToProtocol:(id)protocol;
@end

#endif /* IGRuntimeAnnouncer_h */
