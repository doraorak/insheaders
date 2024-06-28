//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKBackgroundEventLogger_h
#define FBSDKBackgroundEventLogger_h
@import Foundation;

#include "FBSDKBackgroundEventLogging-Protocol.h"

@protocol FBSDKEventLogging, FBSDKInfoDictionaryProviding;

@interface FBSDKBackgroundEventLogger : NSObject<FBSDKBackgroundEventLogging>

@property (readonly, nonatomic) NSObject<FBSDKInfoDictionaryProviding> *infoDictionaryProvider;
@property (readonly, nonatomic) NSObject<FBSDKEventLogging> *eventLogger;

/* instance methods */
- (id)initWithInfoDictionaryProvider:(id)provider eventLogger:(id)logger;
- (void)logBackgroundRefreshStatus:(long long)status;
- (BOOL)_isNewBackgroundRefresh;
@end

#endif /* FBSDKBackgroundEventLogger_h */
