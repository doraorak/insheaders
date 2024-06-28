//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCCGestureGatingClassFilter_h
#define FBCCGestureGatingClassFilter_h
@import Foundation;

@interface FBCCGestureGatingClassFilter : NSObject

@property (readonly, nonatomic) Class filteringClass;
@property (readonly, copy, nonatomic) id /* block */ predicateBlock;

/* class methods */
+ (id)newWithPredicateBlock:(id /* block */)block;

/* instance methods */
- (id)initWithFilteringClass:(Class)class predicateBlock:(id /* block */)block;
@end

#endif /* FBCCGestureGatingClassFilter_h */
