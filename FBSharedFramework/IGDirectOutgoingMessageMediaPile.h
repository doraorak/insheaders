//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingMessageMediaPile_h
#define IGDirectOutgoingMessageMediaPile_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IGDirectOutgoingMessageMediaPile : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSArray *mediaList;
@property (readonly, copy, nonatomic) NSString *uploadId;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMediaList:(id)list uploadId:(id)id;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectOutgoingMessageMediaPile_h */
