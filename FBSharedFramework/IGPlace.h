//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPlace_h
#define IGPlace_h
@import Foundation;

#include "IGAPILocationDict.h"
#include "IGSearchableItem-Protocol.h"
#include "NSCoding-Protocol.h"

@class NSString;

@interface IGPlace : NSObject<NSCoding, IGSearchableItem>

@property (readonly, nonatomic) NSString *pk;
@property (readonly, nonatomic) IGAPILocationDict *location;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)searchID;
- (id)searchableContent;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGPlace_h */