//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBIGLUFilterContext_h
#define FBIGLUFilterContext_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSString;
@protocol struct shared_ptr<iglu::filterkit::IFilter> { struct IFilter * x0; struct __shared_weak_count * x1; };

@interface FBIGLUFilterContext : NSObject<NSCoding>

@property (readonly, nonatomic) NSString *filterIdentifier;
@property (readonly, nonatomic) double filterStrength;
@property (readonly, nonatomic) struct shared_ptr<iglu::filterkit::IFilter> { struct IFilter * x0; struct __shared_weak_count * x1; } igluFilter;

/* instance methods */
- (id)initWithFilterIdentifier:(id)identifier filterStrength:(double)strength;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* FBIGLUFilterContext_h */
