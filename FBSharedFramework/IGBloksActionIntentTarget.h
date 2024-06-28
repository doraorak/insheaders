//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksActionIntentTarget_h
#define IGBloksActionIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSDictionary, NSString;

@interface IGBloksActionIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAppID:(id)id params:(id)params;
@end

#endif /* IGBloksActionIntentTarget_h */
