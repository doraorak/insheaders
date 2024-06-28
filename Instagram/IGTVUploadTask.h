//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVUploadTask_h
#define IGTVUploadTask_h
@import Foundation;

@class IGPostCreationManager, IGUserSession, NSString;

@interface IGTVUploadTask : NSObject {
  /* instance variables */
  IGPostCreationManager *_postCreationManager;
  NSString *_uploadID;
  IGUserSession *_userSession;
  NSString *_liveBroadcastID;
  NSString *_liveMediaID;
  BOOL _shareWasLiveAsReels;
}

/* instance methods */
- (id)initWithUploadType:(id)type postCreationManager:(id)manager userSession:(id)session iglContext:(id)context shareWasLiveAsReels:(BOOL)reels;
- (void)cancel;
@end

#endif /* IGTVUploadTask_h */