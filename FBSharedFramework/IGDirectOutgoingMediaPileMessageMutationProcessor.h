//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOutgoingMediaPileMessageMutationProcessor_h
#define IGDirectOutgoingMediaPileMessageMutationProcessor_h
@import Foundation;

#include "IGDirectMutationMediaUploadObserver.h"
#include "IGDirectMutationNetworker.h"
#include "IGDirectMutationRequestProcessing-Protocol.h"
#include "IGDirectMutationRequestProcessorExecutionResultHandling-Protocol.h"
#include "IGDirectOutgoingMessagePayload.h"
#include "IGPostCreationManager.h"
#include "IGPostExternalShareLogger.h"
#include "IGUserSessionProvider.h"

@class NSString;

@interface IGDirectOutgoingMediaPileMessageMutationProcessor : NSObject<IGDirectMutationRequestProcessing> {
  /* instance variables */
  IGDirectMutationMediaUploadObserver *_mediaUploadObserver;
  IGDirectOutgoingMessagePayload *_outgoingMessage;
  IGDirectMutationNetworker *_mutationNetworker;
  IGPostExternalShareLogger *_externalShareLogger;
  IGUserSessionProvider *_userSessionProvider;
  IGPostCreationManager *_postCreationManager;
  NSString *_uploadId;
  NSObject<IGDirectMutationRequestProcessorExecutionResultHandling> *_resultHandler;
  NSString *_mutationId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOutgoingMessage:(id)message mediaUploadObserver:(id)observer mutationNetworker:(id)networker uploadId:(id)id externalShareLogger:(id)logger userSessionProvider:(id)provider postCreationManager:(id)manager;
- (void)executeWithResultHandler:(id)handler accessoryPackage:(id)package;
- (void)handleMutationStateChange:(id)change;
- (void)_notifyODNServiceOfImageUploadedSuccessfulWithMediaFBIDList:(id)fbidlist;
@end

#endif /* IGDirectOutgoingMediaPileMessageMutationProcessor_h */
