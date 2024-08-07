//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationDetailIntentTarget_h
#define IGLocationDetailIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGAPILocationDict, NSString;

@interface IGLocationDetailIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGAPILocationDict *location;
@property (readonly, nonatomic) NSString *locationPk;
@property (readonly, nonatomic) NSString *initialLocationName;
@property (readonly, nonatomic) NSString *previousAnalyticsModule;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLocation:(id)location locationPk:(id)pk initialLocationName:(id)name previousAnalyticsModule:(id)module entryPoint:(id)point;
@end

#endif /* IGLocationDetailIntentTarget_h */
