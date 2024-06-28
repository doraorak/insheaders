//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MSGEncryptedMediaNetworker_h
#define MSGEncryptedMediaNetworker_h
@import Foundation;

#include "MBAMailbox.h"
#include "MSGMosaicMediaNetworking-Protocol.h"

@class NSString;

@interface MSGEncryptedMediaNetworker : NSObject<MSGMosaicMediaNetworking> {
  /* instance variables */
  MBAMailbox *_mailbox;
  id /* block */ _rootCacheDirectoryRetriever;
  id /* block */ _diskCacheKeyBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRootCacheDirectoryRetriever:(id /* block */)retriever diskCacheKeyBuilder:(id /* block */)builder;
- (void)setMailbox:(id)mailbox;
- (id)addRequest:(struct { id x0; long long x1; id x2; id x3; BOOL x4; BOOL x5; struct instrumentation { id x0; id x1; BOOL x2; } x6; })request responseHandler:(id)handler;
- (void)performMediaValidationWithResponseData:(id)data requestPayload:(id)payload callbackQueue:(id)queue completionBlock:(id /* block */)block;
@end

#endif /* MSGEncryptedMediaNetworker_h */