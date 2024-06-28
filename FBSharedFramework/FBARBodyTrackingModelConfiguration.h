//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARBodyTrackingModelConfiguration_h
#define FBARBodyTrackingModelConfiguration_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSURL;

@interface FBARBodyTrackingModelConfiguration : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSURL *execNetFileURL;
@property (readonly, copy, nonatomic) NSURL *predictNetFileURL;
@property (readonly, nonatomic) BOOL isFullyAsync;
@property (readonly, nonatomic) long long maxWaitTimeout;
@property (readonly, nonatomic) long long modelVersion;

/* instance methods */
- (id)initWithExecNetFileURL:(id)url predictNetFileURL:(id)url isFullyAsync:(BOOL)async maxWaitTimeout:(long long)timeout modelVersion:(long long)version;
@end

#endif /* FBARBodyTrackingModelConfiguration_h */