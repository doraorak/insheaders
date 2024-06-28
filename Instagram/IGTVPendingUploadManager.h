//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVPendingUploadManager_h
#define IGTVPendingUploadManager_h
@import Foundation;

#include "IGPostCreationManagerListener-Protocol.h"
#include "IGPostShareListener-Protocol.h"

@class IGMediaUploadPerformanceLogger, IGPostCreationManager, NSCache, NSString;
@protocol IGTVUploadStatusAnnouncer;

@interface IGTVPendingUploadManager : NSObject<IGPostShareListener, IGPostCreationManagerListener> {
  /* instance variables */
  IGPostCreationManager *_postCreationManager;
  NSObject<IGTVUploadStatusAnnouncer> *_uploadStatusAnnouncer;
  NSCache *_cachedImages;
  IGMediaUploadPerformanceLogger *_mediaUploadPerformanceLogger;
}

@property (readonly, nonatomic) long long uploadStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPostCreationManager:(id)manager uploadStatusAnnouncer:(id)announcer;
- (void)setup;
- (void)postCreationManager:(id)manager didAddShare:(id)share;
- (void)postCreationManagerDidResumeArchivedPosts:(id)posts;
- (void)postCreationManager:(id)manager post:(id)post carouselDidRenderImageSource:(id)source hasEdits:(BOOL)edits;
- (void)postCreationManager:(id)manager post:(id)post carouselDidRenderVideoURL:(id)url hasEdits:(BOOL)edits;
- (void)postCreationManager:(id)manager didSuspendVideoProcessingForPost:(id)post;
- (void)postShare:(id)share didUpdateStatus:(long long)status serverResponse:(id)response;
- (void)postShare:(id)share didUpdateProgress:(double)progress;
- (void)postShare:(id)share didRenderVideoAtURL:(id)url;
- (void)postShareDidSuspendVideoProcessing:(id)processing;
@end

#endif /* IGTVPendingUploadManager_h */
