//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef THAudioTranscriptionService_h
#define THAudioTranscriptionService_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGRequestPolicy.h"
#include "IGScopeEnding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface THAudioTranscriptionService : NSObject<IGScopeEnding> {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  IGRequestPolicy *_policy;
  NSMutableDictionary *_uploadTokensById;
  NSMutableArray *_debugTranscriptionDictionaries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker;
- (void)scopeWillEnd;
@end

#endif /* THAudioTranscriptionService_h */
