//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSimpleProfilePictureUploadManager_h
#define IGSimpleProfilePictureUploadManager_h
@import Foundation;

#include "IGPostSessionListener-Protocol.h"

@class IGUserSession, NSMutableDictionary, NSString;

@interface IGSimpleProfilePictureUploadManager : NSObject<IGPostSessionListener> {
  /* instance variables */
  IGUserSession *_userSession;
  NSMutableDictionary *_uploadIdToUploadTaskMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)postSession:(id)session didUpdateUploadStatus:(long long)status error:(id)error;
- (void)postSession:(id)session didUpdateUploadProgress:(double)progress;
- (void)postSession:(id)session didRenderVideoAtURL:(id)url;
- (void)postSessionDidSuspendVideoProcessing:(id)processing;
@end

#endif /* IGSimpleProfilePictureUploadManager_h */