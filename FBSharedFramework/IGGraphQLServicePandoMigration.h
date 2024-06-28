//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGraphQLServicePandoMigration_h
#define IGGraphQLServicePandoMigration_h
@import Foundation;

#include "IGDeviceLauncherSetProviding-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGGraphQLServicePandoMigration : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGUserLauncherSetProviding> *_userLauncherSet;
  NSObject<IGDeviceLauncherSetProviding> *_deviceLauncherSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserLauncherSet:(id)set deviceLauncher:(id)launcher;
- (BOOL)shouldUsePando:(id)pando;
- (BOOL)shouldUsePandoQueryBuilder:(id)builder;
@end

#endif /* IGGraphQLServicePandoMigration_h */
