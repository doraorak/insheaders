//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientGenAIBotsNetworkerFetcher_h
#define IGDirectRecipientGenAIBotsNetworkerFetcher_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGMediaStore.h"
#include "IGSearchThrottler.h"
#include "IGUser.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSessionProvider.h"
#include "IGUserStore.h"

@interface IGDirectRecipientGenAIBotsNetworkerFetcher : NSObject {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  NSObject<IGUserLauncherSetProviding> *_launcherSetProvider;
  IGUserSessionProvider *_userSessionProvider;
  IGUserStore *_userStore;
  IGMediaStore *_mediaStore;
  IGUser *_currentUser;
  IGSearchThrottler *_querySearchThrottler;
  IGSearchThrottler *_querySearchReturnKeyThrottler;
}

/* instance methods */
- (id)initWithNetworker:(id)networker userStore:(id)store mediaStore:(id)store currentUser:(id)user userSessionProvider:(id)provider launcherSetProvider:(id)provider;
- (void)_fetchMetaAIPromptsForNullStateWithCompletion:(id /* block */)completion;
- (void)_fetchMetaAIPromptsForQueryStateWithQuery:(id)query completion:(id /* block */)completion;
- (void)_fetchMetaAIPromptsForQueryStateWithQueryCoreCall:(id)call userSession:(id)session completion:(id /* block */)completion;
- (void)_handleNetworkResponseForMetaAINullStatePromptsFetch:(id)fetch completion:(id /* block */)completion;
- (void)_handleNetworkResponseForMetaAIQueryStatePromptsFetch:(id)fetch queryString:(id)string completion:(id /* block */)completion;
- (void)_checkMetaAIReturnKeyEligibilityForQuery:(id)query completion:(id /* block */)completion;
- (void)_handleNetworkResponseForMetaAIKeyboardReturnKeySendElibilityCheck:(id)check completion:(id /* block */)completion;
@end

#endif /* IGDirectRecipientGenAIBotsNetworkerFetcher_h */