//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientService_h
#define IGDirectRecipientService_h
@import Foundation;

#include "IGDirectRecipientNullStateManager.h"
#include "IGDirectRecipientQuerySearchDataSource.h"
#include "IGDirectRecipientQueryStateManager.h"
#include "IGDirectSearchInstrumentationCoordinator.h"
#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGDirectRecipientService : NSObject<NSObject> {
  /* instance variables */
  IGDirectRecipientNullStateManager *_nullStateManager;
  IGDirectRecipientQueryStateManager *_queryStateManager;
  IGDirectSearchInstrumentationCoordinator *_searchInstrumentationCoordinator;
  IGUserSession *_userSession;
  BOOL _useQueryStateManagerV2;
  IGDirectRecipientQuerySearchDataSource *_queryStateManagerV2;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDirectCache:(id)cache userSession:(id)session queryConfig:(id)config threadSearchService:(id)service localSearchConfiguration:(id)configuration;
- (id)defaultRecipients;
- (id)defaultRecipientsExcludingFallback;
- (id)defaultRecipientsUsersOnly;
- (id)defaultChannelsForSearchNullState;
- (id)defaultChannelsForInboxTab;
- (id)defaultChannelsForInboxNullState;
- (id)defaultChannelInvitationsForInboxTab;
- (void)fetchDefaultRecipientsWithContext:(id)context entryPoint:(unsigned long long)point completion:(id /* block */)completion;
- (void)fetchAllDefaultRecipientsWithFilter:(id /* block */)filter rankingViewType:(long long)type entryPoint:(unsigned long long)point completion:(id /* block */)completion;
- (void)_fetchRecipientsForStringV2:(id)v2 selectedRecipientPks:(id)pks fetchType:(long long)type isServerResultsEnabled:(BOOL)enabled loggingSessionId:(id)id successHandler:(id /* block */)handler failureHandler:(id /* block */)handler entryPoint:(unsigned long long)point threadCreationEntryPoint:(unsigned long long)point;
- (void)fetchRecipientsForString:(id)string selectedRecipientPks:(id)pks isServerResultsEnabled:(BOOL)enabled loggingSessionId:(id)id successHandler:(id /* block */)handler failureHandler:(id /* block */)handler entryPoint:(unsigned long long)point;
- (void)fetchRecipientsForString:(id)string selectedRecipientPks:(id)pks fetchType:(long long)type isServerResultsEnabled:(BOOL)enabled loggingSessionId:(id)id successHandler:(id /* block */)handler failureHandler:(id /* block */)handler entryPoint:(unsigned long long)point;
- (void)fetchRecipientsForString:(id)string selectedRecipientPks:(id)pks fetchType:(long long)type isServerResultsEnabled:(BOOL)enabled loggingSessionId:(id)id successHandler:(id /* block */)handler failureHandler:(id /* block */)handler entryPoint:(unsigned long long)point threadCreationEntryPoint:(unsigned long long)point;
- (void)fetchChannelDirectInvitesWithHasNextPage:(BOOL)page nextPageCursor:(id)cursor successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (void)fetchChannelDirectInvitesPresetWithPresetType:(id)type successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (void)fetchContentSearchResultsForString:(id)string resultTypes:(id)types nextPaginationOffset:(unsigned long long)offset isServerResultsEnabled:(BOOL)enabled successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
- (id)fetchLocalRecipients;
- (id)fetchGroupThreadsWithSelectedRecipients:(id)recipients selectedRecipients:(id)recipients additionalQuery:(id)query;
- (id)fetchNoncontactsFromLocalGroupThreads:(id)threads;
- (void)fetchChannelContextLinesWithThreadIds:(id)ids completionHandler:(id /* block */)handler;
- (void)fetchEncryptedGroupThreadsWithSelectedUsers:(id)users prefixQuery:(id)query completionHandler:(id /* block */)handler;
@end

#endif /* IGDirectRecipientService_h */