//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMinimizableContextDelegate_Protocol_h
#define IGMinimizableContextDelegate_Protocol_h
@import Foundation;

@protocol IGMinimizableContextDelegate <NSObject>
/* instance methods */
- (void)minimizableContextDidBegin:(id)begin;
- (BOOL)minimizableContextCanMinimize;
- (BOOL)minimizableContextCanMaximize;
- (void)minimizableContextWillMaximizeWithSharedObject:(id)object;
- (void)minimizableContextWillMaximizeWithSharedObject:(id)object;
- (void)minimizableContextWillMinimizeWithSharedObject:(id)object;
- (void)minimizableContextWillMinimizeWithSharedObject:(id)object;
- (void)minimizableContextDidMaximizeWithSharedObject:(id)object;
- (void)minimizableContextDidMaximizeWithSharedObject:(id)object;
- (void)minimizableContextDidMinimizeWithSharedObject:(id)object;
- (void)minimizableContextDidMinimizeWithSharedObject:(id)object;
- (id)minimizableContextSharedObject;
@end

#endif /* IGMinimizableContextDelegate_Protocol_h */