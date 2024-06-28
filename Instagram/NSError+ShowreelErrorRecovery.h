//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSError_ShowreelErrorRecovery_h
#define NSError_ShowreelErrorRecovery_h
@import Foundation;

@interface NSError (ShowreelErrorRecovery)
/* instance methods */
- (id)sr_data;
- (unsigned long long)sr_resource;
- (unsigned long long)sr_reason;
- (unsigned long long)sr_renderer;
- (unsigned long long)sr_recoverability;
- (unsigned long long)sr_severity;
- (id)sr_message;
- (id)sr_underlyingErrorMessage;
- (id)sr_fullMessage;
- (long long)sr_underlyingErrorCode;
- (id)sr_underlyingError;
- (id)sr_attempter;
- (unsigned long long)sr_errorHash;
- (id)_safeErrorKeyStringValue:(id)value;
- (unsigned long long)_safeErrorKeyUnsignedIntegerValue:(id)value;
@end

#endif /* NSError_ShowreelErrorRecovery_h */
