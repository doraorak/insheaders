//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserScopedObjects_IGFXCALManager_h
#define IGUserScopedObjects_IGFXCALManager_h
@import Foundation;

#include "FXAccountCache.h"
#include "FXServiceCache.h"
#include "FXUnifiedClientCache.h"
#include "IGUserDefaults.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGUserSessionProvider.h"
#include "IGWarmStartListener-Protocol.h"

@class NSString;
@protocol IGFXCALManagerDelegate;

@interface IGUserScopedObjects (IGFXCALManager)
/* instance methods */
- (id)FXCALManager;
@end

#endif /* IGUserScopedObjects_IGFXCALManager_h */
