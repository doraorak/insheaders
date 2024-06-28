//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABLoggingViewModeTimePair_h
#define IABLoggingViewModeTimePair_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate;

@interface IABLoggingViewModeTimePair : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) unsigned long long viewMode;
@property (readonly, copy, nonatomic) NSDate *timestamp;

/* instance methods */
- (id)initWithViewMode:(unsigned long long)mode timestamp:(id)timestamp;
@end

#endif /* IABLoggingViewModeTimePair_h */