//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientQueryStateManager_h
#define IGDirectRecipientQueryStateManager_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"
#include "IGDirectLocalSearchConfiguration.h"
#include "IGDirectRecipientFetcher.h"
#include "IGDirectRecipientSecureThreadFetcher.h"
#include "IGDirectSearchExperimentationManager.h"
#include "IGDirectSearchInstrumentationCoordinator.h"
#include "IGDirectSearchQueryStateQPL.h"
#include "IGDirectThreadSearchService.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSCache, NSString;
@protocol IGDirectRecipientQueryLocalSearchDataSourceProtocol;

@interface IGDirectRecipientQueryStateManager : NSObject<NSObject> {
  /* instance variables */
  IGDirectThreadSearchService *_threadSearchService;
  IGDirectLocalSearchConfiguration *_localSearchConfiguration;
  NSObject<IGDirectRecipientQueryLocalSearchDataSourceProtocol> *_localSearchDataSource;
  IGDirectRecipientFetcher *_fetcher;
  NSCache *_serverQueryResultCache;
  NSCache *_contentQueryResultCache;
  long long _displayNameType;
  IGDirectRecipientSecureThreadFetcher *_secureThreadFetcher;
  IGDirectSearchInstrumentationCoordinator *_searchInstrumentationCoordinator;
  BOOL _shouldAttachArmadillo1to1ThreadAfterOpenThreadsWithSameMembers;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  BOOL _secureThreadsAtBottom;
  long long _maxIGBusinessSectionServerFetchLimit;
  long long _maxIGPeopleSectionServerFetchLimit;
  long long _maxIGBusinessSeeAllServerFetchLimit;
  long long _maxIGPeopleSeeAllServerFetchLimit;
  long long _maxIGChannelsSectionServerFetchLimit;
  long long _maxIGChannelsSharesheetSectionServerFetchLimit;
  long long _maxIGGenAIBotServerFetchLimit;
  long long _maxIGGenAIBotSeeAllServerFetchLimit;
  BOOL _isIntentClassificationEnabled;
  NSObject<FBAnalyticsLogging> *_logger;
  IGUserSession *_userSession;
  BOOL _shouldEnableGTLC;
  BOOL _shouldUprankExactMatchedIGContacts;
  BOOL _shouldUprankExactMatchedCutoverContacts;
  IGDirectSearchQueryStateQPL *_omnipickerQueryStateQPL;
  IGDirectSearchQueryStateQPL *_universalQueryStateQPL;
  IGDirectSearchExperimentationManager *_qeManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueryConfig:(id)config threadSearchService:(id)service localSearchConfiguration:(id)configuration localSearchDataSource:(id)source featureSets:(id)sets networkFetcher:(id)fetcher currentUser:(id)user userStore:(id)store secureThreadFetcher:(id)fetcher userSession:(id)session searchInstrumentationCoordinator:(id)coordinator;
- (void)fetchRecipientsForString:(id)string selectedRecipientPks:(id)pks fetchType:(long long)type isServerResultsEnabled:(BOOL)enabled loggingSessionId:(id)id successHandler:(id /* block */)handler failureHandler:(id /* block */)handler entryPoint:(unsigned long long)point;
- (void)fetchRecipientsForString:(id)string selectedRecipientPks:(id)pks isServerResultsEnabled:(BOOL)enabled loggingSessionId:(id)id successHandler:(id /* block */)handler failureHandler:(id /* block */)handler entryPoint:(unsigned long long)point;
- (void)fetchRecipientsForString:(id)string selectedRecipientPks:(id)pks fetchType:(long long)type isServerResultsEnabled:(BOOL)enabled loggingSessionId:(id)id successHandler:(id /* block */)handler failureHandler:(id /* block */)handler entryPoint:(unsigned long long)point threadCreationEntryPoint:(unsigned long long)point;
- (void)fetchChannelDirectInvitesWithHasNextPage:(BOOL)page nextPageCursor:(id)cursor successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (void)fetchChannelDirectInvitesPresetWithPresetType:(id)type successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (void)fetchContentSearchResultsForString:(id)string resultTypes:(id)types nextPaginationOffset:(unsigned long long)offset isServerResultsEnabled:(BOOL)enabled successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (void)fetchChannelContextLinesWithThreadIds:(id)ids completionHandler:(id /* block */)handler;
- (id)fetchLocalRecipients;
- (id)fetchGroupThreadsWithSelectedRecipients:(id)recipients selectedRecipients:(id)recipients additionalQuery:(id)query;
- (id)fetchNoncontactsFromLocalGroupThreads:(id)threads;
- (void)fetchEncryptedGroupThreadsWithSelectedUsers:(id)users prefixQuery:(id)query completionHandler:(id /* block */)handler;
@end

#endif /* IGDirectRecipientQueryStateManager_h */
