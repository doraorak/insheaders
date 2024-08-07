//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC10IABLogging16IABRefreshAction_h
#define _TtC10IABLogging16IABRefreshAction_h
@import Foundation;

#include "_TtP10IABLogging23IABUnifiedLoggingAction_-Protocol.h"

@class NSString;

@interface _TtC10IABLogging16IABRefreshAction : NSObject<_TtP10IABLogging23IABUnifiedLoggingAction_> // (Swift)

@property (nonatomic, readonly) NSString *unifiedEventName;
@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *iabSessionID;
@property (nonatomic, readonly) double eventTs;
@property (nonatomic, readonly) NSString *trackingToken;
@property (nonatomic, readonly) long long adId;
@property (nonatomic, readonly) NSString *refreshFromType;

/* instance methods */
- (id)initWithUnifiedEventName:(id)name category:(long long)category iabSessionID:(id)id eventTs:(double)ts trackingToken:(id)token adId:(long long)id refreshFromType:(id)type;
- (id)init;
@end

#endif /* _TtC10IABLogging16IABRefreshAction_h */
