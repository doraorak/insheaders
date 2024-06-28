//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallNotificationAckPayload_h
#define IGVideoCallNotificationAckPayload_h
@import Foundation;

#include "IGUserSessionPayload-Protocol.h"

@class NSNumber, NSString;

@interface IGVideoCallNotificationAckPayload : NSObject<IGUserSessionPayload>

@property (readonly, nonatomic) NSString *videoCallId;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSNumber *createdTimeStampMs;
@property (readonly, nonatomic) BOOL isVoip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoCallId:(id)id type:(id)type createdTimeStampMs:(id)ms isVoip:(BOOL)voip;
@end

#endif /* IGVideoCallNotificationAckPayload_h */
