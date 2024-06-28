//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaUploadLogger_h
#define FBMediaUploadLogger_h
@import Foundation;

#include "FBMediaUploadLogging-Protocol.h"

@class NSDate, NSMutableDictionary, NSString;
@protocol FBMediaUploadEventLogging;

@interface FBMediaUploadLogger : NSObject<FBMediaUploadLogging> {
  /* instance variables */
  NSString *_moduleName;
  NSMutableDictionary *_extras;
  NSObject<FBMediaUploadEventLogging> *_eventLogger;
  id /* block */ _applicationStateProvider;
  NSDate *_transferRequestStartTime;
  struct FBMediaUploadLoggingConfig { BOOL enableUserFlow; BOOL enableErrorJsonFormat; } _config;
  unsigned long long _uploadUserFlowId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModuleName:(id)name extras:(id)extras eventLogger:(id)logger;
- (id)initWithModuleName:(id)name extras:(id)extras eventLogger:(id)logger loggingConfig:(struct FBMediaUploadLoggingConfig { BOOL x0; BOOL x1; })config;
- (id)initWithModuleName:(id)name extras:(id)extras eventLogger:(id)logger applicationStateProvider:(id /* block */)provider loggingConfig:(struct FBMediaUploadLoggingConfig { BOOL x0; BOOL x1; })config;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)logUploadTransferStart;
- (void)logUploadTransferSuccessWithMediaId:(id)id;
- (void)logUploadTransferFailure:(id)failure;
- (void)logUploadTransferCancel;
- (void)_logEvent:(id)event;
@end

#endif /* FBMediaUploadLogger_h */
