//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksHubOrderDetailsIntentTarget_h
#define IGBloksHubOrderDetailsIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGBloksHubOrderDetailsIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *orderId;
@property (readonly, nonatomic) NSString *referrerSurface;
@property (readonly, nonatomic) NSString *orderItemIds;
@property (readonly, nonatomic) NSString *additionalLoggingData;
@property (readonly, nonatomic) NSString *deeplinkDestination;
@property (readonly, nonatomic) NSString *deeplinkDestinationParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOrderId:(id)id referrerSurface:(id)surface orderItemIds:(id)ids additionalLoggingData:(id)data deeplinkDestination:(id)destination deeplinkDestinationParams:(id)params;
@end

#endif /* IGBloksHubOrderDetailsIntentTarget_h */
