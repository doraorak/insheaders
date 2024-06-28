//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveBroadcastAccessibilityDescriptor_h
#define IGLiveBroadcastAccessibilityDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface IGLiveBroadcastAccessibilityDescriptor : NSObject<NSCopying>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) unsigned long long traits;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGLiveBroadcastAccessibilityDescriptor_h */
