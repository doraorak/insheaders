//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKBloksDataFetchEmitter_h
#define BKBloksDataFetchEmitter_h
@import Foundation;

#include "DFCoreDataEmitter.h"
#include "BKObjectSet.h"

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKBloksDataFetchEmitter : DFCoreDataEmitter {
  /* instance variables */
  BKObjectSet *_objectSet;
  unsigned long long _cacheTTL;
  NSString *_appID;
  NSDictionary *_params;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  id _fetcher;
  unsigned long long _queryType;
  long long _requestPurpose;
}

/* instance methods */
- (void)didStart;
- (void)didRefresh;
- (id)initialData;
- (BOOL)isDataInvalid:(id)invalid;
- (BOOL)shouldRefreshData:(id)data;
- (void)onDataAccessed;
- (id)subscriberQueue;
- (unsigned long long)cacheTTL;
@end

#endif /* BKBloksDataFetchEmitter_h */
