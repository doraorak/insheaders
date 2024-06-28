//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserAvatarStatusListener_Protocol_h
#define IGUserAvatarStatusListener_Protocol_h
@import Foundation;

@protocol IGUserAvatarStatusListener <NSObject>
/* instance methods */
- (void)avatarStatusManager:(id)manager didUpdateAvatarStatus:(long long)status;
- (void)avatarStatusManagerDidCreateAvatar:(id)avatar;
- (void)avatarStatusManagerDidDeleteAvatar:(id)avatar;
- (void)avatarStatusManagerDidUpdateAvatar:(id)avatar;
@end

#endif /* IGUserAvatarStatusListener_Protocol_h */
