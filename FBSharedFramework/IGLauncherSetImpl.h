//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLauncherSetImpl_h
#define IGLauncherSetImpl_h
@import Foundation;

#include "FBMobileConfigAPI-Protocol.h"
#include "IGDeviceLauncherSet-Protocol.h"
#include "IGFeatureFetcher.h"
#include "IGLauncherSetExtras-Protocol.h"
#include "IGUserLauncherSet-Protocol.h"

@class NSString;

@interface IGLauncherSetImpl : NSObject<IGDeviceLauncherSet, IGUserLauncherSet, IGLauncherSetExtras> {
  /* instance variables */
  IGFeatureFetcher *_fetcher;
  NSObject<FBMobileConfigAPI> *_mobileconfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUniqueIdentifier:(id)identifier fetchClock:(id)clock mobileconfig:(id)mobileconfig;
- (id)fetcher;
- (id)launcherSet;
- (id)mobileConfig;
@end

#endif /* IGLauncherSetImpl_h */
