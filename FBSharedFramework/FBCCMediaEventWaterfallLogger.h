//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCCMediaEventWaterfallLogger_h
#define FBCCMediaEventWaterfallLogger_h
@import Foundation;

#include "FBAnalyticsLogging-Protocol.h"
#include "FBCCUserFlowLogger.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol {atomic<unsigned long long>="__a_"{__cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>>="__a_value"AQ}};

@interface FBCCMediaEventWaterfallLogger : NSObject<NSObject> {
  /* instance variables */
  NSString *_productSessionID;
  NSString *_productNameString;
  NSString *_loggerSessionID;
  struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { atomic  __a_value; unsigned long long x0; } __a_; } _cameraEventCounter;
  NSObject<FBAnalyticsLogging> *_analyticsLogger;
  FBCCUserFlowLogger *_userflowLogger;
  BOOL _firstFrameRendered;
  BOOL _isCameraDisconnectFinished;
  NSArray *_effectIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStructuredLogger:(id)logger productName:(unsigned long long)name productSessionID:(id)id loggerSessionID:(id)id;
- (void)setProductSessionId:(id)id;
- (void)setProductName:(unsigned long long)name;
- (id)effectIDs;
- (void)logMediaPipelineEvent:(id)event extras:(id)extras error:(id)error;
- (void)logAudioPipelineEvent:(id)event extras:(id)extras error:(id)error;
- (void)logRecordingEvent:(id)event extras:(id)extras error:(id)error;
- (void)logCameraEvent:(id)event component:(id)component extras:(id)extras error:(id)error;
- (struct { id x0; id x1; id x2; })getLoggingData;
@end

#endif /* FBCCMediaEventWaterfallLogger_h */
