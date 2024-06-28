//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListTransitionData_h
#define IGListTransitionData_h
@import Foundation;

@class NSArray;

@interface IGListTransitionData : NSObject

@property (readonly, copy, nonatomic) NSArray *fromObjects;
@property (readonly, copy, nonatomic) NSArray *toObjects;
@property (readonly, copy, nonatomic) NSArray *toSectionControllers;

/* instance methods */
- (id)initFromObjects:(id)objects toObjects:(id)objects toSectionControllers:(id)controllers;
@end

#endif /* IGListTransitionData_h */
