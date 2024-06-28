//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMediaItemUploadLogging_Protocol_h
#define FBMediaItemUploadLogging_Protocol_h
@import Foundation;

@protocol FBMediaItemUploadLogging <NSObject>
/* instance methods */
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)logFetchUploadSettingsStartWithExtras:(id)extras;
- (void)logFetchUploadSettingsSuccessWithExtras:(id)extras;
- (void)logFetchUploadSettingsFail:(id)fail;
- (void)logProcessStartWithExtras:(id)extras;
- (void)logProcessSuccessWithExtras:(id)extras;
- (void)logProcessCancel;
- (void)logProcessFail:(id)fail extras:(id)extras;
- (void)logSegmentFinishedWithType:(unsigned long long)type url:(id)url;
- (void)logUploadStart;
- (void)logUploadSuccess;
- (void)logUploadCancelWithCancellationReason:(long long)reason;
- (void)logUploadFail:(id)fail;
- (void)logStreamingRecordStart;
- (void)logStreamingRecordSuccess;
- (void)logStreamingRecordFail:(id)fail;
- (void)logPreviewStart;
- (void)logPreviewAttempt:(id)attempt;
- (void)logPreviewSuccess:(id)success;
- (void)logPreviewFail:(id)fail extras:(id)extras;
- (void)logScheduledLocalNotification;
- (void)logCancelledLocalNotification;
- (void)logEnteredForegroundDueToLocalNotification;
- (void)logUploadQualityMeasurementStart;
- (void)logUploadQualityMeasurementSuccessWithExtras:(id)extras;
- (void)logUploadQualityMeasurementFailureWithExtras:(id)extras extras:(id)extras;
- (void)logUploadUserLogout;
- (void)logDebugInfoWithExtras:(id)extras;
@optional
/* instance methods */
- (void)logFetchUploadKeyframeDataStart:(id)start;
- (void)logFetchUploadKeyframeDataSucceed:(id)succeed;
@end

#endif /* FBMediaItemUploadLogging_Protocol_h */