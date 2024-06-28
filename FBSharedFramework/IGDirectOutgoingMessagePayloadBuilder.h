//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingMessagePayloadBuilder_h
#define IGDirectOutgoingMessagePayloadBuilder_h
@import Foundation;

#include "IGDirectDjangoThreadIdentifier.h"
#include "IGDirectInstamadilloSendMetadata.h"
#include "IGDirectOutgoingMessageContent.h"
#include "IGDirectOutgoingMessagePrivateReplyPayload.h"
#include "IGDirectOutgoingMessageSendAttribution.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface IGDirectOutgoingMessagePayloadBuilder : NSObject {
  /* instance variables */
  NSString *_clientContext;
  NSString *_offlineThreadingId;
  IGDirectDjangoThreadIdentifier *_threadTarget;
  IGDirectOutgoingMessageContent *_content;
  NSDate *_latestPublishedMessageSentDate;
  NSDate *_userSendDate;
  double _replyTimeMilliseconds;
  BOOL _isE2ELoggingSampled;
  IGDirectOutgoingMessageSendAttribution *_sendAttribution;
  long long _productType;
  NSNumber *_ephemeralDurationSec;
  IGDirectOutgoingMessagePrivateReplyPayload *_privateReplyPayload;
  NSString *_foregroundSessionId;
  BOOL _sendSilently;
  BOOL _isBlendedDualSend;
  IGDirectInstamadilloSendMetadata *_instamadilloSendMetadata;
  BOOL _shouldCrosspost;
  NSDictionary *_associatedMultiModalParameters;
}

/* class methods */
+ (id)directOutgoingMessagePayloadFromExistingDirectOutgoingMessagePayload:(id)payload;

/* instance methods */
- (id)initWithClientContext:(id)context offlineThreadingId:(id)id threadTarget:(id)target content:(id)content userSendDate:(id)date sendAttribution:(id)attribution foregroundSessionId:(id)id;
- (id)build;
- (id)withClientContext:(id)context;
- (id)withOfflineThreadingId:(id)id;
- (id)withThreadTarget:(id)target;
- (id)withContent:(id)content;
- (id)withLatestPublishedMessageSentDate:(id)date;
- (id)withUserSendDate:(id)date;
- (id)withReplyTimeMilliseconds:(double)milliseconds;
- (id)withIsE2ELoggingSampled:(BOOL)sampled;
- (id)withSendAttribution:(id)attribution;
- (id)withProductType:(long long)type;
- (id)withEphemeralDurationSec:(id)sec;
- (id)withPrivateReplyPayload:(id)payload;
- (id)withForegroundSessionId:(id)id;
- (id)withSendSilently:(BOOL)silently;
- (id)withIsBlendedDualSend:(BOOL)send;
- (id)withInstamadilloSendMetadata:(id)metadata;
- (id)withShouldCrosspost:(BOOL)crosspost;
- (id)withAssociatedMultiModalParameters:(id)parameters;
@end

#endif /* IGDirectOutgoingMessagePayloadBuilder_h */
