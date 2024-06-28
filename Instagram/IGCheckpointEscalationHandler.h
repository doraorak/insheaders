//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCheckpointEscalationHandler_h
#define IGCheckpointEscalationHandler_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGDirectInboxService, NSString;
@protocol IGImageImageCaching;

@interface IGCheckpointEscalationHandler : NSObject<NSObject> {
  /* instance variables */
  IGDirectInboxService *_inboxService;
  NSObject<IGImageImageCaching> *_imageCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldResnapshotInboxOnTermination;

/* instance methods */
- (id)initWithDirectInboxService:(id)service imageMemoryCache:(id)cache;
- (void)checkpointDidTerminateWithType:(id)type isCleared:(BOOL)cleared;
@end

#endif /* IGCheckpointEscalationHandler_h */
