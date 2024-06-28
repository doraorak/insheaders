//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublishedThreadFetcher_h
#define IGDirectPublishedThreadFetcher_h
@import Foundation;

#include "IGDirectPublishedThreadMerger.h"
#include "IGDirectThreadNetworker.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSessionProvider.h"

@class NSMutableDictionary;

@interface IGDirectPublishedThreadFetcher : NSObject {
  /* instance variables */
  NSMutableDictionary *_threadIdToCallbacks;
  IGDirectPublishedThreadMerger *_threadMerger;
  IGDirectThreadNetworker *_threadNetworker;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
  IGUserSessionProvider *_userSessionProvider;
  IGUserDefaults *_userDefaults;
  unsigned char _isTlcUser;
  BOOL _shouldLogMissingMetadataFields;
}

/* instance methods */
- (id)initWithThreadNetworker:(id)networker sessionUserDefaults:(id)defaults threadMerger:(id)merger featureSets:(id)sets userSessionProvider:(id)provider;
- (void)checkAndReportIfMissingCutoverSignalOnThread:(id)thread;
@end

#endif /* IGDirectPublishedThreadFetcher_h */
