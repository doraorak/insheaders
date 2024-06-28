//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserCallScopedObjectStore_h
#define IGUserCallScopedObjectStore_h
@import Foundation;

@class IGUserSession, NSMutableDictionary;

@interface IGUserCallScopedObjectStore : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSMutableDictionary *_callScopedObjectStore;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
@end

#endif /* IGUserCallScopedObjectStore_h */
