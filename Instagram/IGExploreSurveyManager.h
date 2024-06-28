//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGExploreSurveyManager_h
#define IGExploreSurveyManager_h
@import Foundation;

@class IGUserSession, NSDate, NSString;

@interface IGExploreSurveyManager : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_sessionId;
  NSDate *_timeEnteredExploreTab;
  double _timeSpentOnGrid;
  double _timeSpentOnChain;
  double _timeSpentOnReels;
  BOOL _didSavePost;
  BOOL _didShareToStory;
  BOOL _didShareToDirect;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)exploreDidSavePost;
- (void)exploreDidShareToStory;
- (void)exploreDidShareToDirect;
@end

#endif /* IGExploreSurveyManager_h */