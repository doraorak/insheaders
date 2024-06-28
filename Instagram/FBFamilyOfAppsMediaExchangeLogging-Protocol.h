//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBFamilyOfAppsMediaExchangeLogging_Protocol_h
#define FBFamilyOfAppsMediaExchangeLogging_Protocol_h
@import Foundation;

@protocol FBFamilyOfAppsMediaExchangeLogging <NSObject>
/* instance methods */
- (void)logInfo:(id)info withArguments:(char *)arguments;
- (void)logWarning:(id)warning withArguments:(char *)arguments;
- (void)logError:(id)error withArguments:(char *)arguments;
@optional
/* instance methods */
- (void)reportCritical:(id)critical withArguments:(char *)arguments;
@end

#endif /* FBFamilyOfAppsMediaExchangeLogging_Protocol_h */