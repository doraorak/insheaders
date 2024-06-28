//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBXPostingFeatureData_h
#define FBXPostingFeatureData_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBXPostingFeatureData : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) long long igLoggingId;
@property (readonly, copy, nonatomic) NSString *ccpDescription;
@property (readonly, copy, nonatomic) NSString *xarDescription;

/* instance methods */
- (id)initWithFeatureId:(long long)id ccpDescription:(id)description xarDescription:(id)description;
@end

#endif /* FBXPostingFeatureData_h */