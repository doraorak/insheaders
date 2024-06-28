//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKURLSession_h
#define FBSDKURLSession_h
@import Foundation;

#include "NSURLSessionDataDelegate-Protocol.h"

@class NSOperationQueue, NSURLSession;

@interface FBSDKURLSession : NSObject

@property (retain) NSURLSession *session;
@property (weak, nonatomic) NSObject<NSURLSessionDataDelegate> *delegate;
@property (retain, nonatomic) NSOperationQueue *delegateQueue;

/* instance methods */
- (id)initWithDelegate:(id)delegate delegateQueue:(id)queue;
- (void)executeURLRequest:(id)urlrequest completionHandler:(id /* block */)handler;
- (void)updateSessionWithBlock:(id /* block */)block;
- (void)invalidateAndCancel;
- (BOOL)valid;
@end

#endif /* FBSDKURLSession_h */
