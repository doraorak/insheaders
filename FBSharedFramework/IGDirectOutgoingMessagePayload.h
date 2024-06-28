//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingMessagePayload_h
#define IGDirectOutgoingMessagePayload_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectDjangoThreadIdentifier.h"
#include "IGDirectInstamadilloSendMetadata.h"
#include "IGDirectOutgoingMessageContent.h"
#include "IGDirectOutgoingMessagePrivateReplyPayload.h"
#include "IGDirectOutgoingMessageSendAttribution.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface IGDirectOutgoingMessagePayload : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *clientContext;
@property (readonly, copy, nonatomic) NSString *offlineThreadingId;
@property (readonly, copy, nonatomic) IGDirectDjangoThreadIdentifier *threadTarget;
@property (readonly, copy, nonatomic) IGDirectOutgoingMessageContent *content;
@property (readonly, copy, nonatomic) NSDate *latestPublishedMessageSentDate;
@property (readonly, copy, nonatomic) NSDate *userSendDate;
@property (readonly, nonatomic) double replyTimeMilliseconds;
@property (readonly, nonatomic) BOOL isE2ELoggingSampled;
@property (readonly, copy, nonatomic) IGDirectOutgoingMessageSendAttribution *sendAttribution;
@property (readonly, nonatomic) long long productType;
@property (readonly, copy, nonatomic) NSNumber *ephemeralDurationSec;
@property (readonly, copy, nonatomic) IGDirectOutgoingMessagePrivateReplyPayload *privateReplyPayload;
@property (readonly, copy, nonatomic) NSString *foregroundSessionId;
@property (readonly, nonatomic) BOOL sendSilently;
@property (readonly, nonatomic) BOOL isBlendedDualSend;
@property (readonly, copy, nonatomic) IGDirectInstamadilloSendMetadata *instamadilloSendMetadata;
@property (readonly, nonatomic) BOOL shouldCrosspost;
@property (readonly, copy, nonatomic) NSDictionary *associatedMultiModalParameters;

/* instance methods */
- (id)initWithClientContext:(id)context offlineThreadingId:(id)id threadTarget:(id)target content:(id)content latestPublishedMessageSentDate:(id)date userSendDate:(id)date replyTimeMilliseconds:(double)milliseconds isE2ELoggingSampled:(BOOL)sampled sendAttribution:(id)attribution productType:(long long)type ephemeralDurationSec:(id)sec privateReplyPayload:(id)payload foregroundSessionId:(id)id sendSilently:(BOOL)silently isBlendedDualSend:(BOOL)send instamadilloSendMetadata:(id)metadata shouldCrosspost:(BOOL)crosspost associatedMultiModalParameters:(id)parameters;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectOutgoingMessagePayload_h */