//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAnnouncerBase_h
#define FBAnnouncerBase_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol {shared_ptr<const std::vector<__weak id>>="__ptr_"^v"__cntrl_"^{__shared_weak_count}};

@interface FBAnnouncerBase : NSObject<NSObject> {
  /* instance variables */
  struct shared_ptr<const std::vector<__weak id>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _listenerVector;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _listenerAddRemoveLock;
  struct FBAnnouncerListenerList * _listenerList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (BOOL)hasListeners;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* FBAnnouncerBase_h */