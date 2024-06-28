//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMPFilterConfig_h
#define FBMPFilterConfig_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary, NSString;

@interface FBMPFilterConfig : NSObject<NSObject>

@property (readonly, nonatomic) Class filterClass;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFilterClass:(Class)class dictionary:(id)dictionary;
@end

#endif /* FBMPFilterConfig_h */
