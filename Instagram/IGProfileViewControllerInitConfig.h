//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileViewControllerInitConfig_h
#define IGProfileViewControllerInitConfig_h
@import Foundation;

#include "IGAccountSwitcherPresenting-Protocol.h"

@class IGSessionTracker, IGUserDetailConfiguration;

@interface IGProfileViewControllerInitConfig : NSObject

@property (readonly, nonatomic) IGUserDetailConfiguration *configuration;
@property (readonly, nonatomic) NSObject<IGAccountSwitcherPresenting> *accountSwitcherPresenter;
@property (readonly, nonatomic) BOOL isMainProfileSurface;
@property (readonly, nonatomic) IGSessionTracker *shoppingSessionTracker;

/* instance methods */
- (id)initWithConfiguration:(id)configuration accountSwitcherPresenter:(id)presenter isMainProfileSurface:(BOOL)surface shoppingSessionTracker:(id)tracker;
@end

#endif /* IGProfileViewControllerInitConfig_h */