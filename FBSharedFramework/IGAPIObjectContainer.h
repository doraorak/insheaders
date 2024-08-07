//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIObjectContainer_h
#define IGAPIObjectContainer_h
@import Foundation;

@class NSObject;

@interface IGAPIObjectContainer : NSObject {
  /* instance variables */
  NSObject *_weakObject;
  NSObject *_strongObject;
}

@property (readonly, nonatomic) NSObject *object;

/* class methods */
+ (id)withStrongObject:(id)object;
+ (id)withWeakObject:(id)object;

/* instance methods */
- (id)initWithStrongObject:(id)object orWeakObject:(id)object;
@end

#endif /* IGAPIObjectContainer_h */
