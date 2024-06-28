//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSeenStateObjectData_h
#define IGSeenStateObjectData_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray;

@interface IGSeenStateObjectData : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSArray *seenIDs;
@property (readonly, copy, nonatomic) NSArray *viewInfos;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithSeenIDs:(id)ids viewInfos:(id)infos;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGSeenStateObjectData_h */