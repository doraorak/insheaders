//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSObject_AssociatedObject_h
#define NSObject_AssociatedObject_h
@import Foundation;

@interface NSObject (AssociatedObject)
/* instance methods */
- (id)getAssociatedObjectForKey:(id)key;
- (void)setAssociatedObject:(id)object forKey:(id)key policy:(unsigned long long)policy;
- (void)setAssociatedObject:(id)object forKey:(id)key;
- (void)removeAssociatedObjectForKey:(id)key;
- (void)addDisposableObject:(id)object;
- (void)removeDisposableObject:(id)object;
- (void)performOnDealloc:(id /* block */)dealloc;
@end

#endif /* NSObject_AssociatedObject_h */
