//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageUpdatePayload_h
#define IGDirectMessageUpdatePayload_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectDjangoThreadIdentifier.h"
#include "IGDirectMessageOutgoingUpdateAction.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface IGDirectMessageUpdatePayload : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *messageId;
@property (readonly, copy, nonatomic) NSDate *messageSentDate;
@property (readonly, copy, nonatomic) NSString *threadId;
@property (readonly, copy, nonatomic) IGDirectDjangoThreadIdentifier *threadIdentifier;
@property (readonly, copy, nonatomic) IGDirectMessageOutgoingUpdateAction *action;
@property (readonly, copy, nonatomic) NSString *originalMessageClientContext;
@property (readonly, copy, nonatomic) NSString *updateClientContext;
@property (readonly, copy, nonatomic) NSString *updateOfflineThreadingId;
@property (readonly, nonatomic) BOOL isE2ELoggingSampled;
@property (readonly, nonatomic) long long productType;
@property (readonly, nonatomic) BOOL isInstamadillo;
@property (readonly, nonatomic) BOOL isInstamadilloTTLC;
@property (readonly, copy, nonatomic) NSString *foregroundSessionId;
@property (readonly, nonatomic) unsigned long long instamadilloThreadId;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMessageId:(id)id messageSentDate:(id)date threadId:(id)id threadIdentifier:(id)identifier action:(id)action originalMessageClientContext:(id)context updateClientContext:(id)context updateOfflineThreadingId:(id)id isE2ELoggingSampled:(BOOL)sampled productType:(long long)type isInstamadillo:(BOOL)instamadillo isInstamadilloTTLC:(BOOL)ttlc foregroundSessionId:(id)id instamadilloThreadId:(unsigned long long)id;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectMessageUpdatePayload_h */