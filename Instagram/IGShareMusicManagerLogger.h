//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShareMusicManagerLogger_h
#define IGShareMusicManagerLogger_h
@import Foundation;

@class IGAudioBrowserCameraLogger, IGUserSession, NSString;

@interface IGShareMusicManagerLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGAudioBrowserCameraLogger *_audioBrowserLogger;
  long long _previousCameraDestination;
  long long _previousEntryPoint;
  NSString *_previousMediaId;
}

/* instance methods */
- (id)initWithUserSession:(id)session productName:(id)name;
@end

#endif /* IGShareMusicManagerLogger_h */