//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreatorToolsValuePropIntentTarget_h
#define IGCreatorToolsValuePropIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGCreatorToolsValuePropIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *valuePropFlow;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithValuePropFlow:(id)flow entryPoint:(id)point;
@end

#endif /* IGCreatorToolsValuePropIntentTarget_h */
