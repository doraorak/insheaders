//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImmersivePhotoLogger_h
#define IGImmersivePhotoLogger_h
@import Foundation;

@class IGUserSession;

@interface IGImmersivePhotoLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (nonatomic) unsigned long long surface;

/* instance methods */
- (id)initWithUserSession:(id)session loggingSurface:(unsigned long long)surface;
- (void)logRenderErrorWithUserSession:(id)session message:(id)message;
- (void)logRenderTimeWithUserSession:(id)session timeMs:(id)ms;
- (void)logOtherErrorWithUserSession:(id)session message:(id)message;
- (void)logDownloadErrorWithUserSession:(id)session message:(id)message;
- (void)logDownloadTimeWithUserSession:(id)session timeMs:(id)ms;
- (void)_logEventWithEventType:(int)type timeMs:(id)ms message:(id)message;
- (int)_getIgImmersiveMediaSurface;
@end

#endif /* IGImmersivePhotoLogger_h */
