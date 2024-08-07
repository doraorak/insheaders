//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FXCachingCommonLoggerProtocol_Protocol_h
#define FXCachingCommonLoggerProtocol_Protocol_h
@import Foundation;

@protocol FXCachingCommonLoggerProtocol <NSObject>
/* instance methods */
- (void)logEvent:(id)event callerName:(id)name serviceNames:(id)names debugData:(id)data;
- (void)logCacheAccuracyWithMsysCacheStatus:(long long)status callerName:(id)name numLinkedAccounts:(int)accounts isRtdd:(BOOL)rtdd timeElapsedInSec:(float)sec debugData:(id)data;
@end

#endif /* FXCachingCommonLoggerProtocol_Protocol_h */
