//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryIntentAwareAdsLoggingProvider_h
#define IGStoryIntentAwareAdsLoggingProvider_h
@import Foundation;

@class IGStoryViewerViewModel, IGUserSession, NSString;

@interface IGStoryIntentAwareAdsLoggingProvider : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  long long _storyViewerPosition;
  BOOL _hasScrolled;
}

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) IGStoryViewerViewModel *viewModel;
@property (readonly, nonatomic) NSString *analyticsModule;

/* instance methods */
- (id)initWithUserSession:(id)session sessionID:(id)id viewModel:(id)model storyViewerPosition:(long long)position analyticsModule:(id)module;
@end

#endif /* IGStoryIntentAwareAdsLoggingProvider_h */