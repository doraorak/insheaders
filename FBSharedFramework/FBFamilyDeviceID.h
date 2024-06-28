//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBFamilyDeviceID_h
#define FBFamilyDeviceID_h
@import Foundation;

#include "FBFamilyDeviceIDReportInternal.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FBFamilyDeviceID : NSObject {
  /* instance variables */
  NSString *_familyDeviceID;
  NSObject<OS_dispatch_queue> *_serialQueue;
  FBFamilyDeviceIDReportInternal *_reporter;
  NSString *_appDeviceID;
  BOOL _hasAccessedSharedStorage;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initPrivate;
- (id)internalQueue;
- (void)_doAccessFamilyDeviceID:(id)id;
- (void)setNeedsSync;
- (void)launchSetupWithAppDeviceID:(id)id;
- (void)setupWithAppDeviceIDWithCompletionBlock:(id /* block */)block onQueue:(id)queue appDeviceID:(id)id;
- (id)familyDeviceIDWithConfiguration:(id)configuration SourceFile:(id)file SourceLine:(id)line;
- (id)cachedFamilyDeviceIDWithConfiguration:(id)configuration SourceFile:(id)file SourceLine:(id)line;
- (void)getFamilyDeviceIDWithCompletionBlock:(id /* block */)block onQueue:(id)queue;
- (void)logFamilyDeviceIDStatusWithBlock:(id /* block */)block;
- (void)logFamiliyDeviceIdLibraryUsageConfiguration:(id)configuration FunctionName:(id)name SourceFile:(id)file SourceLine:(id)line;
- (void)regenerateFDIDUponServerResponse:(id)response analyticsLogBlock:(id /* block */)block;
- (void)_doRegenByServerResponseWithLogBlock:(id /* block */)block;
- (id)standardUserDefaults;
- (id)reporter;
- (id)appGroupUserDefaults;
- (BOOL)isMainThread;
@end

#endif /* FBFamilyDeviceID_h */
