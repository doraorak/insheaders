//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIRequestToken_h
#define IGAPIRequestToken_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGAPIRequest.h"
#include "IGRequestToken-Protocol.h"
#include "IGURLRequest.h"

@class NSString;
@protocol IGRequestTokenCancelAnnouncer;

@interface IGAPIRequestToken : NSObject<IGRequestToken> {
  /* instance variables */
  NSObject<IGAPIClient> *_APIClient;
  IGAPIRequest *_APIRequest;
  IGURLRequest *_request;
  id /* block */ _parsingHandler;
  NSObject<IGRequestToken> *_token;
}

@property (readonly, nonatomic) NSObject<IGRequestTokenCancelAnnouncer> *cancelAnnouncer;
@property (nonatomic) unsigned long long behavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAPIClient:(id)apiclient APIRequest:(id)apirequest request:(id)request parsingHandler:(id /* block */)handler;
- (void)startWithCompletion:(id /* block */)completion;
- (void)cancel;
- (id)uploadProgress;
- (id)downloadProgress;
- (unsigned long long)requestType;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (double)totalRequestTimeInMilliseconds;
- (void)closeStream;
- (void)flushStream;
- (void)elevatePrivileges;
- (void)setIsPlaying:(BOOL)playing;
- (void)surfaceDeallocated;
@end

#endif /* IGAPIRequestToken_h */
