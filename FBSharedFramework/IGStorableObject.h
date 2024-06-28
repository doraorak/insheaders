//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStorableObject_h
#define IGStorableObject_h
@import Foundation;

#include "IGIdentifying-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGStorableObject : NSObject<IGIdentifying, NSCoding, NSCopying> {
  /* instance variables */
  long long _initReason;
}

@property (retain, nonatomic) NSString *pk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initCompletelyUnsafeWithNoPk;
- (id)initWithPk:(id)pk;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (long long)debugInitReason;
- (BOOL)configureWithPk:(id)pk;
- (BOOL)updateWithTreeIfFresh:(id)fresh;
- (BOOL)updateWithTree:(id)tree;
- (BOOL)updateWithStaleTree:(id)tree;
- (void)objectStoreWillClear;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGStorableObject_h */