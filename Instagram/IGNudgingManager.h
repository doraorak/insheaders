//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNudgingManager_h
#define IGNudgingManager_h
@import Foundation;

@class IGAPIRequestToken, IGMedia, IGUserSession, IGViewController;

@interface IGNudgingManager : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGAPIRequestToken *_requestToken;
  IGViewController *_presentingViewController;
  IGMedia *_media;
  BOOL _hasCheckedLoadingNudge;
  BOOL _hasCheckedCommentingNudge;
  BOOL _receivedPersistentNudge;
  unsigned long long _persistentNudgeType;
}

/* instance methods */
- (id)initWithUserSession:(id)session presentingViewController:(id)controller media:(id)media;
- (void)cancelFetch;
@end

#endif /* IGNudgingManager_h */