//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloReverb_h
#define IGDirectInstamadilloReverb_h
@import Foundation;

#include "IGDirectMsysAccountSessionProviding-Protocol.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserStore.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IGDirectInstamadilloReverb : NSObject {
  /* instance variables */
  NSObject<IGDirectMsysAccountSessionProviding> *_accountSessionProvider;
  NSString *_userPk;
  IGUserStore *_userStore;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGUserDefaults *_sessionUserDefaults;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)initWithAccountSessionProvider:(id)provider userPk:(id)pk userStore:(id)store featureSets:(id)sets sessionUserDefaults:(id)defaults;
- (void)visualMessageActionsForMessageId:(id)id threadMetadata:(id)metadata loggingContext:(id)context completion:(id /* block */)completion;
- (void)messagesListForThreads:(id)threads messageFetcherForReplies:(id)replies loggingContext:(id)context completion:(id /* block */)completion;
@end

#endif /* IGDirectInstamadilloReverb_h */
