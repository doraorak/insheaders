//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShortcutSettingPayload_h
#define IGShortcutSettingPayload_h
@import Foundation;

#include "IGUserSessionPayload-Protocol.h"

@class NSOrderedSet, NSString, UIApplication;

@interface IGShortcutSettingPayload : NSObject<IGUserSessionPayload>

@property (readonly, nonatomic) NSOrderedSet *activeUsers;
@property (readonly, nonatomic) UIApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithActiveUsers:(id)users application:(id)application;
@end

#endif /* IGShortcutSettingPayload_h */