//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRMDService_h
#define IGRMDService_h
@import Foundation;

#include "FBReachabilityListener-Protocol.h"

@class IGGCPUController, IGTigonStack, NSString;
@protocol {shared_ptr<facebook::reliablemedia::TigonUrlMapFetcher>="__ptr_"^{TigonUrlMapFetcher}"__cntrl_"^{__shared_weak_count}};

@interface IGRMDService : NSObject<FBReachabilityListener> {
  /* instance variables */
  void * _rmManager;
  IGTigonStack *_tigonStack;
  BOOL _managerWasEnabledForPreviousUser;
  NSString *_hardcodedFallbackConfig;
  struct shared_ptr<facebook::reliablemedia::TigonUrlMapFetcher> { struct TigonUrlMapFetcher *__ptr_; struct __shared_weak_count *__cntrl_; } _mapFetcher;
  IGGCPUController *_gCPUController;
  BOOL _respectPeak;
  int _networkState;
  BOOL _didReceiveNetworkStateUpdateOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_applicationDidBecomeActive;
- (void)_applicationDidEnterBackground;
- (void)reachabilityStateChangedTo:(unsigned long long)to from:(unsigned long long)from;
@end

#endif /* IGRMDService_h */