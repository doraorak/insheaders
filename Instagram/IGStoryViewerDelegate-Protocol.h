//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerDelegate_Protocol_h
#define IGStoryViewerDelegate_Protocol_h
@import Foundation;

@protocol IGStoryViewerDelegate <NSObject>
/* instance methods */
- (void)storyViewer:(id)viewer didNavigateToStoryItem:(id)item;
- (void)storyViewer:(id)viewer didNavigateToStoryItem:(id)item;
- (void)storyViewerDidFinish:(id)finish navigationAction:(long long)action lastMediaID:(id)id viewerExitContextDict:(id)dict completion:(id /* block */)completion;
- (void)storyViewerShouldRemoveEmptyStateStory:(id)story navigationAction:(long long)action;
- (void)storyViewer:(id)viewer didFocusOnReelWithPK:(id)pk;
- (BOOL)storyViewerShouldPresentCamera:(id)camera;
- (void)storyViewerDidTapTryItOn:(id)on onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
- (void)storyViewerDidTapTryItOn:(id)on onEffectWithID:(id)id effectName:(id)name effectIconURL:(id)url;
- (void)storyViewerDidTapViewDay:(id)day;
- (void)storyViewerDidMute:(id)mute didMutePosts:(BOOL)posts;
- (void)storyViewerDidUnfollow:(id)unfollow;
- (void)storyViewerDidFollow:(id)follow;
@end

#endif /* IGStoryViewerDelegate_Protocol_h */