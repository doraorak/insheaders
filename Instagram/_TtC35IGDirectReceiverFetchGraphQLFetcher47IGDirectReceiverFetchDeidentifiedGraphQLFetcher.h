//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC35IGDirectReceiverFetchGraphQLFetcher47IGDirectReceiverFetchDeidentifiedGraphQLFetcher_h
#define _TtC35IGDirectReceiverFetchGraphQLFetcher47IGDirectReceiverFetchDeidentifiedGraphQLFetcher_h
@import Foundation;

#include "_TtP35IGDirectReceiverFetchGraphQLFetcher37IGDirectReceiverFetchFetchingProtocol_-Protocol.h"

@interface _TtC35IGDirectReceiverFetchGraphQLFetcher47IGDirectReceiverFetchDeidentifiedGraphQLFetcher : NSObject<_TtP35IGDirectReceiverFetchGraphQLFetcher37IGDirectReceiverFetchFetchingProtocol_> { // (Swift)
  /* instance variables */
   pandoService;
   deidentifiedRequestProvider;
}

/* instance methods */
- (void)fetchPreviewDataWithFetchParams:(id)params experimentParams:(id)params userAgent:(id)agent successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (id)init;
@end

#endif /* _TtC35IGDirectReceiverFetchGraphQLFetcher47IGDirectReceiverFetchDeidentifiedGraphQLFetcher_h */
