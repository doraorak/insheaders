//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMentionMessagePostCreationListener_h
#define IGDirectMentionMessagePostCreationListener_h
@import Foundation;

#include "IGFeedItemPostedListener-Protocol.h"
#include "IGStorySharePostListener-Protocol.h"
#include "IGSundialVideoUploadListener-Protocol.h"

@class IGUserSessionProvider, NSString;
@protocol IGCommentPostedAnnouncer, IGContentNotePostedAnnouncer, IGFeedItemPostedAnnouncer, IGStorySharePostAnnouncer, IGSundialVideoUploadAnnouncer, IGTVUploadStatusAnnouncer;

@interface IGDirectMentionMessagePostCreationListener : NSObject<IGSundialVideoUploadListener, IGFeedItemPostedListener, IGStorySharePostListener> {
  /* instance variables */
  NSObject<IGSundialVideoUploadAnnouncer> *_sundialVideoUploadAnnouncer;
  NSObject<IGFeedItemPostedAnnouncer> *_feedItemPostedAnnouncer;
  NSObject<IGTVUploadStatusAnnouncer> *_igtvUploadStatusAnnouncer;
  NSObject<IGCommentPostedAnnouncer> *_commentPostedAnnouncer;
  NSObject<IGStorySharePostAnnouncer> *_storySharePostAnnouncer;
  NSObject<IGContentNotePostedAnnouncer> *_contentNotePostedAnnouncer;
  IGUserSessionProvider *_userSessionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSundialVideoUploadAnnouncer:(id)announcer feedItemPostedAnnouncer:(id)announcer igtvUploadStatusAnnouncer:(id)announcer commentPostedAnnouncer:(id)announcer storySharePostAnnouncer:(id)announcer contentNotePostedAnnouncer:(id)announcer userSessionProvider:(id)provider;
- (void)dealloc;
- (void)sundialVideoDidBeginUpload:(id)upload sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels fanClubVideoType:(long long)type;
- (void)sundialVideo:(id)video didUpdateUploadProgress:(double)progress;
- (void)sundialVideoDidSuccessfullyUpload:(id)upload media:(id)media sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels sharedToProfileGrid:(BOOL)grid fanClubVideoType:(long long)type;
- (void)sundialVideoDidFailToUpload:(id)upload;
- (void)sundialVideoDidCancelUpload:(id)upload;
- (void)feedItemWillPost:(id)post taggedProducts:(id)products;
- (void)feedItemPosted:(id)posted postId:(id)id;
- (void)feedItemPostFailed;
- (void)igtvUploadStatusDidChange:(long long)change postShare:(id)share;
- (void)igtvUploadStatusDidChangePendingUploadItems:(id)items;
- (void)igtvUploadStatusDidSucceedWithMedia:(id)media sharedPreviewToFeed:(BOOL)feed;
- (void)commentWillPost:(id)post media:(id)media;
- (void)commentPosted:(id)posted media:(id)media;
- (void)commentPostFailed:(id)failed media:(id)media;
- (void)storyItemPosted:(id)posted videoFileURL:(id)url shareType:(long long)type mediaData:(id)data postId:(id)id postShareId:(id)id reelOwner:(id)owner reelPk:(id)pk;
- (void)contentNotePosted:(id)posted onMedia:(id)media;
@end

#endif /* IGDirectMentionMessagePostCreationListener_h */
