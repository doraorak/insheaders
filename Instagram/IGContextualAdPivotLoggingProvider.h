//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContextualAdPivotLoggingProvider_h
#define IGContextualAdPivotLoggingProvider_h
@import Foundation;

#include "IGContextualAdPivotViewModel.h"

@class IGSessionTracker, IGUserSession, NSString;
@protocol IGFeedItemChaining;

@interface IGContextualAdPivotLoggingProvider : NSObject {
  /* instance variables */
  NSObject<IGFeedItemChaining> *_feedItemChain;
  IGSessionTracker *_sessionTracker;
  IGUserSession *_userSession;
  NSString *_chainingSessionID;
  IGContextualAdPivotViewModel *_viewModel;
  NSString *_analyticsModule;
}

/* instance methods */
- (id)initWithUserSession:(id)session feedItemChain:(id)chain sessionTracker:(id)tracker chainingSessionID:(id)id viewModel:(id)model analyticsModule:(id)module;
@end

#endif /* IGContextualAdPivotLoggingProvider_h */
