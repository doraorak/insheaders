//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBusinessTASThreadMegaphoneDataProvider_h
#define IGDirectBusinessTASThreadMegaphoneDataProvider_h
@import Foundation;

#include "IGDirectContextualSuggestionUserFlowLogger.h"
#include "IGDirectThreadMegaphoneDataProvider-Protocol.h"
#include "IGDirectThreadMegaphoneDataProviderDelegate-Protocol.h"

@class IGDirectThreadMegaphoneEvent, IGDirectThreadMetadata, IGUserSession, NSString;

@interface IGDirectBusinessTASThreadMegaphoneDataProvider : NSObject<IGDirectThreadMegaphoneDataProvider> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGDirectThreadMegaphoneDataProviderDelegate> *_delegate;
  NSString *_threadId;
  IGDirectThreadMetadata *_threadMetadata;
  IGDirectThreadMegaphoneEvent *_megaphoneEvent;
  NSString *_currentRequestId;
  IGDirectContextualSuggestionUserFlowLogger *_userFlowLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session threadId:(id)id threadMetadata:(id)metadata;
- (void)startListeningForThreadMegaphoneDataWithDelegate:(id)delegate;
- (void)stopListeningForThreadMegaphoneData;
- (void)prepareThreadMegaphoneData;
- (void)handleIncomingSuggestion:(id)suggestion userFlowLogger:(id)logger;
- (id)suggestionType;
- (void)dismissSuggestion;
- (id)currentRequestId;
@end

#endif /* IGDirectBusinessTASThreadMegaphoneDataProvider_h */