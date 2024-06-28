//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallJoinCallKitIntentTarget_h
#define IGVideoCallJoinCallKitIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class FBWeakObjectContainer, IGVideoCallKey, NSArray, NSDictionary, NSString;

@interface IGVideoCallJoinCallKitIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) long long trigger;
@property (readonly, nonatomic) IGVideoCallKey *key;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *threadId;
@property (readonly, nonatomic) NSString *threadDisplayName;
@property (readonly, nonatomic) NSArray *threadUsers;
@property (readonly, nonatomic) BOOL isShhMode;
@property (readonly, nonatomic) BOOL isE2eeMandated;
@property (readonly, nonatomic) BOOL isCutoverThread;
@property (readonly, nonatomic) NSDictionary *productParams;
@property (readonly, nonatomic) FBWeakObjectContainer *callFunnelClient;
@property (readonly, nonatomic) id /* block */ joinCallCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTrigger:(long long)trigger key:(id)key type:(long long)type threadId:(id)id threadDisplayName:(id)name threadUsers:(id)users isShhMode:(BOOL)mode isE2eeMandated:(BOOL)mandated isCutoverThread:(BOOL)thread productParams:(id)params callFunnelClient:(id)client joinCallCompletionBlock:(id /* block */)block;
@end

#endif /* IGVideoCallJoinCallKitIntentTarget_h */
