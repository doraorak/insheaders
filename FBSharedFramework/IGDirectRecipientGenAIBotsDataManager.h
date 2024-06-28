//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientGenAIBotsDataManager_h
#define IGDirectRecipientGenAIBotsDataManager_h
@import Foundation;

#include "IGDirectRecipientGenAIBotsNetworkerFetcher.h"
#include "IGDirectRecipientGenAIBotsResult.h"
#include "IGDirectSearchMetaAIPromptResult.h"
#include "IGObjectDiskStorage.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserStore.h"

@interface IGDirectRecipientGenAIBotsDataManager : NSObject {
  /* instance variables */
  IGObjectDiskStorage *_genAIBotsLocalStorage;
  IGObjectDiskStorage *_metaAIPromptsLocalStorage;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  IGDirectRecipientGenAIBotsResult *_recentlyFetchedGenAIBotsResult;
  IGDirectSearchMetaAIPromptResult *_recentlyFetchedMetaAIPromptsResult;
  IGDirectRecipientGenAIBotsNetworkerFetcher *_networkFetcher;
  IGUserStore *_userStore;
}

/* instance methods */
- (id)initWithDiskManager:(id)manager userStore:(id)store mediaStore:(id)store currentUser:(id)user networker:(id)networker featureSets:(id)sets userSessionProvider:(id)provider;
- (void)_handleGenAIBotsPrefetchCompletion:(id)completion error:(id)error;
- (id)_fallbackMetaAIBot;
- (void)_startTrackingNetworkFetchForAIAgents;
- (void)_endFetchForAIAgents:(id)aiagents error:(id)error fetchEventType:(int)type;
@end

#endif /* IGDirectRecipientGenAIBotsDataManager_h */