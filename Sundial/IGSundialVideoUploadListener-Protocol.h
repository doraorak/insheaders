//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialVideoUploadListener_Protocol_h
#define IGSundialVideoUploadListener_Protocol_h
@import Foundation;

@protocol IGSundialVideoUploadListener <IGScopedListener>
/* instance methods */
- (void)sundialVideoDidBeginUpload:(id)upload sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels fanClubVideoType:(long long)type;
- (void)sundialVideo:(id)video didUpdateUploadProgress:(double)progress;
- (void)sundialVideoDidSuccessfullyUpload:(id)upload media:(id)media sharedToFeed:(BOOL)feed sharedToReels:(BOOL)reels sharedToProfileGrid:(BOOL)grid fanClubVideoType:(long long)type;
- (void)sundialVideoDidFailToUpload:(id)upload;
- (void)sundialVideoDidCancelUpload:(id)upload;
@end

#endif /* IGSundialVideoUploadListener_Protocol_h */
