//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTimedFilterInfo_h
#define IGTimedFilterInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface IGTimedFilterInfo : NSObject<NSSecureCoding> {
  /* instance variables */
  NSString *_igluFilterName;
}

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFilterName:(id)name timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGTimedFilterInfo_h */
