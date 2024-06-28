//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVisualMessageViewerConfiguration_h
#define IGDirectVisualMessageViewerConfiguration_h
@import Foundation;

@interface IGDirectVisualMessageViewerConfiguration : NSObject

@property (readonly, nonatomic) BOOL allowLoadingEmptyViewer;
@property (readonly, nonatomic) BOOL showCloseButton;
@property (readonly, nonatomic) BOOL showComposer;
@property (readonly, nonatomic) BOOL showHeaderView;
@property (readonly, nonatomic) BOOL showProgressView;
@property (readonly, nonatomic) BOOL enableAutoLooping;
@property (readonly, nonatomic) BOOL enableSwipeDownToDismiss;
@property (readonly, nonatomic) BOOL enableVideoSeekPreview;
@property (readonly, nonatomic) BOOL enableShowAllPublishedVisualMessages;
@property (readonly, nonatomic) BOOL loadInitialVisualMessageForTimeline;
@property (readonly, nonatomic) BOOL showViewOriginalButton;
@property (readonly, nonatomic) BOOL showAddToStoryButton;

/* instance methods */
- (id)initWithAllowLoadingEmptyViewer:(BOOL)viewer showCloseButton:(BOOL)button showComposer:(BOOL)composer showHeaderView:(BOOL)view showProgressView:(BOOL)view enableAutoLooping:(BOOL)looping enableSwipeDownToDismiss:(BOOL)dismiss enableVideoSeekPreview:(BOOL)preview enableShowAllPublishedVisualMessages:(BOOL)messages loadInitialVisualMessageForTimeline:(BOOL)timeline showViewOriginalButton:(BOOL)button showAddToStoryButton:(BOOL)button;
@end

#endif /* IGDirectVisualMessageViewerConfiguration_h */