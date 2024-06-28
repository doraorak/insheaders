//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKGraphRequestMetadata_h
#define FBSDKGraphRequestMetadata_h
@import Foundation;

#include "FBSDKGraphRequest-Protocol.h"

@class NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject

@property (retain, nonatomic) NSObject<FBSDKGraphRequest> *request;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSDictionary *batchParameters;

/* instance methods */
- (id)initWithRequest:(id)request completionHandler:(id /* block */)handler batchParameters:(id)parameters;
- (void)invokeCompletionHandlerForConnection:(id)connection withResults:(id)results error:(id)error;
- (id)description;
@end

#endif /* FBSDKGraphRequestMetadata_h */