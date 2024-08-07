//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCacheLogger_h
#define IGVideoCacheLogger_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGVideoCacheLogger : NSObject<NSObject> {
  /* instance variables */
  NSString *_mediaId;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
  BOOL _firstVideoResponseProcessed;
  BOOL _firstVideoResponseDataAtLeastPartiallyInCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMediaId:(id)id;
- (void)notifyNumBytesInCache:(long long)cache forRequest:(id)request;
- (void)notifyVideoDidExitForMediaId:(id)id;
- (void)notifyVideoDidPauseForMediaId:(id)id;
@end

#endif /* IGVideoCacheLogger_h */
