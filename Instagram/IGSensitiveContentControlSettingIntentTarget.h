//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSensitiveContentControlSettingIntentTarget_h
#define IGSensitiveContentControlSettingIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGSensitiveContentControlSettingIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic) NSString *nuaAction;
@property (readonly, nonatomic) id /* block */ onDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSessionID:(id)id analyticsModule:(id)module location:(id)location entryPoint:(id)point nuaAction:(id)action onDismiss:(id /* block */)dismiss;
@end

#endif /* IGSensitiveContentControlSettingIntentTarget_h */