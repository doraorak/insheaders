//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageRepliesInfoMetadata_h
#define IGDirectMessageRepliesInfoMetadata_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGDirectMessageRepliesInfoMetadata : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long commentCount;
@property (readonly, nonatomic) BOOL areAllCommentsSeen;
@property (readonly, copy, nonatomic) NSString *facadeMediaId;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithCommentCount:(long long)count areAllCommentsSeen:(BOOL)seen facadeMediaId:(id)id;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectMessageRepliesInfoMetadata_h */
