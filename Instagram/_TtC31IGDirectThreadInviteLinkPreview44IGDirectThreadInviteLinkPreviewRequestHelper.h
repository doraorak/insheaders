//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC31IGDirectThreadInviteLinkPreview44IGDirectThreadInviteLinkPreviewRequestHelper_h
#define _TtC31IGDirectThreadInviteLinkPreview44IGDirectThreadInviteLinkPreviewRequestHelper_h
@import Foundation;

@interface _TtC31IGDirectThreadInviteLinkPreview44IGDirectThreadInviteLinkPreviewRequestHelper : NSObject // (Swift)
/* class methods */
+ (void)getPreviewInfoWithUserSession:(id)session previewInput:(id)input successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
+ (void)joinChatWithUserSession:(id)session previewInput:(id)input successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;
+ (void)navigateToThreadWithThreadId:(id)id threadSubtype:(unsigned long long)subtype userSession:(id)session entryPoint:(id)point messageId:(id)id;
+ (void)presentErrorAlertWithTitle:(id)title subtitle:(id)subtitle;
+ (void)updateDirectInviteStatusWithUserSession:(id)session inviteId:(id)id threadId:(id)id accepted:(BOOL)accepted successHandler:(id /* block */)handler failureHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
@end

#endif /* _TtC31IGDirectThreadInviteLinkPreview44IGDirectThreadInviteLinkPreviewRequestHelper_h */