//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadService_h
#define IGDirectThreadService_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGDirectCache.h"
#include "IGDirectImpressionManager.h"
#include "IGDirectInteropFeatureGating-Protocol.h"
#include "IGDirectMutationManager.h"
#include "IGDirectPublishedThreadMerger.h"
#include "IGDirectThreadCreationPerfLogger.h"
#include "IGObjectStores.h"
#include "IGRequestToken-Protocol.h"
#include "IGUser.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSMutableDictionary, NSMutableSet;
@protocol IGDirectThreadServiceRequestProviding, IGDirectThreadServiceResponseAdapter;

@interface IGDirectThreadService : NSObject {
  /* instance variables */
  IGUser *_user;
  IGDirectCache *_directCache;
  IGDirectPublishedThreadMerger *_threadMerger;
  IGDirectMutationManager *_directMutationManager;
  NSObject<IGAPIClient> *_networker;
  NSObject<IGDirectInteropFeatureGating> *_interopFeatureGating;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGObjectStores *_objectStores;
  NSMutableSet *_ongoingCreateThreadRequestParams;
  unsigned long long _maxNumberOfUnreadMessagesInDigest;
  NSObject<IGRequestToken> *_threadCreationRequestToken;
  IGUserDefaults *_userDefaults;
  IGDirectImpressionManager *_directImpressionManager;
  NSObject<IGDirectThreadServiceResponseAdapter> *_threadServiceResponseAdapter;
  NSObject<IGDirectThreadServiceRequestProviding> *_requestProvider;
  BOOL _shouldLogMissingMetadataFields;
  NSMutableDictionary *_successBlocksMap;
  NSMutableDictionary *_failureBlocksMap;
  IGDirectThreadCreationPerfLogger *_threadCreationPerfLogger;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)_processThreadCreationWithUserIds:(id)ids urlRequest:(id)request allowDuplicateRequests:(BOOL)requests forceUseV2API:(BOOL)api success:(id /* block */)success failure:(id /* block */)failure;
- (id)matchInstamadilloGroupWithThreadJid:(id)jid;
- (void)_executeSuccessCompletionsForRequest:(id)request thread:(id)thread isExistingThread:(BOOL)thread;
- (void)_executeFailureCompletionsForRequest:(id)request response:(id)response error:(id)error;
- (void)checkAndReportIfMissingCutoverSignalOnThread:(id)thread;
@end

#endif /* IGDirectThreadService_h */