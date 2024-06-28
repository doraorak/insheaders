//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationNetworker_h
#define IGLocationNetworker_h
@import Foundation;

#include "IGRequestToken-Protocol.h"
#include "IGSessionTracker.h"
#include "IGUserSession.h"

@protocol IGLocationNetworkerDelegate;

@interface IGLocationNetworker : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGSessionTracker *_sessionTracker;
  NSObject<IGRequestToken> *_requestTokenStory;
  long long _storyFetchState;
  NSObject<IGRequestToken> *_requestTokenRecent;
  long long _recentFetchState;
  NSObject<IGRequestToken> *_requestTokenTop;
  long long _topFetchState;
  NSObject<IGRequestToken> *_requestTokenInfoPage;
  long long _infoPageFetchState;
  NSObject<IGRequestToken> *_requestTokenPinMedia;
  long long _pinMediaFetchState;
  NSObject<IGLocationNetworkerDelegate> *_networkerDelegate;
}

/* instance methods */
- (id)initWithUserSession:(id)session sessionTracker:(id)tracker;
- (void)cancelRequests;
@end

#endif /* IGLocationNetworker_h */