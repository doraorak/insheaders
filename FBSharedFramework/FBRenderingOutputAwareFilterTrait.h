//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBRenderingOutputAwareFilterTrait_h
#define FBRenderingOutputAwareFilterTrait_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface FBRenderingOutputAwareFilterTrait : NSObject<NSObject>

@property (readonly, nonatomic) unsigned long long supportedRenderingOutputOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithSupportedRenderingOptions:(unsigned long long)options;

/* instance methods */
- (id)initWithSupportedRenderingOptions:(unsigned long long)options;
@end

#endif /* FBRenderingOutputAwareFilterTrait_h */
