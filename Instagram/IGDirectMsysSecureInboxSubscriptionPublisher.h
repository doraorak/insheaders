//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysSecureInboxSubscriptionPublisher_h
#define IGDirectMsysSecureInboxSubscriptionPublisher_h
@import Foundation;

#include "FBCancelable-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGApplicationWillEnterForegroundCriticalEventsListener-Protocol.h"
#include "IGDirectInteropFeatureGating-Protocol.h"
#include "IGDirectMsysSecureInboxNetworker.h"
#include "MDCDataSubscriptionPublishing-Protocol.h"
#include "MDCDataSubscriptionPublishingListener-Protocol.h"

@class IGDirectDjangoInboxCutoverThreadService, IGDirectMsysMessagingMailbox, IGUser, IGUserStore, NSString;
@protocol IGMessageFilterClientProtocol;

@interface IGDirectMsysSecureInboxSubscriptionPublisher : NSObject<MDCDataSubscriptionPublishing, IGApplicationWillEnterForegroundCriticalEventsListener> {
  /* instance variables */
  IGDirectMsysMessagingMailbox *_mailboxProvider;
  NSObject<IGDirectInteropFeatureGating> *_featureSetProvider;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  IGUser *_currentUser;
  IGUserStore *_userStore;
  NSObject<MDCDataSubscriptionPublishingListener> *_listener;
  NSObject<FBCancelable> *_cancelHandle;
  int _pageSize;
  unsigned long long _msysFolderType;
  int _overflowCount;
  long long _minLastActivityAuthoritativeTimestampMs;
  BOOL _hasMoreLocal;
  BOOL _supportCutoverThreads;
  NSObject<IGMessageFilterClientProtocol> *_messageFilterClient;
  BOOL _isHiddenWordsOnArmadilloEnabled;
  BOOL _shouldIncludeBlendedThreads;
  BOOL _shouldLoadAllSingleSendBlendedThreads;
  int _messageTextFetchSize;
  IGDirectDjangoInboxCutoverThreadService *_djangoInboxCutoverThreadService;
  IGDirectMsysSecureInboxNetworker *_networker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMailboxProvider:(id)provider currentUser:(id)user userStore:(id)store supportCutoverThreads:(BOOL)threads msysFolderType:(unsigned long long)type messageFilterClient:(id)client isHiddenWordsOnArmadilloEnabled:(BOOL)enabled shouldIncludeBlendedThreads:(BOOL)threads shouldLoadAllSingleSendBlendedThreads:(BOOL)threads messageTextFetchSize:(int)size pageSize:(int)size featureSetProvider:(id)provider analyticsLogger:(id)logger djangoInboxCutoverThreadService:(id)service networker:(id)networker;
- (void)loadNextPageOfThreads;
- (void)loadNextPageOfThreadsForTab:(id)tab threadsFilter:(long long)filter;
- (void)loadWithDjangoPagingCursor:(id)cursor;
- (void)loadWithDjangoPagingCursorForTab:(id)tab tab:(id)tab;
- (void)startListeningForUpdatesWithListener:(id)listener;
- (void)stopListeningForUpdatesWithListener:(id)listener;
- (id)publisherInputsForDebugging;
- (void)applicationWillEnterForegroundListener;
@end

#endif /* IGDirectMsysSecureInboxSubscriptionPublisher_h */