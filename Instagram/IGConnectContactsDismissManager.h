//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGConnectContactsDismissManager_h
#define IGConnectContactsDismissManager_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserDefaults, NSString;

@interface IGConnectContactsDismissManager : NSObject<NSObject> {
  /* instance variables */
  IGUserDefaults *_userSessionDefaults;
  long long _dismissType;
  NSString *_dismissedDateKey;
  NSString *_dismissedCountKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserDefaults:(id)defaults type:(long long)type;
- (BOOL)shouldShow;
- (void)optionDismissedWithUserSession:(id)session analyticsModule:(id)module;
- (id)_dismissedDateKeyForType;
- (id)_dismissedCountKeyForType;
@end

#endif /* IGConnectContactsDismissManager_h */
