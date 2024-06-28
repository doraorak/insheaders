//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIRequest_h
#define IGAPIRequest_h
@import Foundation;

#include "IGRequestPolicy.h"
#include "IGURLRequest.h"

@protocol OS_dispatch_queue;

@interface IGAPIRequest : NSObject {
  /* instance variables */
  IGURLRequest *_request;
  id /* block */ _parsingHandler;
  id /* block */ _bytesSentHandler;
  id /* block */ _firstByteFlushedHandler;
  id /* block */ _lastByteAckedHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) IGRequestPolicy *policy;

/* instance methods */
- (id)initWithRequest:(id)request parsingHandler:(id /* block */)handler;
@end

#endif /* IGAPIRequest_h */
