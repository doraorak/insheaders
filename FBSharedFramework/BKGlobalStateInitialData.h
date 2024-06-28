//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKGlobalStateInitialData_h
#define BKGlobalStateInitialData_h
@import Foundation;

#include "BKDataManifestInitialData-Protocol.h"
#include "BKGlobalStateStore.h"

@class NSString;

@interface BKGlobalStateInitialData : NSObject<BKDataManifestInitialData> {
  /* instance variables */
  id _initialValue;
  NSString *_key;
  BOOL _isPublishMode;
  BKGlobalStateStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initialValue;
- (void)commitToStoreWithUpdater:(id /* block */)updater context:(id)context;
@end

#endif /* BKGlobalStateInitialData_h */
