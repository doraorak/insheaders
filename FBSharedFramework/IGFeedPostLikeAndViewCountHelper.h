//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPostLikeAndViewCountHelper_h
#define IGFeedPostLikeAndViewCountHelper_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGUser.h"
#include "IGUserDefaults.h"
#include "IGUserIntentHandler.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "IGVideoUploadCache.h"

@protocol IGFeedPostLikeAndViewCountSettingAnnouncer;

@interface IGFeedPostLikeAndViewCountHelper : NSObject {
  /* instance variables */
  IGUser *_user;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  IGVideoUploadCache *_videoUploadCache;
  IGUserDefaults *_sessionUserDefaults;
  NSObject<IGFeedPostLikeAndViewCountSettingAnnouncer> *_feedPostLikeAndViewCountSettingAnnouncer;
  NSObject<IGAPIClient> *_networker;
  IGUserIntentHandler *_intentHandler;
  BOOL _shouldHideLikesAndViewCounts;
}

/* instance methods */
- (id)initWithCurrentUser:(id)user launcherSet:(id)set videoUploadCache:(id)cache sessionUserDefaults:(id)defaults feedPostLikeAndViewCountSettingAnnouncer:(id)announcer networker:(id)networker intentHandler:(id)handler;
@end

#endif /* IGFeedPostLikeAndViewCountHelper_h */