//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBXPostingValidationError_h
#define FBXPostingValidationError_h
@import Foundation;

#include "FBValueObject.h"
#include "FBXPostingFeatureData.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBXPostingValidationError : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) NSString *featureId;
@property (readonly, nonatomic) unsigned long long shareType;
@property (readonly, nonatomic) unsigned long long errorType;
@property (readonly, copy, nonatomic) FBXPostingFeatureData *reportingData;

/* instance methods */
- (id)initWithFeatureId:(id)id shareType:(unsigned long long)type errorType:(unsigned long long)type reportingData:(id)data;
@end

#endif /* FBXPostingValidationError_h */
