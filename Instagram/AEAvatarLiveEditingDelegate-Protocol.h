//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AEAvatarLiveEditingDelegate_Protocol_h
#define AEAvatarLiveEditingDelegate_Protocol_h
@import Foundation;

@protocol AEAvatarLiveEditingDelegate <NSObject>
/* instance methods */
- (void)avatarLiveEditingDidStartUpdatingAvatarWithId:(id)id;
- (void)avatarLiveEditingDidCompleteUpdatingAvatarWithId:(id)id error:(id)error;
- (void)avatarLiveEditingDidStartGeneratingAvatarWithId:(id)id;
- (void)avatarLiveEditingDidCompleteGeneratingAvatarWithId:(id)id fromCache:(BOOL)cache error:(id)error;
- (void)avatarLiveEditingDidStartParametersUpdateWithId:(id)id;
- (void)avatarLiveEditingDidCompleteParametersUpdateWithId:(id)id error:(id)error;
- (void)avatarLiveEditingDidStartRenderUpdateWithId:(id)id;
- (void)avatarLiveEditingDidCompleteRenderUpdateWithId:(id)id error:(id)error;
@end

#endif /* AEAvatarLiveEditingDelegate_Protocol_h */