//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBKVOController_h
#define FBKVOController_h
@import Foundation;

@class NSMapTable;

@interface FBKVOController : NSObject {
  /* instance variables */
  NSMapTable *_objectInfosMap;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
}

@property (readonly, weak, nonatomic) id observer;

/* instance methods */
- (id)initWithObserver:(id)observer;
- (void)dealloc;
- (id)debugDescription;
- (void)_observe:(id)_observe info:(id)info;
- (void)_unobserve:(id)_unobserve info:(id)info;
- (void)_unobserve:(id)_unobserve;
- (void)_unobserveAll;
- (void)observe:(id)observe keyPath:(id)path options:(unsigned long long)options block:(id /* block */)block;
- (void)observe:(id)observe keyPaths:(id)paths options:(unsigned long long)options block:(id /* block */)block;
- (void)observe:(id)observe keyPath:(id)path options:(unsigned long long)options action:(SEL)action;
- (void)observe:(id)observe keyPaths:(id)paths options:(unsigned long long)options action:(SEL)action;
- (void)observe:(id)observe keyPath:(id)path options:(unsigned long long)options context:(void *)context;
- (void)observe:(id)observe keyPaths:(id)paths options:(unsigned long long)options context:(void *)context;
- (void)unobserve:(id)unobserve keyPath:(id)path;
- (void)unobserve:(id)unobserve;
- (void)unobserveAll;
@end

#endif /* FBKVOController_h */