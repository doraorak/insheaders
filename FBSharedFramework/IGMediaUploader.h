//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaUploader_h
#define IGMediaUploader_h
@import Foundation;

#include "FBMediaUploadJob-Protocol.h"
#include "FBMediaUploadListener-Protocol.h"
#include "IGFBMediaUploadListenerWrapper.h"
#include "IGMediaUploaderDelegate-Protocol.h"
#include "IGUserSession.h"

@class NSString;

@interface IGMediaUploader : NSObject<FBMediaUploadListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_opaqueTokenFlowNamespace;
  IGFBMediaUploadListenerWrapper *_uploadJobListener;
  NSObject<FBMediaUploadJob> *_uploadJob;
}

@property (weak, nonatomic) NSObject<IGMediaUploaderDelegate> *delegate;
@property (nonatomic) BOOL shouldUseMessengerInfra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithUserSession:(id)session opaqueTokenFlowNamespace:(id)namespace;
- (void)cancelUpload;
- (void)uploadDidSucceed:(id)succeed withResponse:(id)response metrics:(id)metrics;
- (void)uploadDidFail:(id)fail withFailureReason:(unsigned long long)reason isResumable:(BOOL)resumable metrics:(id)metrics;
- (void)uploadWasCancelled:(id)cancelled metrics:(id)metrics;
- (void)uploadHasProgressed:(id)progressed withProgressInformation:(struct { long long x0; double x1; BOOL x2; })information;
@end

#endif /* IGMediaUploader_h */
