//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloReverbThreadServiceResponseAdapter_h
#define IGDirectInstamadilloReverbThreadServiceResponseAdapter_h
@import Foundation;

#include "IGDirectInstamadilloReverbThreadNetworkerResponseAdapter.h"

@protocol IGDirectThreadServiceResponseAdapter;

@interface IGDirectInstamadilloReverbThreadServiceResponseAdapter : NSObject {
  /* instance variables */
  NSObject<IGDirectThreadServiceResponseAdapter> *_innerThreadServiceResponseAdapter;
  IGDirectInstamadilloReverbThreadNetworkerResponseAdapter *_threadResponseAdapter;
}

/* instance methods */
- (id)initWithInnerThreadServiceResponseAdapter:(id)adapter featureSets:(id)sets directCache:(id)cache instamadilloReverb:(id)reverb messageFetcher:(id)fetcher;
- (id)parseThreadForRequestWithUUID:(id)uuid threadResponse:(id)response forEndpointPath:(id)path;
- (void)postProcessRequestWithUUID:(id)uuid thread:(id)thread maxNumberOfMessages:(long long)messages completion:(id /* block */)completion;
- (void)_postProcessRequestWithUUID:(id)uuid thread:(id)thread maxNumberOfMessages:(long long)messages completion:(id /* block */)completion;
@end

#endif /* IGDirectInstamadilloReverbThreadServiceResponseAdapter_h */
