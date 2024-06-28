//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBLazyCreator_h
#define FBLazyCreator_h
@import Foundation;

@interface FBLazyCreator : NSObject {
  /* instance variables */
  BOOL _automatic;
  id /* block */ _creatorBlock;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _lock;
}

@property (readonly) BOOL created;
@property (readonly) id target;

/* class methods */
+ (id)automaticCreatorWithBlock:(id /* block */)block;

/* instance methods */
- (id)initWithCreationBlock:(id /* block */)block automatic:(BOOL)automatic;
- (id)_unlocked_createNowIfNeededAndReturnTarget;
@end

#endif /* FBLazyCreator_h */
