//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAnalyticsGenericConfiguration_h
#define IGAnalyticsGenericConfiguration_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary, NSString;

@interface IGAnalyticsGenericConfiguration : NSObject<NSObject> {
  /* instance variables */
  NSString *_key;
  NSString *_clientToken;
  NSString *_appID;
  NSString *_deviceID;
  NSString *_userID;
  BOOL _useSharedContainer;
  BOOL _multiBatchEnabled;
  NSDictionary *_fbAnalyticsCoreLoggerExperimentValues;
  unsigned long long _batchSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithKey:(id)key clientToken:(id)token appID:(id)id deviceID:(id)id userID:(id)id useSharedContainer:(BOOL)container multiBatchEnabled:(BOOL)enabled;
- (id)initWithKey:(id)key clientToken:(id)token appID:(id)id deviceID:(id)id userID:(id)id useSharedContainer:(BOOL)container multiBatchEnabled:(BOOL)enabled batchSize:(unsigned long long)size;
- (id)key;
- (id)clientToken;
- (id)appID;
- (id)deviceID;
- (id)userID;
- (long long)logFileBatchSize;
- (long long)maxNumberOfLogFiles;
- (long long)maxNumberOfRetries;
- (float)postCleanupRetentionRatio;
- (BOOL)useSharedContainer;
- (BOOL)retryUploadIndefinitelyForCertainErrors;
- (long long)periodicUploadInterval;
- (BOOL)uploadLogsAfterCleanup;
- (BOOL)stripNonJSON;
- (long long)retryDelayTimeInSeconds;
- (BOOL)compressionEnabled;
- (BOOL)httpBodyCompressionEnabled;
- (BOOL)multiBatchEnabled;
- (long long)maxMultiBatchFileSize;
- (id)dynoStatsTags;
- (id)fbAnalyticsCoreLoggerExperimentValues;
@end

#endif /* IGAnalyticsGenericConfiguration_h */
