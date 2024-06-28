//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaSegmentStreamDetail_h
#define FBMediaSegmentStreamDetail_h
@import Foundation;

#include "FBMediaSegmentStreamConfig.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSSet, NSString;

@interface FBMediaSegmentStreamDetail : NSObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) FBMediaSegmentStreamConfig *config;
@property (readonly, copy, nonatomic) NSString *streamId;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSSet *completedSegments;
@property (readonly, copy, nonatomic) NSArray *incompleteSegments;
@property (readonly, nonatomic) unsigned long long totalLength;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithConfig:(id)config streamId:(id)id token:(id)token completedSegments:(id)segments incompleteSegments:(id)segments totalLength:(unsigned long long)length;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBMediaSegmentStreamDetail_h */
