//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAUDChecker_h
#define IGDirectAUDChecker_h
@import Foundation;

#include "IGUserSession.h"

@class NSString;

@interface IGDirectAUDChecker : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _callBlockEnabled;
  BOOL _shareBlockEnabled;
  BOOL _inboxBlockEnabled;
  BOOL _storyReplyBlockEnabled;
  BOOL _threadComposerBlockEnabled;
  BOOL _thisAppVersionIsDeprecated;
  BOOL _loggingEnabled;
  BOOL _threadCreationBlockEnabled;
  NSString *_instagramIosAppUrl;
  NSString *_shareBlockSubtitle;
  NSString *_shareBlockTitle;
  NSString *_shareStorySubtitle;
  NSString *_storyReplyBlockSubtitle;
  NSString *_callBlockDialogTitle;
  NSString *_callBlockDialogSubtitle;
  NSString *_threadCreationTitle;
  NSString *_threadCreationSubtitle;
  NSString *_inboxTitle;
  NSString *_inboxSubtitle;
  NSString *_sessionId;
  BOOL _alreadyLoggedImpressionInTheSameSession;
  BOOL _inboxSheetDidClickOnUpdateButton;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
@end

#endif /* IGDirectAUDChecker_h */
