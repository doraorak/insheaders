//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBXPostingNativeFeature_h
#define FBXPostingNativeFeature_h
@import Foundation;

#include "FBValueObject.h"
#include "FBXPostingFeatureData.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBXPostingNativeFeature : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *featureId;
@property (readonly, copy, nonatomic) FBXPostingFeatureData *data;

/* instance methods */
- (id)initWithFeatureId:(id)id data:(id)data;
@end

#endif /* FBXPostingNativeFeature_h */