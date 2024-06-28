//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNAnalyticsLoggingListenerAnnouncer_h
#define SNAnalyticsLoggingListenerAnnouncer_h
@import Foundation;

#include "FBAnnouncerBase.h"
#include "SNAnalyticsLoggingListener-Protocol.h"

@class NSString;

@interface SNAnalyticsLoggingListenerAnnouncer : FBAnnouncerBase<SNAnalyticsLoggingListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)logRequestStartWithInfo:(id)info;
- (void)logRequestFinishWithInfo:(id)info error:(id)error;
- (void)logRequestCancelWithInfo:(id)info;
- (void)logRequestDocumentStartWithInfo:(id)info;
- (void)logRequestDocumentFinishWithInfo:(id)info loadSource:(id)source error:(id)error loggingInfo:(id)info;
- (void)logRequestAssetsStartWithInfo:(id)info;
- (void)logRequestAssetsFinishWithInfo:(id)info loadSource:(id)source error:(id)error loggingInfo:(id)info;
- (void)logRequestExtraAssetsStartWithInfo:(id)info;
- (void)logRequestExtraAssetsFinishWithInfo:(id)info loadSource:(id)source error:(id)error loggingInfo:(id)info;
- (void)logPrepareRenderStartWithInfo:(id)info;
- (void)logPrepareRenderFinishWithInfo:(id)info error:(id)error;
- (void)logDetectedError:(id)error withInfo:(id)info;
- (void)logErrorRecoveryStart:(id)start;
- (void)logErrorRecovery:(id)recovery didRecovery:(BOOL)recovery;
- (void)logErrorRecoveryStop:(id)stop;
- (void)logPartialImpressionStart:(id)start;
- (void)logFullImpressionStart:(id)start;
- (void)logActiveRequestReused:(id)reused;
- (void)finishLoggingWithInfo:(id)info error:(id)error;
- (void)logRenderingFallback:(id)fallback;
- (void)logTryCustomRenderingFallback:(id)fallback canFallback:(BOOL)fallback;
- (void)logInteractionWithTouchPoint:(struct CGPoint { double x0; double x1; })point type:(id)type value:(id)value;
@end

#endif /* SNAnalyticsLoggingListenerAnnouncer_h */
