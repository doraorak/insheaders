//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSCNReachabilityMonitor_h
#define FBSCNReachabilityMonitor_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol FBReachabilityMonitorDelegate, OS_dispatch_queue;

@interface FBSCNReachabilityMonitor : NSObject<NSObject> {
  /* instance variables */
  NSObject<FBReachabilityMonitorDelegate> *_delegate;
  unsigned long long _ipVersion;
  struct __SCNetworkReachability * _scNetworkReachabilityRef;
  NSObject<OS_dispatch_queue> *_serialQueue;
  NSObject<OS_dispatch_queue> *_userQueue;
}

@property (readonly, nonatomic) unsigned long long reachabilityState;
@property (readonly, nonatomic) BOOL connectedToVPN;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)_parseFlags:(unsigned int)flags;

/* instance methods */
- (id)initWithDelegate:(id)delegate ipVersion:(unsigned long long)version notificationQueue:(id)queue;
- (void)start;
- (void)dealloc;
- (void)_updateForNewFlags:(unsigned int)flags;
- (void)triggerOSCallbackWithFlags:(unsigned int)flags;
@end

#endif /* FBSCNReachabilityMonitor_h */
