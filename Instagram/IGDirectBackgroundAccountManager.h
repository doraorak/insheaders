//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectBackgroundAccountManager_h
#define IGDirectBackgroundAccountManager_h
@import Foundation;

#include "FBMessageSyncService.h"
#include "IGDirectCacheListener-Protocol.h"
#include "IGDirectInstamadilloBackgroundAccountManagerLogger.h"
#include "IGDirectMsysAccountSessionProviding-Protocol.h"
#include "IGScopedListener-Protocol.h"

@class FBCryptoMEMContext, FBTimer, IGUserSession, MBIAccountSession, NSMutableArray, NSMutableSet, NSString;
@protocol IGDirectBackgroundAccountManagerDelegate, MBISessionedNotificationObserver;

@interface IGDirectBackgroundAccountManager : NSObject<IGDirectCacheListener, IGDirectMsysAccountSessionProviding, IGScopedListener> {
  /* instance variables */
  undefined * _messageSyncServiceFactory;
  undefined * _cryptoMEMContextFactory;
  IGUserSession *_userSession;
  NSString *_userPk;
  MBIAccountSession *_accountSession;
  FBMessageSyncService *_messageSyncService;
  FBCryptoMEMContext *_cryptoMEMContext;
  NSObject<IGDirectBackgroundAccountManagerDelegate> *_delegate;
  NSObject<MBISessionedNotificationObserver> *_memOfflineHandlingCompletionNotificationObserver;
  NSObject<MBISessionedNotificationObserver> *_memOfflineMessageProcessingFinishedNotificationObserver;
  NSObject<MBISessionedNotificationObserver> *_memOfflineStanzaProcessingFinishedNotificationObserver;
  NSObject<MBISessionedNotificationObserver> *_mebHandleProtobufBackupWriteResultNotificationObserver;
  NSObject<MBISessionedNotificationObserver> *_memContextReadyObserver;
  BOOL _memContextIsReady;
  long long _numMessagesFromOfflineQueue;
  long long _numMessageToBeSynced;
  NSMutableSet *_messagesWrittenToDisk;
  NSMutableSet *_messagesWrittenToDiskNotRequiringEB;
  NSMutableSet *_messagesAppliedToCache;
  NSMutableSet *_messagesProcessedByNotificationHandler;
  BOOL _didReceiveMEMOfflineMessageProcessingFinishedNotification;
  BOOL _didReceiveMEMOfflineStanzaProcessingFinishedNotification;
  BOOL _encryptedBackupsDidFinish;
  id /* block */ _forceTearDownCompletionBlock;
  FBTimer *_cancellationTimer;
  BOOL _didCancellationTimerFire;
  IGDirectInstamadilloBackgroundAccountManagerLogger *_backgroundAccountManagerLogger;
  NSMutableSet *_threadIdsProcessed;
  long long _state;
  NSMutableArray *_memReadyCallbackBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session messageSyncServiceFactory:(undefined *)factory cryptoMEMContextFactory:(undefined *)factory delegate:(id)delegate syncBatchId:(id)id syncSource:(long long)source;
- (void)_didReceiveMEMContextReadyNotification;
- (void)messageSyncServiceActivationCompletedWithSyncService:(id)service;
- (void)messageSyncServiceTearDownCompleted;
- (void)getMsysAccountSessionWithMEMContextReady:(id /* block */)ready;
- (void)getActiveAccountSession:(id /* block */)session;
- (void)e2EEMessageWriteDidFinishForMessageId:(id)id threadId:(id)id isEphemeral:(BOOL)ephemeral success:(BOOL)success;
- (void)directCacheDidUpdateThreads:(id)threads;
- (void)directCacheDidRemoveThreadsWithIds:(id)ids;
- (void)directCacheDidUpdateThread:(id)thread withAppliedUpdates:(id)updates;
- (void)directCacheDidUpdateInboxMetadata;
- (void)inAppNotificationProcessedForMessageId:(id)id;
@end

#endif /* IGDirectBackgroundAccountManager_h */