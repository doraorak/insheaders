//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGenAIImageBackdropRequestResolver_h
#define IGGenAIImageBackdropRequestResolver_h
@import Foundation;

#include "IGAsyncTask.h"
#include "IGGenAIImageBackdropRequest.h"
#include "IGGenAIImageGenerationJob.h"
#include "IGGenAIImageRequestQPLLogger.h"
#include "IGGenAIImageRequestResolver-Protocol.h"
#include "IGUserSession.h"

@class NSString;

@interface IGGenAIImageBackdropRequestResolver : NSObject<IGGenAIImageRequestResolver> {
  /* instance variables */
  IGUserSession *_session;
  IGGenAIImageBackdropRequest *_request;
  IGGenAIImageRequestQPLLogger *_qplLogger;
  IGGenAIImageGenerationJob *_generationJob;
  IGAsyncTask *_taskInProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session request:(id)request qplLogger:(id)logger;
- (void)runWithCompletion:(id /* block */)completion;
- (void)cancel;
@end

#endif /* IGGenAIImageBackdropRequestResolver_h */
