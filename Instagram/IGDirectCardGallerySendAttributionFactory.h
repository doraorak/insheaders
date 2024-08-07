//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectCardGallerySendAttributionFactory_h
#define IGDirectCardGallerySendAttributionFactory_h
@import Foundation;

#include "IGDirectMutationManagerListener-Protocol.h"

@class IGDirectMutationManager, NSString;
@protocol IGDirectCardGallerySendAttributionFactoryDelegate;

@interface IGDirectCardGallerySendAttributionFactory : NSObject<IGDirectMutationManagerListener> {
  /* instance variables */
  IGDirectMutationManager *_mutationManager;
  NSString *_threadId;
  NSString *_entryPoint;
  NSString *_navChain;
  BOOL _hasStarted;
  NSObject<IGDirectCardGallerySendAttributionFactoryDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMutationManager:(id)manager threadId:(id)id entryPoint:(id)point navChain:(id)chain delegate:(id)delegate;
- (void)mutationRequestWasAcknowledged:(id)acknowledged;
- (void)mutationRequestDidSucceed:(id)succeed successResponseDict:(id)dict;
- (void)mutationRequestFailedAndIsIneligibleForAutoRetry:(id)retry withError:(id)error manualRetryPermitted:(BOOL)permitted;
@end

#endif /* IGDirectCardGallerySendAttributionFactory_h */
