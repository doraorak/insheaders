//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserBeingProcessed_h
#define IGUserBeingProcessed_h
@import Foundation;

#include "IGUserSessionPayload-Protocol.h"

@class NSString;

@interface IGUserBeingProcessed : NSObject<IGUserSessionPayload> {
  /* instance variables */
  BOOL _isPushNotificationSyncEnabled;
}

@property (retain, nonatomic) NSString *userPk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* IGUserBeingProcessed_h */
