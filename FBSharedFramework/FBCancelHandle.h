//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCancelHandle_h
#define FBCancelHandle_h
@import Foundation;

#include "FBCancelable-Protocol.h"

@interface FBCancelHandle : NSObject<FBCancelable> {
  /* instance variables */
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
  BOOL _invalidated;
  id /* block */ _cancelBlock;
}

@property (readonly) BOOL cancelled;

/* class methods */
+ (id)newWithCancelBlock:(id /* block */)block;

/* instance methods */
- (void)setCancelBlock:(id /* block */)block;
- (void)cancel;
- (BOOL)invalidate;
@end

#endif /* FBCancelHandle_h */
