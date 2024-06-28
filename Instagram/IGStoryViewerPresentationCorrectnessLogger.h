//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerPresentationCorrectnessLogger_h
#define IGStoryViewerPresentationCorrectnessLogger_h
@import Foundation;

@class IGUserSession, NSString;

@interface IGStoryViewerPresentationCorrectnessLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_storyReelPk;
  NSString *_mediaPk;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
@end

#endif /* IGStoryViewerPresentationCorrectnessLogger_h */