//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfilePictureManager_h
#define IGProfilePictureManager_h
@import Foundation;

#include "IGPostShareListener-Protocol.h"

@class IGUserSession, NSString;

@interface IGProfilePictureManager : NSObject<IGPostShareListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_uploadID;
  id /* block */ _successBlock;
  id /* block */ _failureBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_onProfilePictureChanged:(id)changed userUpdater:(id)updater;
+ (void)_onProfilePictureFailed:(id)failed;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)postShare:(id)share didUpdateStatus:(long long)status serverResponse:(id)response;
- (void)postShare:(id)share didUpdateProgress:(double)progress;
- (void)postShare:(id)share didRenderVideoAtURL:(id)url;
- (void)postShareDidSuspendVideoProcessing:(id)processing;
@end

#endif /* IGProfilePictureManager_h */