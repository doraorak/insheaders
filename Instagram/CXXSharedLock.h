//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CXXSharedLock_h
#define CXXSharedLock_h
@import Foundation;

#include "NSLocking-Protocol.h"

@protocol struct shared_ptr<std::recursive_mutex> { struct recursive_mutex * x0; struct __shared_weak_count * x1; }, {shared_ptr<std::recursive_mutex>="__ptr_"^{recursive_mutex}"__cntrl_"^{__shared_weak_count}};

@interface CXXSharedLock : NSObject<NSLocking>

@property struct shared_ptr<std::recursive_mutex> { struct recursive_mutex * x0; struct __shared_weak_count * x1; } mutex;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithMutex:(struct shared_ptr<std::recursive_mutex> { struct recursive_mutex * x0; struct __shared_weak_count * x1; })mutex;
- (void)lock;
- (BOOL)tryLock;
- (void)unlock;
@end

#endif /* CXXSharedLock_h */
