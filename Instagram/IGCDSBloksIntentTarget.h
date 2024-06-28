//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCDSBloksIntentTarget_h
#define IGCDSBloksIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSDictionary, NSString;

@interface IGCDSBloksIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSString *paramsJSON;
@property (readonly, nonatomic) NSString *screenOptionsJSON;
@property (readonly, nonatomic) NSString *screenConfigJSON;
@property (readonly, nonatomic) NSDictionary *nativeProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAppID:(id)id paramsJSON:(id)json screenOptionsJSON:(id)json screenConfigJSON:(id)json nativeProps:(id)props;
@end

#endif /* IGCDSBloksIntentTarget_h */
