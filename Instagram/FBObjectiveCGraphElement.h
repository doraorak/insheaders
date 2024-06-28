//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBObjectiveCGraphElement_h
#define FBObjectiveCGraphElement_h
@import Foundation;

#include "FBObjectGraphConfiguration.h"

@class NSArray;

@interface FBObjectiveCGraphElement : NSObject

@property (readonly, copy, nonatomic) NSArray *namePath;
@property (weak, nonatomic) id object;
@property (readonly, nonatomic) FBObjectGraphConfiguration *configuration;

/* instance methods */
- (id)initWithObject:(id)object;
- (id)initWithObject:(id)object configuration:(id)configuration;
- (id)initWithObject:(id)object configuration:(id)configuration namePath:(id)path;
- (id)allRetainedObjects;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)objectAddress;
- (id)classNameOrNull;
- (Class)objectClass;
- (BOOL)isSwift;
@end

#endif /* FBObjectiveCGraphElement_h */