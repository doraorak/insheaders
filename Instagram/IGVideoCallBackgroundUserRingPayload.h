//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallBackgroundUserRingPayload_h
#define IGVideoCallBackgroundUserRingPayload_h
@import Foundation;

#include "IGUserSessionPayload-Protocol.h"
#include "IGVideoCallNotification.h"
#include "IGVideoCallNotificationContext.h"
#include "IGVideoCallResolvedSession.h"

@class NSString;

@interface IGVideoCallBackgroundUserRingPayload : NSObject<IGUserSessionPayload>

@property (readonly, nonatomic) IGVideoCallNotification *notification;
@property (readonly, nonatomic) IGVideoCallNotificationContext *context;
@property (readonly, nonatomic) IGVideoCallResolvedSession *resolvedSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotification:(id)notification context:(id)context resolvedSession:(id)session;
@end

#endif /* IGVideoCallBackgroundUserRingPayload_h */
