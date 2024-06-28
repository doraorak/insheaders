//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedRugpullAnalyzer_h
#define IGFeedRugpullAnalyzer_h
@import Foundation;

@class IGUserSession, NSMutableSet, NSNumberFormatter;

@interface IGFeedRugpullAnalyzer : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSMutableSet *_organicMediaIds;
  NSMutableSet *_adMediaIds;
  NSNumberFormatter *_formatter;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)_logIGMediaRugpullEventWithSessionId:(id)id;
@end

#endif /* IGFeedRugpullAnalyzer_h */
