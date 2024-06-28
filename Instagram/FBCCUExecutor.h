//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCCUExecutor_h
#define FBCCUExecutor_h
@import Foundation;

#include "FBAddressBookReader.h"
#include "FBCCUConfigurationDelegate-Protocol.h"
#include "FBCCUContactsUploader.h"
#include "FBContactRootHashHandler.h"
#include "FBContactSnapshotHandler.h"
#include "FBContactSnapshotHelper.h"
#include "NSObject-Protocol.h"
#include "_TtC28ContactsContinuousUploadObjC35ABCrossContactsContinuousUploadObjc.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBCCUExecutor : NSObject<NSObject> {
  /* instance variables */
  NSString *_snapshotDirectory;
  NSObject<FBCCUConfigurationDelegate> *_CCUConfigurationDelegate;
  NSObject<OS_dispatch_queue> *_queue;
  FBContactRootHashHandler *_rootHashHandler;
  FBContactSnapshotHandler *_snapshotHandler;
  FBAddressBookReader *_addressBookReader;
  FBContactSnapshotHelper *_snapshotHelper;
  FBCCUContactsUploader *_contactsUploader;
  unsigned long long _state;
  _TtC28ContactsContinuousUploadObjC35ABCrossContactsContinuousUploadObjc *_crossContactsUpload;
  NSString *_lastSyncDateTimeUserDefaultsKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCCUIntegrationDelegate:(id)delegate;
- (id)initWithCCUIntegrationDelegate:(id)delegate crossContactsDiffRepository:(id)repository snapshotDirectory:(id)directory userDefaultsPrefixKey:(id)key lastSyncDateTimeUserDefaultsKey:(id)key limit:(long long)limit;
- (void)_persistSetting:(id)setting withKey:(id)key;
- (void)didCompleteContactUpload;
@end

#endif /* FBCCUExecutor_h */