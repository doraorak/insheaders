//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPostCreationManagerListener_Protocol_h
#define IGPostCreationManagerListener_Protocol_h
@import Foundation;

@protocol IGPostCreationManagerListener <NSObject>
/* instance methods */
- (void)postCreationManagerDidResumeArchivedPosts:(id)posts;
- (void)postCreationManager:(id)manager didAddShare:(id)share;
- (void)postCreationManager:(id)manager didAddShare:(id)share;
- (void)postCreationManager:(id)manager post:(id)post carouselDidRenderImageSource:(id)source hasEdits:(BOOL)edits;
- (void)postCreationManager:(id)manager post:(id)post carouselDidRenderVideoURL:(id)url hasEdits:(BOOL)edits;
- (void)postCreationManager:(id)manager didSuspendVideoProcessingForPost:(id)post;
@end

#endif /* IGPostCreationManagerListener_Protocol_h */
