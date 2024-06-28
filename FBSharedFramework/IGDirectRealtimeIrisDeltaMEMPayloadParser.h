//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRealtimeIrisDeltaMEMPayloadParser_h
#define IGDirectRealtimeIrisDeltaMEMPayloadParser_h
@import Foundation;

#include "IGDirectE2EEMessageUpdateParsing-Protocol.h"
#include "IGDirectInstamadilloIncomingMessageLogger.h"
#include "IGDirectInstamadilloPostProcessor.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSString;

@interface IGDirectRealtimeIrisDeltaMEMPayloadParser : NSObject<IGDirectE2EEMessageUpdateParsing> {
  /* instance variables */
  NSString *_currentUserIGID;
  IGDirectInstamadilloPostProcessor *_messagePostProcessor;
  IGDirectInstamadilloIncomingMessageLogger *_incomingMessageLogger;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCurrentUserIGID:(id)igid messagePostProcessor:(id)processor incomingMessageLogger:(id)logger featureSets:(id)sets;
- (void)parseMEMPayload:(id)mempayload payloadMetadata:(id)metadata messageClientContext:(id)context thread:(id)thread applyMessageUpdateBlock:(id /* block */)block;
- (void)parseIncomingPlaceholderWithPayloadMetadata:(id)metadata thread:(id)thread placeholderType:(id)type productType:(long long)type applyMessageUpdateBlock:(id /* block */)block;
- (void)parseIncomingTransportEventActionLogWithPayloadMetadata:(id)metadata thread:(id)thread actionLogType:(long long)type productType:(long long)type applyMessageUpdateBlock:(id /* block */)block;
- (void)_fetchTargetMessageMetadataWithThread:(id)thread payload:(id)payload payloadMetadata:(id)metadata completion:(id /* block */)completion;
- (void)_processSupplementMessageWithTargetMessageMetadata:(id)metadata messageId:(id)id clientContext:(id)context e2eePayload:(id)payload payloadMetadata:(id)metadata thread:(id)thread applyMessageUpdateBlock:(id /* block */)block;
@end

#endif /* IGDirectRealtimeIrisDeltaMEMPayloadParser_h */
