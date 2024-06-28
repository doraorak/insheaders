//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPendingInboxService_h
#define IGDirectPendingInboxService_h
@import Foundation;

#include "IGDirectMutationManagerListener-Protocol.h"
#include "IGDirectOutgoingUpdateSending-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGDirectCache, IGDirectMutationManager, NSMutableDictionary, NSString;

@interface IGDirectPendingInboxService : NSObject<IGDirectMutationManagerListener> {
  /* instance variables */
  IGDirectCache *_directCache;
  IGDirectMutationManager *_directMutationManager;
  NSObject<IGDirectOutgoingUpdateSending> *_outgoingUpdateSender;
  NSString *_currentUserId;
  NSMutableDictionary *_mutationsToCompletionBlocks;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDirectCache:(id)cache directMutationManager:(id)manager directOutgoingSender:(id)sender currentUserId:(id)id featureSets:(id)sets;
- (void)mutationRequestDidSucceed:(id)succeed successResponseDict:(id)dict;
- (void)mutationRequestFailedAndIsIneligibleForAutoRetry:(id)retry withError:(id)error manualRetryPermitted:(BOOL)permitted;
- (void)mutationRequestWasAcknowledged:(id)acknowledged;
@end

#endif /* IGDirectPendingInboxService_h */
