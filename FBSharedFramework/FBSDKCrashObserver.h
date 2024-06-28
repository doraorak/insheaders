//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKCrashObserver_h
#define FBSDKCrashObserver_h
@import Foundation;

#include "FBSDKCrashHandler-Protocol.h"
#include "FBSDKCrashObserving-Protocol.h"
#include "FBSDKFeatureChecking-Protocol.h"
#include "FBSDKSettings-Protocol.h"

@class NSArray;

@interface FBSDKCrashObserver : NSObject<FBSDKCrashObserving>

@property (retain, nonatomic) NSObject<FBSDKFeatureChecking> *featureChecker;
@property (retain, nonatomic) NSObject<FBSDKSettings> *settings;
@property (retain, nonatomic) NSObject<FBSDKCrashHandler> *crashHandler;
@property (copy, nonatomic) NSArray *prefixes;
@property (copy, nonatomic) NSArray *frameworks;

/* instance methods */
- (id)initWithFeatureChecker:(id)checker settings:(id)settings crashHandler:(id)handler;
- (void)didReceiveCrashLogs:(id)logs;
@end

#endif /* FBSDKCrashObserver_h */
