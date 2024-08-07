//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPAuthenticityDocumentUploadController_h
#define SCPAuthenticityDocumentUploadController_h
@import Foundation;

#include "FBMediaUploadListener-Protocol.h"

@class FBMediaUploadHandler, NSString;
@protocol FBMediaNetworkDispatch, NSObject><FBMediaUploadProtocolProvider;

@interface SCPAuthenticityDocumentUploadController : NSObject<FBMediaUploadListener> {
  /* instance variables */
  id _retainSelfUntilCompletion;
  id /* block */ _success;
  id /* block */ _failure;
  id /* block */ _cancel;
  NSObject<FBMediaNetworkDispatch> *_networkDispatcher;
  NSObject<NSObject><FBMediaUploadProtocolProvider> *_protocolProvider;
  NSString *_jobID;
  FBMediaUploadHandler *_mediaUploadHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworkDispatcher:(id)dispatcher protocolProvider:(id)provider;
- (void)uploadDidFail:(id)fail withFailureReason:(unsigned long long)reason isResumable:(BOOL)resumable metrics:(id)metrics;
- (void)uploadDidSucceed:(id)succeed withResponse:(id)response metrics:(id)metrics;
- (void)uploadHasProgressed:(id)progressed withProgressInformation:(struct { long long x0; double x1; BOOL x2; })information;
- (void)uploadWasCancelled:(id)cancelled metrics:(id)metrics;
@end

#endif /* SCPAuthenticityDocumentUploadController_h */
