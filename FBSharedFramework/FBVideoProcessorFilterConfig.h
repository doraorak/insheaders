//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBVideoProcessorFilterConfig_h
#define FBVideoProcessorFilterConfig_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;
@protocol FBVideoProcessorFilterLibraryLoader;

@interface FBVideoProcessorFilterConfig : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *filterName;
@property (readonly, copy, nonatomic) NSDictionary *filterParameters;
@property (readonly, nonatomic) NSObject<FBVideoProcessorFilterLibraryLoader> *filterLibraryLoader;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFilterName:(id)name filterParameters:(id)parameters;
- (id)initWithFilterName:(id)name filterParameters:(id)parameters filterLibraryLoader:(id)loader;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBVideoProcessorFilterConfig_h */