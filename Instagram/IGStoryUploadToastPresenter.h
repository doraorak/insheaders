//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryUploadToastPresenter_h
#define IGStoryUploadToastPresenter_h
@import Foundation;

#include "IGPostShareListener-Protocol.h"
#include "IGStoryUploadListener-Protocol.h"

@class IGActionableConfirmationUploadProgressController, IGViewController, NSMutableDictionary, NSMutableSet, NSString;

@interface IGStoryUploadToastPresenter : NSObject<IGPostShareListener, IGStoryUploadListener> {
  /* instance variables */
  IGViewController *_viewController;
  IGActionableConfirmationUploadProgressController *_uploadProgressController;
  NSMutableDictionary *_uploadToastHandlers;
  NSMutableSet *_pendingToasts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStoryUploadAnnouncer:(id)announcer;
- (void)storyUpload:(id)upload removedFromReelOwner:(id)owner reelPK:(id)pk;
- (void)storyUploadStartedWithReelOwner:(id)owner reelPK:(id)pk compositionId:(id)id shareType:(long long)type;
- (void)storyDidBeginUpload:(id)upload;
- (void)storyUploadStartedWithCompositions:(id)compositions entryPoint:(long long)point;
- (void)postShare:(id)share didRenderVideoAtURL:(id)url;
- (void)postShare:(id)share didUpdateProgress:(double)progress;
- (void)postShare:(id)share didUpdateStatus:(long long)status serverResponse:(id)response;
- (void)postShareDidSuspendVideoProcessing:(id)processing;
@end

#endif /* IGStoryUploadToastPresenter_h */
